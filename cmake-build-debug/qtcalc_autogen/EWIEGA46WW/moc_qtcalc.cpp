/****************************************************************************
** Meta object code from reading C++ file 'qtcalc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtcalc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtcalc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qtcalc_t {
    QByteArrayData data[15];
    char stringdata0[343];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qtcalc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qtcalc_t qt_meta_stringdata_qtcalc = {
    {
QT_MOC_LITERAL(0, 0, 6), // "qtcalc"
QT_MOC_LITERAL(1, 7, 13), // "digit_pressed"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 25), // "on_pushButton_add_clicked"
QT_MOC_LITERAL(4, 48, 25), // "on_pushButton_sub_clicked"
QT_MOC_LITERAL(5, 74, 25), // "on_pushButton_mul_clicked"
QT_MOC_LITERAL(6, 100, 25), // "on_pushButton_div_clicked"
QT_MOC_LITERAL(7, 126, 25), // "on_pushButton_dot_clicked"
QT_MOC_LITERAL(8, 152, 26), // "on_pushButton_sign_clicked"
QT_MOC_LITERAL(9, 179, 29), // "on_pushButton_percent_clicked"
QT_MOC_LITERAL(10, 209, 23), // "on_pushButton_C_clicked"
QT_MOC_LITERAL(11, 233, 27), // "on_pushButton_Enter_clicked"
QT_MOC_LITERAL(12, 261, 28), // "on_pushButton_square_clicked"
QT_MOC_LITERAL(13, 290, 26), // "on_pushButton_root_clicked"
QT_MOC_LITERAL(14, 317, 25) // "on_pushButton_adv_clicked"

    },
    "qtcalc\0digit_pressed\0\0on_pushButton_add_clicked\0"
    "on_pushButton_sub_clicked\0"
    "on_pushButton_mul_clicked\0"
    "on_pushButton_div_clicked\0"
    "on_pushButton_dot_clicked\0"
    "on_pushButton_sign_clicked\0"
    "on_pushButton_percent_clicked\0"
    "on_pushButton_C_clicked\0"
    "on_pushButton_Enter_clicked\0"
    "on_pushButton_square_clicked\0"
    "on_pushButton_root_clicked\0"
    "on_pushButton_adv_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtcalc[] = {

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

void qtcalc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qtcalc *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->digit_pressed(); break;
        case 1: _t->on_pushButton_add_clicked(); break;
        case 2: _t->on_pushButton_sub_clicked(); break;
        case 3: _t->on_pushButton_mul_clicked(); break;
        case 4: _t->on_pushButton_div_clicked(); break;
        case 5: _t->on_pushButton_dot_clicked(); break;
        case 6: _t->on_pushButton_sign_clicked(); break;
        case 7: _t->on_pushButton_percent_clicked(); break;
        case 8: _t->on_pushButton_C_clicked(); break;
        case 9: _t->on_pushButton_Enter_clicked(); break;
        case 10: _t->on_pushButton_square_clicked(); break;
        case 11: _t->on_pushButton_root_clicked(); break;
        case 12: _t->on_pushButton_adv_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject qtcalc::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_qtcalc.data,
    qt_meta_data_qtcalc,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qtcalc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtcalc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qtcalc.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qtcalc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
