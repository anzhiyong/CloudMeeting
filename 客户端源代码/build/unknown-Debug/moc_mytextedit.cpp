/****************************************************************************
** Meta object code from reading C++ file 'mytextedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../CloudMeeting/mytextedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mytextedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Completer_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Completer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Completer_t qt_meta_stringdata_Completer = {
    {
QT_MOC_LITERAL(0, 0, 9) // "Completer"

    },
    "Completer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Completer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Completer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Completer::staticMetaObject = { {
    QMetaObject::SuperData::link<QCompleter::staticMetaObject>(),
    qt_meta_stringdata_Completer.data,
    qt_meta_data_Completer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Completer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Completer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Completer.stringdata0))
        return static_cast<void*>(this);
    return QCompleter::qt_metacast(_clname);
}

int Completer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCompleter::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MyTextEdit_t {
    QByteArrayData data[4];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyTextEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyTextEdit_t qt_meta_stringdata_MyTextEdit = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MyTextEdit"
QT_MOC_LITERAL(1, 11, 16), // "changeCompletion"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8) // "complete"

    },
    "MyTextEdit\0changeCompletion\0\0complete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyTextEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       3,    0,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void MyTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyTextEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changeCompletion((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->complete(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyTextEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MyTextEdit.data,
    qt_meta_data_MyTextEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyTextEdit.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MyTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
