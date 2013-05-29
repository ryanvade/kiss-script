/****************************************************************************
** Meta object code from reading C++ file 'kovan_serial_interface.hpp'
**
** Created: Wed May 29 16:46:01 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/interfaces/kovan_serial/kovan_serial_interface.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kovan_serial_interface.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Kiss__Target__PortSampler[] = {

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
      32,   27,   26,   26, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Kiss__Target__PortSampler[] = {
    "Kiss::Target::PortSampler\0\0port\0"
    "found(QString)\0"
};

void Kiss::Target::PortSampler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PortSampler *_t = static_cast<PortSampler *>(_o);
        switch (_id) {
        case 0: _t->found((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Kiss::Target::PortSampler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kiss::Target::PortSampler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Kiss__Target__PortSampler,
      qt_meta_data_Kiss__Target__PortSampler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kiss::Target::PortSampler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kiss::Target::PortSampler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kiss::Target::PortSampler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kiss__Target__PortSampler))
        return static_cast<void*>(const_cast< PortSampler*>(this));
    if (!strcmp(_clname, "QRunnable"))
        return static_cast< QRunnable*>(const_cast< PortSampler*>(this));
    return QObject::qt_metacast(_clname);
}

int Kiss::Target::PortSampler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Kiss::Target::PortSampler::found(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_Kiss__Target__KovanSerialInterface[] = {

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
      36,   35,   35,   35, 0x08,
      55,   50,   35,   35, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Kiss__Target__KovanSerialInterface[] = {
    "Kiss::Target::KovanSerialInterface\0\0"
    "scanStarted()\0port\0found(QString)\0"
};

void Kiss::Target::KovanSerialInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        KovanSerialInterface *_t = static_cast<KovanSerialInterface *>(_o);
        switch (_id) {
        case 0: _t->scanStarted(); break;
        case 1: _t->found((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Kiss::Target::KovanSerialInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kiss::Target::KovanSerialInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Kiss__Target__KovanSerialInterface,
      qt_meta_data_Kiss__Target__KovanSerialInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kiss::Target::KovanSerialInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kiss::Target::KovanSerialInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kiss::Target::KovanSerialInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kiss__Target__KovanSerialInterface))
        return static_cast<void*>(const_cast< KovanSerialInterface*>(this));
    if (!strcmp(_clname, "Kiss::Target::Interface"))
        return static_cast< Kiss::Target::Interface*>(const_cast< KovanSerialInterface*>(this));
    if (!strcmp(_clname, "com.kipr.kiss.Interface/1.1"))
        return static_cast< Kiss::Target::Interface*>(const_cast< KovanSerialInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int Kiss::Target::KovanSerialInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
