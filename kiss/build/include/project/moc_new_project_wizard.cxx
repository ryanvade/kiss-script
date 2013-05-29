/****************************************************************************
** Meta object code from reading C++ file 'new_project_wizard.hpp'
**
** Created: Wed May 29 16:42:45 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/project/new_project_wizard.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'new_project_wizard.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Kiss__Wizard__NewProject[] = {

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
      26,   25,   25,   25, 0x0a,
      54,   49,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Kiss__Wizard__NewProject[] = {
    "Kiss::Wizard::NewProject\0\0"
    "on_ui_browse_clicked()\0text\0"
    "on_ui_projectName_textChanged(QString)\0"
};

void Kiss::Wizard::NewProject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NewProject *_t = static_cast<NewProject *>(_o);
        switch (_id) {
        case 0: _t->on_ui_browse_clicked(); break;
        case 1: _t->on_ui_projectName_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Kiss::Wizard::NewProject::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kiss::Wizard::NewProject::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Kiss__Wizard__NewProject,
      qt_meta_data_Kiss__Wizard__NewProject, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kiss::Wizard::NewProject::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kiss::Wizard::NewProject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kiss::Wizard::NewProject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kiss__Wizard__NewProject))
        return static_cast<void*>(const_cast< NewProject*>(this));
    return QDialog::qt_metacast(_clname);
}

int Kiss::Wizard::NewProject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
