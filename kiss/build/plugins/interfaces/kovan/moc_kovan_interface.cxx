/****************************************************************************
** Meta object code from reading C++ file 'kovan_interface.hpp'
**
** Created: Wed May 29 12:30:50 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/interfaces/kovan/kovan_interface.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kovan_interface.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Kiss__Target__AdvertSampler[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      37,   29,   28,   28, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Kiss__Target__AdvertSampler[] = {
    "Kiss::Target::AdvertSampler\0\0ad,addr\0"
    "found(Advert,sockaddr_in)\0"
};

void Kiss::Target::AdvertSampler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AdvertSampler *_t = static_cast<AdvertSampler *>(_o);
        switch (_id) {
        case 0: _t->found((*reinterpret_cast< const Advert(*)>(_a[1])),(*reinterpret_cast< const sockaddr_in(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Kiss::Target::AdvertSampler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kiss::Target::AdvertSampler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Kiss__Target__AdvertSampler,
      qt_meta_data_Kiss__Target__AdvertSampler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kiss::Target::AdvertSampler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kiss::Target::AdvertSampler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kiss::Target::AdvertSampler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kiss__Target__AdvertSampler))
        return static_cast<void*>(const_cast< AdvertSampler*>(this));
    if (!strcmp(_clname, "QRunnable"))
        return static_cast< QRunnable*>(const_cast< AdvertSampler*>(this));
    return QObject::qt_metacast(_clname);
}

int Kiss::Target::AdvertSampler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Kiss::Target::AdvertSampler::found(const Advert & _t1, const sockaddr_in & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_Kiss__Target__KovanInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x08,
      52,   44,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Kiss__Target__KovanInterface[] = {
    "Kiss::Target::KovanInterface\0\0"
    "scanStarted()\0ad,addr\0found(Advert,sockaddr_in)\0"
};

void Kiss::Target::KovanInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        KovanInterface *_t = static_cast<KovanInterface *>(_o);
        switch (_id) {
        case 0: _t->scanStarted(); break;
        case 1: _t->found((*reinterpret_cast< const Advert(*)>(_a[1])),(*reinterpret_cast< const sockaddr_in(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Kiss::Target::KovanInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kiss::Target::KovanInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Kiss__Target__KovanInterface,
      qt_meta_data_Kiss__Target__KovanInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kiss::Target::KovanInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kiss::Target::KovanInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kiss::Target::KovanInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kiss__Target__KovanInterface))
        return static_cast<void*>(const_cast< KovanInterface*>(this));
    if (!strcmp(_clname, "Kiss::Target::Interface"))
        return static_cast< Kiss::Target::Interface*>(const_cast< KovanInterface*>(this));
    if (!strcmp(_clname, "com.kipr.kiss.Interface/1.1"))
        return static_cast< Kiss::Target::Interface*>(const_cast< KovanInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int Kiss::Target::KovanInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
