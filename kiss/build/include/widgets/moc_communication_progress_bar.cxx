/****************************************************************************
** Meta object code from reading C++ file 'communication_progress_bar.hpp'
**
** Created: Wed May 29 12:25:32 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/widgets/communication_progress_bar.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'communication_progress_bar.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Kiss__Widget__CommunicationProgressBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      40,   39,   39,   39, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   39,   39,   39, 0x08,
      61,   39,   39,   39, 0x08,
      72,   39,   39,   39, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Kiss__Widget__CommunicationProgressBar[] = {
    "Kiss::Widget::CommunicationProgressBar\0"
    "\0clicked()\0admitted()\0finished()\0"
    "queueFinished()\0"
};

void Kiss::Widget::CommunicationProgressBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CommunicationProgressBar *_t = static_cast<CommunicationProgressBar *>(_o);
        switch (_id) {
        case 0: _t->clicked(); break;
        case 1: _t->admitted(); break;
        case 2: _t->finished(); break;
        case 3: _t->queueFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Kiss::Widget::CommunicationProgressBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kiss::Widget::CommunicationProgressBar::staticMetaObject = {
    { &QProgressBar::staticMetaObject, qt_meta_stringdata_Kiss__Widget__CommunicationProgressBar,
      qt_meta_data_Kiss__Widget__CommunicationProgressBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kiss::Widget::CommunicationProgressBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kiss::Widget::CommunicationProgressBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kiss::Widget::CommunicationProgressBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kiss__Widget__CommunicationProgressBar))
        return static_cast<void*>(const_cast< CommunicationProgressBar*>(this));
    return QProgressBar::qt_metacast(_clname);
}

int Kiss::Widget::CommunicationProgressBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProgressBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Kiss::Widget::CommunicationProgressBar::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
