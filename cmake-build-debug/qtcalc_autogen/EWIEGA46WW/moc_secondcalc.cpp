/****************************************************************************
** Meta object code from reading C++ file 'secondcalc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../secondcalc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'secondcalc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_secondcalc_t {
    QByteArrayData data[15];
    char stringdata0[363];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_secondcalc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_secondcalc_t qt_meta_stringdata_secondcalc = {
    {
QT_MOC_LITERAL(0, 0, 10), // "secondcalc"
QT_MOC_LITERAL(1, 11, 29), // "on_pushButton_returns_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 14), // "digit_presseds"
QT_MOC_LITERAL(4, 57, 26), // "on_pushButton_adds_clicked"
QT_MOC_LITERAL(5, 84, 26), // "on_pushButton_subs_clicked"
QT_MOC_LITERAL(6, 111, 26), // "on_pushButton_muls_clicked"
QT_MOC_LITERAL(7, 138, 26), // "on_pushButton_divs_clicked"
QT_MOC_LITERAL(8, 165, 26), // "on_pushButton_dots_clicked"
QT_MOC_LITERAL(9, 192, 27), // "on_pushButton_signs_clicked"
QT_MOC_LITERAL(10, 220, 30), // "on_pushButton_percents_clicked"
QT_MOC_LITERAL(11, 251, 24), // "on_pushButton_Cs_clicked"
QT_MOC_LITERAL(12, 276, 28), // "on_pushButton_Enters_clicked"
QT_MOC_LITERAL(13, 305, 29), // "on_pushButton_squares_clicked"
QT_MOC_LITERAL(14, 335, 27) // "on_pushButton_roots_clicked"

    },
    "secondcalc\0on_pushButton_returns_clicked\0"
    "\0digit_presseds\0on_pushButton_adds_clicked\0"
    "on_pushButton_subs_clicked\0"
    "on_pushButton_muls_clicked\0"
    "on_pushButton_divs_clicked\0"
    "on_pushButton_dots_clicked\0"
    "on_pushButton_signs_clicked\0"
    "on_pushButton_percents_clicked\0"
    "on_pushButton_Cs_clicked\0"
    "on_pushButton_Enters_clicked\0"
    "on_pushButton_squares_clicked\0"
    "on_pushButton_roots_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_secondcalc[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    0,   80,    2, 0x0a /* Public */,
       4,    0,   81,    2, 0x0a /* Public */,
       5,    0,   82,    2, 0x0a /* Public */,
       6,    0,   83,    2, 0x0a /* Public */,
       7,    0,   84,    2, 0x0a /* Public */,
       8,    0,   85,    2, 0x0a /* Public */,
       9,    0,   86,    2, 0x0a /* Public */,
      10,    0,   87,    2, 0x0a /* Public */,
      11,    0,   88,    2, 0x0a /* Public */,
      12,    0,   89,    2, 0x0a /* Public */,
      13,    0,   90,    2, 0x0a /* Public */,
      14,    0,   91,    2, 0x0a /* Public */,

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
    QMetaType::Void,

       0        // eod
};

void secondcalc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<secondcalc *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_returns_clicked(); break;
        case 1: _t->digit_presseds(); break;
        case 2: _t->on_pushButton_adds_clicked(); break;
        case 3: _t->on_pushButton_subs_clicked(); break;
        case 4: _t->on_pushButton_muls_clicked(); break;
        case 5: _t->on_pushButton_divs_clicked(); break;
        case 6: _t->on_pushButton_dots_clicked(); break;
        case 7: _t->on_pushButton_signs_clicked(); break;
        case 8: _t->on_pushButton_percents_clicked(); break;
        case 9: _t->on_pushButton_Cs_clicked(); break;
        case 10: _t->on_pushButton_Enters_clicked(); break;
        case 11: _t->on_pushButton_squares_clicked(); break;
        case 12: _t->on_pushButton_roots_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject secondcalc::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_secondcalc.data,
    qt_meta_data_secondcalc,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *secondcalc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *secondcalc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_secondcalc.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int secondcalc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
