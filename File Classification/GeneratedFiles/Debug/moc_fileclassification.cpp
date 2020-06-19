/****************************************************************************
** Meta object code from reading C++ file 'fileclassification.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fileclassification.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileclassification.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FileClassification_t {
    QByteArrayData data[10];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileClassification_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileClassification_t qt_meta_stringdata_FileClassification = {
    {
QT_MOC_LITERAL(0, 0, 18), // "FileClassification"
QT_MOC_LITERAL(1, 19, 17), // "gpu_status_detect"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 17), // "cup_status_detect"
QT_MOC_LITERAL(4, 56, 9), // "open_file"
QT_MOC_LITERAL(5, 66, 7), // "open_tz"
QT_MOC_LITERAL(6, 74, 8), // "out_file"
QT_MOC_LITERAL(7, 83, 11), // "process_dir"
QT_MOC_LITERAL(8, 95, 10), // "onFinished"
QT_MOC_LITERAL(9, 106, 8) // "exitCode"

    },
    "FileClassification\0gpu_status_detect\0"
    "\0cup_status_detect\0open_file\0open_tz\0"
    "out_file\0process_dir\0onFinished\0"
    "exitCode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileClassification[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void FileClassification::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileClassification *_t = static_cast<FileClassification *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gpu_status_detect(); break;
        case 1: _t->cup_status_detect(); break;
        case 2: _t->open_file(); break;
        case 3: _t->open_tz(); break;
        case 4: _t->out_file(); break;
        case 5: _t->process_dir(); break;
        case 6: _t->onFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject FileClassification::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_FileClassification.data,
      qt_meta_data_FileClassification,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FileClassification::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileClassification::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FileClassification.stringdata0))
        return static_cast<void*>(const_cast< FileClassification*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int FileClassification::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
