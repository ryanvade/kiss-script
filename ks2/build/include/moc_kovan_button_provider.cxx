/****************************************************************************
** Meta object code from reading C++ file 'kovan_button_provider.hpp'
**
** Created: Wed May 29 16:46:51 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/kovan_button_provider.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kovan_button_provider.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Kovan__ButtonProvider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   23,   22,   22, 0x05,
      83,   77,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
     107,   22,   22,   22, 0x0a,
     115,   22,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Kovan__ButtonProvider[] = {
    "Kovan::ButtonProvider\0\0id,text\0"
    "buttonTextChanged(::Button::Type::Id,QString)\0"
    "shown\0extraShownChanged(bool)\0reset()\0"
    "refresh()\0"
};

void Kovan::ButtonProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ButtonProvider *_t = static_cast<ButtonProvider *>(_o);
        switch (_id) {
        case 0: _t->buttonTextChanged((*reinterpret_cast< ::Button::Type::Id(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->extraShownChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->reset(); break;
        case 3: _t->refresh(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Kovan::ButtonProvider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kovan::ButtonProvider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Kovan__ButtonProvider,
      qt_meta_data_Kovan__ButtonProvider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kovan::ButtonProvider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kovan::ButtonProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kovan::ButtonProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kovan__ButtonProvider))
        return static_cast<void*>(const_cast< ButtonProvider*>(this));
    return QObject::qt_metacast(_clname);
}

int Kovan::ButtonProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Kovan::ButtonProvider::buttonTextChanged(::Button::Type::Id _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Kovan::ButtonProvider::extraShownChanged(const bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
