/****************************************************************************
** Meta object code from reading C++ file 'interface_manager.hpp'
**
** Created: Wed May 29 16:42:45 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/interface/interface_manager.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interface_manager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Kiss__Target__InterfaceManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      42,   32,   31,   31, 0x05,
      69,   32,   31,   31, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Kiss__Target__InterfaceManager[] = {
    "Kiss::Target::InterfaceManager\0\0"
    "interface\0interfaceAdded(Interface*)\0"
    "interfaceRemoved(Interface*)\0"
};

void Kiss::Target::InterfaceManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        InterfaceManager *_t = static_cast<InterfaceManager *>(_o);
        switch (_id) {
        case 0: _t->interfaceAdded((*reinterpret_cast< Interface*(*)>(_a[1]))); break;
        case 1: _t->interfaceRemoved((*reinterpret_cast< Interface*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Kiss::Target::InterfaceManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kiss::Target::InterfaceManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Kiss__Target__InterfaceManager,
      qt_meta_data_Kiss__Target__InterfaceManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kiss::Target::InterfaceManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kiss::Target::InterfaceManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kiss::Target::InterfaceManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kiss__Target__InterfaceManager))
        return static_cast<void*>(const_cast< InterfaceManager*>(this));
    if (!strcmp(_clname, "Singleton<InterfaceManager>"))
        return static_cast< Singleton<InterfaceManager>*>(const_cast< InterfaceManager*>(this));
    return QObject::qt_metacast(_clname);
}

int Kiss::Target::InterfaceManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Kiss::Target::InterfaceManager::interfaceAdded(Interface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Kiss::Target::InterfaceManager::interfaceRemoved(Interface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
