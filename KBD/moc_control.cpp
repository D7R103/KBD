/****************************************************************************
** Meta object code from reading C++ file 'control.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "control.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'control.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Control_t {
    QByteArrayData data[14];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Control_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Control_t qt_meta_stringdata_Control = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Control"
QT_MOC_LITERAL(1, 8, 17), // "UpdateProgressBar"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 9), // "SetStatus"
QT_MOC_LITERAL(4, 37, 6), // "string"
QT_MOC_LITERAL(5, 44, 12), // "SetBarStatus"
QT_MOC_LITERAL(6, 57, 13), // "SetLayerNames"
QT_MOC_LITERAL(7, 71, 15), // "vector<string>*"
QT_MOC_LITERAL(8, 87, 14), // "SetDeviceNames"
QT_MOC_LITERAL(9, 102, 9), // "SelectMap"
QT_MOC_LITERAL(10, 112, 13), // "SelectedLayer"
QT_MOC_LITERAL(11, 126, 13), // "SelectedInput"
QT_MOC_LITERAL(12, 140, 16), // "LoadInputDevices"
QT_MOC_LITERAL(13, 157, 11) // "ForceRescan"

    },
    "Control\0UpdateProgressBar\0\0SetStatus\0"
    "string\0SetBarStatus\0SetLayerNames\0"
    "vector<string>*\0SetDeviceNames\0SelectMap\0"
    "SelectedLayer\0SelectedInput\0"
    "LoadInputDevices\0ForceRescan"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Control[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       3,    1,   72,    2, 0x06 /* Public */,
       5,    1,   75,    2, 0x06 /* Public */,
       6,    1,   78,    2, 0x06 /* Public */,
       8,    1,   81,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   84,    2, 0x0a /* Public */,
       9,    1,   87,    2, 0x0a /* Public */,
      10,    1,   90,    2, 0x0a /* Public */,
      11,    1,   93,    2, 0x0a /* Public */,
      12,    0,   96,    2, 0x0a /* Public */,
      13,    0,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Control::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Control *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->UpdateProgressBar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->SetStatus((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 2: _t->SetBarStatus((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 3: _t->SetLayerNames((*reinterpret_cast< vector<string>*(*)>(_a[1]))); break;
        case 4: _t->SetDeviceNames((*reinterpret_cast< vector<string>*(*)>(_a[1]))); break;
        case 5: _t->SetStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->SelectMap((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 7: _t->SelectedLayer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->SelectedInput((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->LoadInputDevices(); break;
        case 10: _t->ForceRescan(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Control::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Control::UpdateProgressBar)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Control::*)(string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Control::SetStatus)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Control::*)(string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Control::SetBarStatus)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Control::*)(vector<string> * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Control::SetLayerNames)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Control::*)(vector<string> * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Control::SetDeviceNames)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Control::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Control.data,
    qt_meta_data_Control,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Control::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Control::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Control.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Control::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Control::UpdateProgressBar(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Control::SetStatus(string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Control::SetBarStatus(string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Control::SetLayerNames(vector<string> * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Control::SetDeviceNames(vector<string> * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
