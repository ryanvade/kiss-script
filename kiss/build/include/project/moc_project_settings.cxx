/****************************************************************************
** Meta object code from reading C++ file 'project_settings.hpp'
**
** Created: Wed May 29 12:25:33 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/project/project_settings.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'project_settings.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Kiss__Widget__ProjectSettings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      35,   31,   30,   30, 0x05,
      69,   59,   30,   30, 0x05,

 // slots: signature, parameters, type, tag, flags
     101,   30,   30,   30, 0x0a,
     121,  110,   30,   30, 0x08,
     162,   30,   30,   30, 0x08,
     182,   30,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Kiss__Widget__ProjectSettings[] = {
    "Kiss::Widget::ProjectSettings\0\0key\0"
    "settingRemoved(QString)\0key,value\0"
    "settingUpdated(QString,QString)\0"
    "reload()\0row,column\0"
    "on_ui_settingsTable_cellChanged(int,int)\0"
    "on_ui_add_clicked()\0on_ui_remove_clicked()\0"
};

void Kiss::Widget::ProjectSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ProjectSettings *_t = static_cast<ProjectSettings *>(_o);
        switch (_id) {
        case 0: _t->settingRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->settingUpdated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->reload(); break;
        case 3: _t->on_ui_settingsTable_cellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->on_ui_add_clicked(); break;
        case 5: _t->on_ui_remove_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Kiss::Widget::ProjectSettings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kiss::Widget::ProjectSettings::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Kiss__Widget__ProjectSettings,
      qt_meta_data_Kiss__Widget__ProjectSettings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kiss::Widget::ProjectSettings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kiss::Widget::ProjectSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kiss::Widget::ProjectSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kiss__Widget__ProjectSettings))
        return static_cast<void*>(const_cast< ProjectSettings*>(this));
    if (!strcmp(_clname, "Tab"))
        return static_cast< Tab*>(const_cast< ProjectSettings*>(this));
    return QWidget::qt_metacast(_clname);
}

int Kiss::Widget::ProjectSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Kiss::Widget::ProjectSettings::settingRemoved(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Kiss::Widget::ProjectSettings::settingUpdated(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
