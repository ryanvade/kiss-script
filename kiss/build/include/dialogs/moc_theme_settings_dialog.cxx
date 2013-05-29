/****************************************************************************
** Meta object code from reading C++ file 'theme_settings_dialog.hpp'
**
** Created: Wed May 29 16:42:44 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/dialogs/theme_settings_dialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'theme_settings_dialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Kiss__Dialog__ThemeSettings[] = {

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
      29,   28,   28,   28, 0x0a,
      49,   43,   28,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Kiss__Dialog__ThemeSettings[] = {
    "Kiss::Dialog::ThemeSettings\0\0setDefaults()\0"
    "color\0settingChanged(QColor)\0"
};

void Kiss::Dialog::ThemeSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ThemeSettings *_t = static_cast<ThemeSettings *>(_o);
        switch (_id) {
        case 0: _t->setDefaults(); break;
        case 1: _t->settingChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Kiss::Dialog::ThemeSettings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kiss::Dialog::ThemeSettings::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Kiss__Dialog__ThemeSettings,
      qt_meta_data_Kiss__Dialog__ThemeSettings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kiss::Dialog::ThemeSettings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kiss::Dialog::ThemeSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kiss::Dialog::ThemeSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kiss__Dialog__ThemeSettings))
        return static_cast<void*>(const_cast< ThemeSettings*>(this));
    return QDialog::qt_metacast(_clname);
}

int Kiss::Dialog::ThemeSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
