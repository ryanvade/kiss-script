/****************************************************************************
** Meta object code from reading C++ file 'template_manager.hpp'
**
** Created: Wed May 29 16:42:43 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/template_manager.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'template_manager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Kiss__Template__Manager[] = {

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
      30,   25,   24,   24, 0x05,
      65,   25,   24,   24, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Kiss__Template__Manager[] = {
    "Kiss::Template::Manager\0\0pack\0"
    "packAdded(Kiss::Template::PackPtr)\0"
    "packRemoved(Kiss::Template::Pack*)\0"
};

void Kiss::Template::Manager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Manager *_t = static_cast<Manager *>(_o);
        switch (_id) {
        case 0: _t->packAdded((*reinterpret_cast< const Kiss::Template::PackPtr(*)>(_a[1]))); break;
        case 1: _t->packRemoved((*reinterpret_cast< Kiss::Template::Pack*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Kiss::Template::Manager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kiss::Template::Manager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Kiss__Template__Manager,
      qt_meta_data_Kiss__Template__Manager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kiss::Template::Manager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kiss::Template::Manager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kiss::Template::Manager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kiss__Template__Manager))
        return static_cast<void*>(const_cast< Manager*>(this));
    return QObject::qt_metacast(_clname);
}

int Kiss::Template::Manager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Kiss::Template::Manager::packAdded(const Kiss::Template::PackPtr & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Kiss::Template::Manager::packRemoved(Kiss::Template::Pack * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
