/****************************************************************************
** Meta object code from reading C++ file 'KeyView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "KeyView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'KeyView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KeyView_t {
    QByteArrayData data[14];
    char stringdata[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KeyView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KeyView_t qt_meta_stringdata_KeyView = {
    {
QT_MOC_LITERAL(0, 0, 7), // "KeyView"
QT_MOC_LITERAL(1, 8, 9), // "upPressed"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 11), // "downPressed"
QT_MOC_LITERAL(4, 31, 11), // "leftPressed"
QT_MOC_LITERAL(5, 43, 12), // "rightPressed"
QT_MOC_LITERAL(6, 56, 12), // "enterPressed"
QT_MOC_LITERAL(7, 69, 12), // "clearPressed"
QT_MOC_LITERAL(8, 82, 10), // "upReleased"
QT_MOC_LITERAL(9, 93, 12), // "downReleased"
QT_MOC_LITERAL(10, 106, 12), // "leftReleased"
QT_MOC_LITERAL(11, 119, 13), // "rightReleased"
QT_MOC_LITERAL(12, 133, 13), // "enterReleased"
QT_MOC_LITERAL(13, 147, 13) // "clearReleased"

    },
    "KeyView\0upPressed\0\0downPressed\0"
    "leftPressed\0rightPressed\0enterPressed\0"
    "clearPressed\0upReleased\0downReleased\0"
    "leftReleased\0rightReleased\0enterReleased\0"
    "clearReleased"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KeyView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    0,   75,    2, 0x0a /* Public */,
       4,    0,   76,    2, 0x0a /* Public */,
       5,    0,   77,    2, 0x0a /* Public */,
       6,    0,   78,    2, 0x0a /* Public */,
       7,    0,   79,    2, 0x0a /* Public */,
       8,    0,   80,    2, 0x0a /* Public */,
       9,    0,   81,    2, 0x0a /* Public */,
      10,    0,   82,    2, 0x0a /* Public */,
      11,    0,   83,    2, 0x0a /* Public */,
      12,    0,   84,    2, 0x0a /* Public */,
      13,    0,   85,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KeyView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KeyView *_t = static_cast<KeyView *>(_o);
        switch (_id) {
        case 0: _t->upPressed(); break;
        case 1: _t->downPressed(); break;
        case 2: _t->leftPressed(); break;
        case 3: _t->rightPressed(); break;
        case 4: _t->enterPressed(); break;
        case 5: _t->clearPressed(); break;
        case 6: _t->upReleased(); break;
        case 7: _t->downReleased(); break;
        case 8: _t->leftReleased(); break;
        case 9: _t->rightReleased(); break;
        case 10: _t->enterReleased(); break;
        case 11: _t->clearReleased(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject KeyView::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_KeyView.data,
      qt_meta_data_KeyView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KeyView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KeyView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KeyView.stringdata))
        return static_cast<void*>(const_cast< KeyView*>(this));
    return QDialog::qt_metacast(_clname);
}

int KeyView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
