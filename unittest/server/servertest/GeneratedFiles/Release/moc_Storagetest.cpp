/****************************************************************************
** Meta object code from reading C++ file 'Storagetest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Storagetest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Storagetest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Storagetest_t {
    QByteArrayData data[14];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Storagetest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Storagetest_t qt_meta_stringdata_Storagetest = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Storagetest"
QT_MOC_LITERAL(1, 12, 12), // "initTestCase"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 15), // "cleanupTestCase"
QT_MOC_LITERAL(4, 42, 23), // "testinsertCpuUsage_data"
QT_MOC_LITERAL(5, 66, 18), // "testinsertCpuUsage"
QT_MOC_LITERAL(6, 85, 26), // "testinsertMemoryUsage_data"
QT_MOC_LITERAL(7, 112, 21), // "testinsertMemoryUsage"
QT_MOC_LITERAL(8, 134, 22), // "testinsertProcess_data"
QT_MOC_LITERAL(9, 157, 17), // "testinsertProcess"
QT_MOC_LITERAL(10, 175, 23), // "testRegisterDevice_data"
QT_MOC_LITERAL(11, 199, 18), // "testRegisterDevice"
QT_MOC_LITERAL(12, 218, 14), // "testToken_data"
QT_MOC_LITERAL(13, 233, 9) // "testToken"

    },
    "Storagetest\0initTestCase\0\0cleanupTestCase\0"
    "testinsertCpuUsage_data\0testinsertCpuUsage\0"
    "testinsertMemoryUsage_data\0"
    "testinsertMemoryUsage\0testinsertProcess_data\0"
    "testinsertProcess\0testRegisterDevice_data\0"
    "testRegisterDevice\0testToken_data\0"
    "testToken"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Storagetest[] = {

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
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

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

void Storagetest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Storagetest *_t = static_cast<Storagetest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->cleanupTestCase(); break;
        case 2: _t->testinsertCpuUsage_data(); break;
        case 3: _t->testinsertCpuUsage(); break;
        case 4: _t->testinsertMemoryUsage_data(); break;
        case 5: _t->testinsertMemoryUsage(); break;
        case 6: _t->testinsertProcess_data(); break;
        case 7: _t->testinsertProcess(); break;
        case 8: _t->testRegisterDevice_data(); break;
        case 9: _t->testRegisterDevice(); break;
        case 10: _t->testToken_data(); break;
        case 11: _t->testToken(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Storagetest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Storagetest.data,
      qt_meta_data_Storagetest,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Storagetest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Storagetest::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Storagetest.stringdata0))
        return static_cast<void*>(const_cast< Storagetest*>(this));
    return QObject::qt_metacast(_clname);
}

int Storagetest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
