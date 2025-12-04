/****************************************************************************
** Meta object code from reading C++ file 'mytcpsocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../CloudMeeting/mytcpsocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mytcpsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyTcpSocket_t {
    QByteArrayData data[14];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyTcpSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyTcpSocket_t qt_meta_stringdata_MyTcpSocket = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MyTcpSocket"
QT_MOC_LITERAL(1, 12, 11), // "socketerror"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(4, 54, 12), // "sendTextOver"
QT_MOC_LITERAL(5, 67, 13), // "connectServer"
QT_MOC_LITERAL(6, 81, 23), // "QIODevice::OpenModeFlag"
QT_MOC_LITERAL(7, 105, 8), // "sendData"
QT_MOC_LITERAL(8, 114, 5), // "MESG*"
QT_MOC_LITERAL(9, 120, 11), // "closeSocket"
QT_MOC_LITERAL(10, 132, 14), // "recvFromSocket"
QT_MOC_LITERAL(11, 147, 15), // "stopImmediately"
QT_MOC_LITERAL(12, 163, 11), // "errorDetect"
QT_MOC_LITERAL(13, 175, 5) // "error"

    },
    "MyTcpSocket\0socketerror\0\0"
    "QAbstractSocket::SocketError\0sendTextOver\0"
    "connectServer\0QIODevice::OpenModeFlag\0"
    "sendData\0MESG*\0closeSocket\0recvFromSocket\0"
    "stopImmediately\0errorDetect\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyTcpSocket[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    3,   58,    2, 0x08 /* Private */,
       7,    1,   65,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x0a /* Public */,
      11,    0,   70,    2, 0x0a /* Public */,
      12,    1,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, 0x80000000 | 6,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   13,

       0        // eod
};

void MyTcpSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyTcpSocket *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->socketerror((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 1: _t->sendTextOver(); break;
        case 2: { bool _r = _t->connectServer((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QIODevice::OpenModeFlag(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->sendData((*reinterpret_cast< MESG*(*)>(_a[1]))); break;
        case 4: _t->closeSocket(); break;
        case 5: _t->recvFromSocket(); break;
        case 6: _t->stopImmediately(); break;
        case 7: _t->errorDetect((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MESG* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyTcpSocket::*)(QAbstractSocket::SocketError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyTcpSocket::socketerror)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MyTcpSocket::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyTcpSocket::sendTextOver)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyTcpSocket::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_MyTcpSocket.data,
    qt_meta_data_MyTcpSocket,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyTcpSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyTcpSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyTcpSocket.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int MyTcpSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void MyTcpSocket::socketerror(QAbstractSocket::SocketError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyTcpSocket::sendTextOver()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
