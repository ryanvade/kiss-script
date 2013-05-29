/****************************************************************************
** Meta object code from reading C++ file 'concrete_menuable.hpp'
**
** Created: Wed May 29 12:25:33 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/menus/concrete_menuable.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'concrete_menuable.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Kiss__Menu__ConcreteMenuable[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x09,
      42,   29,   29,   29, 0x09,
      66,   60,   29,   29, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Kiss__Menu__ConcreteMenuable[] = {
    "Kiss::Menu::ConcreteMenuable\0\0triggered()\0"
    "activeTriggered()\0state\0activeToggled(bool)\0"
};

void Kiss::Menu::ConcreteMenuable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ConcreteMenuable *_t = static_cast<ConcreteMenuable *>(_o);
        switch (_id) {
        case 0: _t->triggered(); break;
        case 1: _t->activeTriggered(); break;
        case 2: _t->activeToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Kiss::Menu::ConcreteMenuable::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kiss::Menu::ConcreteMenuable::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Kiss__Menu__ConcreteMenuable,
      qt_meta_data_Kiss__Menu__ConcreteMenuable, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kiss::Menu::ConcreteMenuable::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kiss::Menu::ConcreteMenuable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kiss::Menu::ConcreteMenuable::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kiss__Menu__ConcreteMenuable))
        return static_cast<void*>(const_cast< ConcreteMenuable*>(this));
    if (!strcmp(_clname, "Menuable"))
        return static_cast< Menuable*>(const_cast< ConcreteMenuable*>(this));
    return QObject::qt_metacast(_clname);
}

int Kiss::Menu::ConcreteMenuable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
