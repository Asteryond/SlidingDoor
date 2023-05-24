/****************************************************************************
** Meta object code from reading C++ file 'DAQ_GUI_QT.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DAQ_GUI_QT.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DAQ_GUI_QT.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DAQ_GUI_QT_t {
    QByteArrayData data[18];
    char stringdata0[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DAQ_GUI_QT_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DAQ_GUI_QT_t qt_meta_stringdata_DAQ_GUI_QT = {
    {
QT_MOC_LITERAL(0, 0, 10), // "DAQ_GUI_QT"
QT_MOC_LITERAL(1, 11, 17), // "onBtnSettingClick"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 17), // "onBtnRefreshClick"
QT_MOC_LITERAL(4, 48, 25), // "onCheckboxAllStateChanged"
QT_MOC_LITERAL(5, 74, 20), // "onBtnConnectDAQClick"
QT_MOC_LITERAL(6, 95, 17), // "onBtnStartClicked"
QT_MOC_LITERAL(7, 113, 16), // "onBtnStopClicked"
QT_MOC_LITERAL(8, 130, 20), // "onBtnDIOStartClicked"
QT_MOC_LITERAL(9, 151, 19), // "onBtnDIOStopClicked"
QT_MOC_LITERAL(10, 171, 17), // "indicatorControll"
QT_MOC_LITERAL(11, 189, 14), // "getCurrentTime"
QT_MOC_LITERAL(12, 204, 10), // "drawPoints"
QT_MOC_LITERAL(13, 215, 7), // "resCode"
QT_MOC_LITERAL(14, 223, 6), // "float*"
QT_MOC_LITERAL(15, 230, 6), // "points"
QT_MOC_LITERAL(16, 237, 4), // "size"
QT_MOC_LITERAL(17, 242, 9) // "chanCount"

    },
    "DAQ_GUI_QT\0onBtnSettingClick\0\0"
    "onBtnRefreshClick\0onCheckboxAllStateChanged\0"
    "onBtnConnectDAQClick\0onBtnStartClicked\0"
    "onBtnStopClicked\0onBtnDIOStartClicked\0"
    "onBtnDIOStopClicked\0indicatorControll\0"
    "getCurrentTime\0drawPoints\0resCode\0"
    "float*\0points\0size\0chanCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DAQ_GUI_QT[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    0,   77,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x0a /* Public */,
      12,    4,   79,    2, 0x0a /* Public */,

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
    QMetaType::Void, QMetaType::Int, 0x80000000 | 14, QMetaType::Int, QMetaType::Int,   13,   15,   16,   17,

       0        // eod
};

void DAQ_GUI_QT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DAQ_GUI_QT *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onBtnSettingClick(); break;
        case 1: _t->onBtnRefreshClick(); break;
        case 2: _t->onCheckboxAllStateChanged(); break;
        case 3: _t->onBtnConnectDAQClick(); break;
        case 4: _t->onBtnStartClicked(); break;
        case 5: _t->onBtnStopClicked(); break;
        case 6: _t->onBtnDIOStartClicked(); break;
        case 7: _t->onBtnDIOStopClicked(); break;
        case 8: _t->indicatorControll(); break;
        case 9: _t->getCurrentTime(); break;
        case 10: _t->drawPoints((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DAQ_GUI_QT::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_DAQ_GUI_QT.data,
    qt_meta_data_DAQ_GUI_QT,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DAQ_GUI_QT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DAQ_GUI_QT::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DAQ_GUI_QT.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int DAQ_GUI_QT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
