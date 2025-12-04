#include "logqueue.h"
#include <QDebug>
#include <cstring>
#include <cerrno>

LogQueue::LogQueue(QObject *parent) : QThread(parent), logfile(nullptr)
{
    // 在构造函数中打开日志文件
    logfile = fopen("./log.txt", "a");
    if (!logfile) {
        qDebug() << "打开日志文件失败:" << strerror(errno);
    }
}

void LogQueue::pushLog(Log* log)
{
    log_queue.push_msg(log);
}

void LogQueue::run()
{
    m_isCanRun = true;
    for(;;)
    {
        {
            QMutexLocker lock(&m_lock);
            if(m_isCanRun == false)
            {
                return;
            }
        }
        Log *log = log_queue.pop_msg();
        if(log == NULL || log->ptr == NULL) continue;

        // 如果文件未打开，尝试重新打开
        if (!logfile) {
            logfile = fopen("./log.txt", "a");
            if (!logfile) {
                qDebug() << "打开日志文件失败:" << strerror(errno);
                // 释放日志数据并继续
                if(log->ptr) free(log->ptr);
                if(log) free(log);
                continue;
            }
        }

        //----------------write to logfile-------------------
        qint64 hastowrite = log->len;
        qint64 ret = 0, haswrite = 0;
        while ((ret = fwrite( (char*)log->ptr + haswrite, 1 ,hastowrite - haswrite, logfile)) < hastowrite)
        {
            if (ret < 0 && (errno == EAGAIN || errno == EWOULDBLOCK) )
            {
                ret = 0;
            }
            else
            {
                qDebug() << "write logfile error";
                break;
            }
            haswrite += ret;
            hastowrite -= ret;
        }

        //free
        if(log->ptr) free(log->ptr);
        if(log) free(log);

        // 刷新缓冲区，但不关闭文件
        if(logfile) {
            fflush(logfile);
        }
    }
}

void LogQueue::stopImmediately()
{
    QMutexLocker lock(&m_lock);
    m_isCanRun = false;
}

LogQueue::~LogQueue()
{
    // 等待线程结束
    if(isRunning()) {
        stopImmediately();
        wait();
    }
    // 关闭日志文件
    if(logfile) {
        fflush(logfile);
        fclose(logfile);
        logfile = nullptr;
    }
}
