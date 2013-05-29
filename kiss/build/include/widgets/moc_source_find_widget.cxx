/****************************************************************************
** Meta object code from reading C++ file 'source_find_widget.hpp'
**
** Created: Wed May 29 16:42:44 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/widgets/source_find_widget.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'source_find_widget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Kiss__Widget__SourceFind[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x0a,
      33,   25,   25,   25, 0x08,
      59,   54,   25,   25, 0x08,
      97,   91,   25,   25, 0x08,
     131,   25,   25,   25, 0x08,
     159,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Kiss__Widget__SourceFind[] = {
    "Kiss::Widget::SourceFind\0\0show()\0"
    "on_ui_next_clicked()\0text\0"
    "on_ui_find_textChanged(QString)\0state\0"
    "on_ui_matchCase_stateChanged(int)\0"
    "on_ui_replaceNext_clicked()\0"
    "on_ui_replaceAll_clicked()\0"
};

void Kiss::Widget::SourceFind::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SourceFind *_t = static_cast<SourceFind *>(_o);
        switch (_id) {
        case 0: _t->show(); break;
        case 1: _t->on_ui_next_clicked(); break;
        case 2: _t->on_ui_find_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_ui_matchCase_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_ui_replaceNext_clicked(); break;
        case 5: _t->on_ui_replaceAll_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Kiss::Widget::SourceFind::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kiss::Widget::SourceFind::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Kiss__Widget__SourceFind,
      qt_meta_data_Kiss__Widget__SourceFind, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kiss::Widget::SourceFind::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kiss::Widget::SourceFind::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kiss::Widget::SourceFind::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kiss__Widget__SourceFind))
        return static_cast<void*>(const_cast< SourceFind*>(this));
    if (!strcmp(_clname, "Ui::SourceFindWidget"))
        return static_cast< Ui::SourceFindWidget*>(const_cast< SourceFind*>(this));
    return QWidget::qt_metacast(_clname);
}

int Kiss::Widget::SourceFind::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
