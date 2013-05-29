/****************************************************************************
** Meta object code from reading C++ file 'template_model.hpp'
**
** Created: Wed May 29 12:25:30 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/template_model.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'template_model.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Kiss__Template__Model[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   23,   22,   22, 0x08,
      63,   23,   22,   22, 0x08,
     103,   98,   22,   22, 0x08,
     138,  128,   22,   22, 0x08,
     187,  182,   22,   22, 0x08,
     217,  212,   22,   22, 0x08,

 // properties: name, type, flags
     250,  245, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_Kiss__Template__Model[] = {
    "Kiss::Template::Model\0\0pack\0"
    "packAdded(Kiss::Template::PackPtr)\0"
    "packRemoved(Kiss::Template::Pack*)\0"
    "name\0packNameChanged(QString)\0path,file\0"
    "packFileAdded(QString,Kiss::Template::File)\0"
    "path\0packFileRemoved(QString)\0item\0"
    "itemRenamed(QStandardItem*)\0bool\0"
    "readOnly\0"
};

void Kiss::Template::Model::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Model *_t = static_cast<Model *>(_o);
        switch (_id) {
        case 0: _t->packAdded((*reinterpret_cast< const Kiss::Template::PackPtr(*)>(_a[1]))); break;
        case 1: _t->packRemoved((*reinterpret_cast< Kiss::Template::Pack*(*)>(_a[1]))); break;
        case 2: _t->packNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->packFileAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Kiss::Template::File(*)>(_a[2]))); break;
        case 4: _t->packFileRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->itemRenamed((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Kiss::Template::Model::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kiss::Template::Model::staticMetaObject = {
    { &QStandardItemModel::staticMetaObject, qt_meta_stringdata_Kiss__Template__Model,
      qt_meta_data_Kiss__Template__Model, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kiss::Template::Model::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kiss::Template::Model::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kiss::Template::Model::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kiss__Template__Model))
        return static_cast<void*>(const_cast< Model*>(this));
    return QStandardItemModel::qt_metacast(_clname);
}

int Kiss::Template::Model::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isReadOnly(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setReadOnly(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
