/****************************************************************************
** Meta object code from reading C++ file 'target_dialog.hpp'
**
** Created: Wed May 29 16:42:44 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/dialogs/target_dialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'target_dialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Kiss__Dialog__Target[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   22,   21,   21, 0x08,
      62,   22,   21,   21, 0x08,
      88,   22,   21,   21, 0x08,
     130,   21,   21,   21, 0x08,
     154,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Kiss__Dialog__Target[] = {
    "Kiss::Dialog::Target\0\0index\0"
    "currentTargetChanged(QModelIndex)\0"
    "targetChosen(QModelIndex)\0"
    "on_ui_interfaces_currentIndexChanged(int)\0"
    "on_ui_refresh_clicked()\0on_ui_manual_clicked()\0"
};

void Kiss::Dialog::Target::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Target *_t = static_cast<Target *>(_o);
        switch (_id) {
        case 0: _t->currentTargetChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->targetChosen((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_ui_interfaces_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_ui_refresh_clicked(); break;
        case 4: _t->on_ui_manual_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Kiss::Dialog::Target::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kiss::Dialog::Target::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Kiss__Dialog__Target,
      qt_meta_data_Kiss__Dialog__Target, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kiss::Dialog::Target::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kiss::Dialog::Target::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kiss::Dialog::Target::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kiss__Dialog__Target))
        return static_cast<void*>(const_cast< Target*>(this));
    return QDialog::qt_metacast(_clname);
}

int Kiss::Dialog::Target::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
