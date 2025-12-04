#include "netheader.h"
#include "logqueue.h"
#include <QDebug>
#include <time.h>

QUEUE_DATA<MESG> queue_send; //�ı�����Ƶ���Ͷ���
QUEUE_DATA<MESG> queue_recv; //���ն���
QUEUE_DATA<MESG> audio_recv; //��Ƶ���ն���

LogQueue *logqueue = nullptr;

void log_print(const char *filename, const char *funcname, int line, const char *fmt, ...)
{
    Log *log = (Log *) malloc(sizeof (Log));
    if(log == nullptr)
    {
        qDebug() << "malloc log fail";
    }
    else
    {
        memset(log, 0, sizeof (Log));
        log->ptr = (char *) malloc(1 * KB);
        if(log->ptr == nullptr)
        {
            free(log);
            qDebug() << "malloc log.ptr fail";
            return;
        }
        else
        {
            memset(log->ptr, 0, 1 * KB);
            time_t t = time(NULL);
            int pos = 0;
            int m = strftime(log->ptr + pos, KB - 2 - pos, "%F %H:%M:%S ", localtime(&t));
			pos += m;

            m = snprintf(log->ptr + pos, KB - 2 - pos, "%s:%s::%d>>>", filename, funcname, line);
			pos += m;

            va_list ap;
            va_start(ap, fmt);
           m = vsnprintf(log->ptr + pos, KB - 2 - pos, fmt, ap);
            if (m < 0) m = 0; // 避免 vsnprintf 出错
            pos += m;
            va_end(ap);

            // 手动添加换行，避免越界
            if (pos < KB - 1) {
                log->ptr[pos] = '\n';
                pos++;
                log->ptr[pos] = '\0';
            }

            log->len = strlen(log->ptr);
            logqueue->pushLog(log);
        }
    }
}
