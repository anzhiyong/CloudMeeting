/****************************************************************************
** Meta object code from reading C++ file 'AudioOutput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../CloudMeeting/AudioOutput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioOutput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AudioOutput_t {
    QByteArrayData data[8];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioOutput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioOutput_t qt_meta_stringdata_AudioOutput = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AudioOutput"
QT_MOC_LITERAL(1, 12, 16), // "audiooutputerror"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 7), // "speaker"
QT_MOC_LITERAL(4, 38, 18), // "handleStateChanged"
QT_MOC_LITERAL(5, 57, 13), // "QAudio::State"
QT_MOC_LITERAL(6, 71, 9), // "setVolumn"
QT_MOC_LITERAL(7, 81, 10) // "clearQueue"

    },
    "AudioOutput\0audiooutputerror\0\0speaker\0"
    "handleStateChanged\0QAudio::State\0"
    "setVolumn\0clearQueue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioOutput[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       3,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   45,    2, 0x08 /* Private */,
       6,    1,   48,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void AudioOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AudioOutput *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->audiooutputerror((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->speaker((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->handleStateChanged((*reinterpret_cast< QAudio::State(*)>(_a[1]))); break;
        case 3: _t->setVolumn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->clearQueue(); break;
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
            using _t = void (AudioOutput::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioOutput::audiooutputerror)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AudioOutput::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioOutput::speaker)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AudioOutput::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_AudioOutput.data,
    qt_meta_data_AudioOutput,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AudioOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioOutput.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int AudioOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void AudioOutput::audiooutputerror(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AudioOutput::speaker(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
