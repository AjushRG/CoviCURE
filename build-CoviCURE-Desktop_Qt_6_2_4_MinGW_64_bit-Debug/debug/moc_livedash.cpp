/****************************************************************************
** Meta object code from reading C++ file 'livedash.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CoviCURE/Headers/Live/livedash.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'livedash.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Livedash_t {
    const uint offsetsAndSize[14];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Livedash_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Livedash_t qt_meta_stringdata_Livedash = {
    {
QT_MOC_LITERAL(0, 8), // "Livedash"
QT_MOC_LITERAL(9, 24), // "on_pushButtonWHO_clicked"
QT_MOC_LITERAL(34, 0), // ""
QT_MOC_LITERAL(35, 25), // "on_pushButtonMoHP_clicked"
QT_MOC_LITERAL(61, 26), // "on_pushButtonWorld_clicked"
QT_MOC_LITERAL(88, 26), // "on_pushButtonNepal_clicked"
QT_MOC_LITERAL(115, 25) // "on_pushButtonBack_clicked"

    },
    "Livedash\0on_pushButtonWHO_clicked\0\0"
    "on_pushButtonMoHP_clicked\0"
    "on_pushButtonWorld_clicked\0"
    "on_pushButtonNepal_clicked\0"
    "on_pushButtonBack_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Livedash[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Livedash::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Livedash *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButtonWHO_clicked(); break;
        case 1: _t->on_pushButtonMoHP_clicked(); break;
        case 2: _t->on_pushButtonWorld_clicked(); break;
        case 3: _t->on_pushButtonNepal_clicked(); break;
        case 4: _t->on_pushButtonBack_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject Livedash::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Livedash.offsetsAndSize,
    qt_meta_data_Livedash,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Livedash_t
, QtPrivate::TypeAndForceComplete<Livedash, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Livedash::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Livedash::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Livedash.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Livedash::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
