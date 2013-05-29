/****************************************************************************
** Meta object code from reading C++ file 'target.hpp'
**
** Created: Wed May 29 12:25:33 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/interface/target.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'target.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Kiss__Target__Target[] = {

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
      31,   22,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   22,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Kiss__Target__Target[] = {
    "Kiss::Target::Target\0\0response\0"
    "response(Response)\0responseRedirect(Response)\0"
};

void Kiss::Target::Target::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Target *_t = static_cast<Target *>(_o);
        switch (_id) {
        case 0: _t->response((*reinterpret_cast< const Response(*)>(_a[1]))); break;
        case 1: _t->responseRedirect((*reinterpret_cast< const Response(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Kiss::Target::Target::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kiss::Target::Target::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Kiss__Target__Target,
      qt_meta_data_Kiss__Target__Target, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kiss::Target::Target::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kiss::Target::Target::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kiss::Target::Target::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kiss__Target__Target))
        return static_cast<void*>(const_cast< Target*>(this));
    return QObject::qt_metacast(_clname);
}

int Kiss::Target::Target::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Kiss::Target::Target::response(const Response & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
