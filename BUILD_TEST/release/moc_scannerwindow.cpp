/****************************************************************************
** Meta object code from reading C++ file 'scannerwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../FINAL_FINAL/scannerwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scannerwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ScannerWindow_t {
    QByteArrayData data[13];
    char stringdata0[350];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScannerWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScannerWindow_t qt_meta_stringdata_ScannerWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ScannerWindow"
QT_MOC_LITERAL(1, 14, 39), // "on_openPreviousScanWindowButt..."
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 30), // "on_newScanWindowButton_clicked"
QT_MOC_LITERAL(4, 86, 39), // "on_previousScanWindowHomeButt..."
QT_MOC_LITERAL(5, 126, 24), // "on_registerButon_clicked"
QT_MOC_LITERAL(6, 151, 32), // "on_nextCalibrationButton_clicked"
QT_MOC_LITERAL(7, 184, 32), // "on_homeCalibrationButton_clicked"
QT_MOC_LITERAL(8, 217, 33), // "on_newScanFrameHomeButton_cli..."
QT_MOC_LITERAL(9, 251, 23), // "on_filterButton_clicked"
QT_MOC_LITERAL(10, 275, 23), // "on_recordButton_clicked"
QT_MOC_LITERAL(11, 299, 25), // "on_openMeshButton_clicked"
QT_MOC_LITERAL(12, 325, 24) // "on_openPCDButton_clicked"

    },
    "ScannerWindow\0on_openPreviousScanWindowButton_clicked\0"
    "\0on_newScanWindowButton_clicked\0"
    "on_previousScanWindowHomeButton_clicked\0"
    "on_registerButon_clicked\0"
    "on_nextCalibrationButton_clicked\0"
    "on_homeCalibrationButton_clicked\0"
    "on_newScanFrameHomeButton_clicked\0"
    "on_filterButton_clicked\0on_recordButton_clicked\0"
    "on_openMeshButton_clicked\0"
    "on_openPCDButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScannerWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

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

       0        // eod
};

void ScannerWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScannerWindow *_t = static_cast<ScannerWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_openPreviousScanWindowButton_clicked(); break;
        case 1: _t->on_newScanWindowButton_clicked(); break;
        case 2: _t->on_previousScanWindowHomeButton_clicked(); break;
        case 3: _t->on_registerButon_clicked(); break;
        case 4: _t->on_nextCalibrationButton_clicked(); break;
        case 5: _t->on_homeCalibrationButton_clicked(); break;
        case 6: _t->on_newScanFrameHomeButton_clicked(); break;
        case 7: _t->on_filterButton_clicked(); break;
        case 8: _t->on_recordButton_clicked(); break;
        case 9: _t->on_openMeshButton_clicked(); break;
        case 10: _t->on_openPCDButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ScannerWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ScannerWindow.data,
      qt_meta_data_ScannerWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ScannerWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScannerWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ScannerWindow.stringdata0))
        return static_cast<void*>(const_cast< ScannerWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ScannerWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
