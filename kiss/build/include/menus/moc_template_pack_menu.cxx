/****************************************************************************
** Meta object code from reading C++ file 'template_pack_menu.hpp'
**
** Created: Wed May 29 16:42:45 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/menus/template_pack_menu.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'template_pack_menu.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Kiss__Menu__TemplatePackMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_Kiss__Menu__TemplatePackMenu[] = {
    "Kiss::Menu::TemplatePackMenu\0"
};

void Kiss::Menu::TemplatePackMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Kiss::Menu::TemplatePackMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kiss::Menu::TemplatePackMenu::staticMetaObject = {
    { &ConcreteMenuable::staticMetaObject, qt_meta_stringdata_Kiss__Menu__TemplatePackMenu,
      qt_meta_data_Kiss__Menu__TemplatePackMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kiss::Menu::TemplatePackMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kiss::Menu::TemplatePackMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kiss::Menu::TemplatePackMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kiss__Menu__TemplatePackMenu))
        return static_cast<void*>(const_cast< TemplatePackMenu*>(this));
    if (!strcmp(_clname, "ActivatableObject"))
        return static_cast< ActivatableObject*>(const_cast< TemplatePackMenu*>(this));
    return ConcreteMenuable::qt_metacast(_clname);
}

int Kiss::Menu::TemplatePackMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConcreteMenuable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
