/****************************************************************************
** Meta object code from reading C++ file 'message_dialog.hpp'
**
** Created: Wed May 29 16:42:44 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/dialogs/message_dialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'message_dialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Kiss__Dialog__Message[] = {

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
      28,   23,   22,   22, 0x08,
      62,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Kiss__Dialog__Message[] = {
    "Kiss::Dialog::Message\0\0link\0"
    "on_ui_message_anchorClicked(QUrl)\0"
    "on_ui_copy_clicked()\0"
};

void Kiss::Dialog::Message::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Message *_t = static_cast<Message *>(_o);
        switch (_id) {
        case 0: _t->on_ui_message_anchorClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->on_ui_copy_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Kiss::Dialog::Message::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kiss::Dialog::Message::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Kiss__Dialog__Message,
      qt_meta_data_Kiss__Dialog__Message, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kiss::Dialog::Message::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kiss::Dialog::Message::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kiss::Dialog::Message::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kiss__Dialog__Message))
        return static_cast<void*>(const_cast< Message*>(this));
    if (!strcmp(_clname, "Ui::MessageDialog"))
        return static_cast< Ui::MessageDialog*>(const_cast< Message*>(this));
    return QDialog::qt_metacast(_clname);
}

int Kiss::Dialog::Message::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
