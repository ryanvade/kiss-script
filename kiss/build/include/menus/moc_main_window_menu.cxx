/****************************************************************************
** Meta object code from reading C++ file 'main_window_menu.hpp'
**
** Created: Wed May 29 12:25:32 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/menus/main_window_menu.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window_menu.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Kiss__Menu__MainWindowMenu[] = {

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
      28,   27,   27,   27, 0x0a,
      40,   27,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Kiss__Menu__MainWindowMenu[] = {
    "Kiss::Menu::MainWindowMenu\0\0triggered()\0"
    "update()\0"
};

void Kiss::Menu::MainWindowMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindowMenu *_t = static_cast<MainWindowMenu *>(_o);
        switch (_id) {
        case 0: _t->triggered(); break;
        case 1: _t->update(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Kiss::Menu::MainWindowMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kiss::Menu::MainWindowMenu::staticMetaObject = {
    { &ConcreteMenuable::staticMetaObject, qt_meta_stringdata_Kiss__Menu__MainWindowMenu,
      qt_meta_data_Kiss__Menu__MainWindowMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kiss::Menu::MainWindowMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kiss::Menu::MainWindowMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kiss::Menu::MainWindowMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kiss__Menu__MainWindowMenu))
        return static_cast<void*>(const_cast< MainWindowMenu*>(this));
    if (!strcmp(_clname, "ActivatableObject"))
        return static_cast< ActivatableObject*>(const_cast< MainWindowMenu*>(this));
    return ConcreteMenuable::qt_metacast(_clname);
}

int Kiss::Menu::MainWindowMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConcreteMenuable::qt_metacall(_c, _id, _a);
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
