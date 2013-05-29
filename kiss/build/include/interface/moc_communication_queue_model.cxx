/****************************************************************************
** Meta object code from reading C++ file 'communication_queue_model.hpp'
**
** Created: Wed May 29 12:25:34 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/interface/communication_queue_model.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'communication_queue_model.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Kiss__Target__CommunicationQueueModel[] = {

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
      45,   39,   38,   38, 0x08,
      77,   39,   38,   38, 0x08,
     120,  106,   38,   38, 0x08,
     159,  106,   38,   38, 0x08,
     196,   38,   38,   38, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Kiss__Target__CommunicationQueueModel[] = {
    "Kiss::Target::CommunicationQueueModel\0"
    "\0entry\0admitted(CommunicationEntryPtr)\0"
    "began(CommunicationEntryPtr)\0entry,success\0"
    "progress(CommunicationEntryPtr,double)\0"
    "finished(CommunicationEntryPtr,bool)\0"
    "queueFinished()\0"
};

void Kiss::Target::CommunicationQueueModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CommunicationQueueModel *_t = static_cast<CommunicationQueueModel *>(_o);
        switch (_id) {
        case 0: _t->admitted((*reinterpret_cast< const CommunicationEntryPtr(*)>(_a[1]))); break;
        case 1: _t->began((*reinterpret_cast< const CommunicationEntryPtr(*)>(_a[1]))); break;
        case 2: _t->progress((*reinterpret_cast< const CommunicationEntryPtr(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->finished((*reinterpret_cast< const CommunicationEntryPtr(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->queueFinished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Kiss::Target::CommunicationQueueModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kiss::Target::CommunicationQueueModel::staticMetaObject = {
    { &QStandardItemModel::staticMetaObject, qt_meta_stringdata_Kiss__Target__CommunicationQueueModel,
      qt_meta_data_Kiss__Target__CommunicationQueueModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kiss::Target::CommunicationQueueModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kiss::Target::CommunicationQueueModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kiss::Target::CommunicationQueueModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kiss__Target__CommunicationQueueModel))
        return static_cast<void*>(const_cast< CommunicationQueueModel*>(this));
    return QStandardItemModel::qt_metacast(_clname);
}

int Kiss::Target::CommunicationQueueModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
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
