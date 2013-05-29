/****************************************************************************
** Meta object code from reading C++ file 'template_tab.hpp'
**
** Created: Wed May 29 12:25:30 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/template_tab.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'template_tab.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Kiss__Widget__TemplateTab[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   26,   27,   26, 0x0a,
      39,   26,   27,   26, 0x0a,
      48,   26,   26,   26, 0x0a,
      55,   26,   26,   26, 0x0a,
      65,   26,   26,   26, 0x0a,
      98,   83,   26,   26, 0x08,
     146,   26,   26,   26, 0x08,
     158,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Kiss__Widget__TemplateTab[] = {
    "Kiss::Widget::TemplateTab\0\0bool\0save()\0"
    "saveAs()\0test()\0addFile()\0deleteSelection()\0"
    "selection,prev\0"
    "selectionChanged(QItemSelection,QItemSelection)\0"
    "dirtyDesc()\0dirty()\0"
};

void Kiss::Widget::TemplateTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TemplateTab *_t = static_cast<TemplateTab *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->saveAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->test(); break;
        case 3: _t->addFile(); break;
        case 4: _t->deleteSelection(); break;
        case 5: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 6: _t->dirtyDesc(); break;
        case 7: _t->dirty(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Kiss::Widget::TemplateTab::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kiss::Widget::TemplateTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Kiss__Widget__TemplateTab,
      qt_meta_data_Kiss__Widget__TemplateTab, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kiss::Widget::TemplateTab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kiss::Widget::TemplateTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kiss::Widget::TemplateTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kiss__Widget__TemplateTab))
        return static_cast<void*>(const_cast< TemplateTab*>(this));
    if (!strcmp(_clname, "Tab"))
        return static_cast< Tab*>(const_cast< TemplateTab*>(this));
    return QWidget::qt_metacast(_clname);
}

int Kiss::Widget::TemplateTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
