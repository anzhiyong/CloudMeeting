/****************************************************************************
** Meta object code from reading C++ file 'AudioInput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../CloudMeeting/AudioInput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioInput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AudioInput_t {
    QByteArrayData data[10];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioInput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioInput_t qt_meta_stringdata_AudioInput = {
    {
QT_MOC_LITERAL(0, 0, 10), // "AudioInput"
QT_MOC_LITERAL(1, 11, 15), // "audioinputerror"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "onreadyRead"
QT_MOC_LITERAL(4, 40, 18), // "handleStateChanged"
QT_MOC_LITERAL(5, 59, 13), // "QAudio::State"
QT_MOC_LITERAL(6, 73, 11), // "errorString"
QT_MOC_LITERAL(7, 85, 9), // "setVolumn"
QT_MOC_LITERAL(8, 95, 12), // "startCollect"
QT_MOC_LITERAL(9, 108, 11) // "stopCollect"

    },
    "AudioInput\0audioinputerror\0\0onreadyRead\0"
    "handleStateChanged\0QAudio::State\0"
    "errorString\0setVolumn\0startCollect\0"
    "stopCollect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioInput[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   52,    2, 0x08 /* Private */,
       4,    1,   53,    2, 0x08 /* Private */,
       6,    0,   56,    2, 0x08 /* Private */,
       7,    1,   57,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::QString,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AudioInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AudioInput *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->audioinputerror((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->onreadyRead(); break;
        case 2: _t->handleStateChanged((*reinterpret_cast< QAudio::State(*)>(_a[1]))); break;
        case 3: { QString _r = _t->errorString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->setVolumn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->startCollect(); break;
        case 6: _t->stopCollect(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudio::State >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AudioInput::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioInput::audioinputerror)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AudioInput::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AudioInput.data,
    qt_meta_data_AudioInput,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AudioInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioInput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioInput.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AudioInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void AudioInput::audioinputerror(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
