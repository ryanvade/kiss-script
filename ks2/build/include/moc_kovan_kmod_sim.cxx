/****************************************************************************
** Meta object code from reading C++ file 'kovan_kmod_sim.hpp'
**
** Created: Wed May 29 16:46:51 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/kovan_kmod_sim.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kovan_kmod_sim.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Kovan__KmodSim[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Kovan__KmodSim[] = {
    "Kovan::KmodSim\0\0state\0stateChanged(State)\0"
    "readyRead()\0"
};

void Kovan::KmodSim::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        KmodSim *_t = static_cast<KmodSim *>(_o);
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< const State(*)>(_a[1]))); break;
        case 1: _t->readyRead(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Kovan::KmodSim::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kovan::KmodSim::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Kovan__KmodSim,
      qt_meta_data_Kovan__KmodSim, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kovan::KmodSim::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kovan::KmodSim::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kovan::KmodSim::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kovan__KmodSim))
        return static_cast<void*>(const_cast< KmodSim*>(this));
    return QObject::qt_metacast(_clname);
}

int Kovan::KmodSim::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Kovan::KmodSim::stateChanged(const State & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
