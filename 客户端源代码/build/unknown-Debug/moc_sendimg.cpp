/****************************************************************************
** Meta object code from reading C++ file 'sendimg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../CloudMeeting/sendimg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendimg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SendImg_t {
    QByteArrayData data[5];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SendImg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SendImg_t qt_meta_stringdata_SendImg = {
    {
QT_MOC_LITERAL(0, 0, 7), // "SendImg"
QT_MOC_LITERAL(1, 8, 12), // "ImageCapture"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 13), // "clearImgQueue"
QT_MOC_LITERAL(4, 36, 15) // "stopImmediately"

    },
    "SendImg\0ImageCapture\0\0clearImgQueue\0"
    "stopImmediately"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SendImg[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       3,    0,   32,    2, 0x0a /* Public */,
       4,    0,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SendImg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SendImg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ImageCapture((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->clearImgQueue(); break;
        case 2: _t->stopImmediately(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SendImg::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_SendImg.data,
    qt_meta_data_SendImg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SendImg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SendImg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SendImg.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int SendImg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
