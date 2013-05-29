/****************************************************************************
** Meta object code from reading C++ file 'communication_manager.hpp'
**
** Created: Wed May 29 16:42:45 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/interface/communication_manager.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'communication_manager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Kiss__Target__CommunicationWorker[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      41,   35,   34,   34, 0x05,
      87,   73,   34,   34, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Kiss__Target__CommunicationWorker[] = {
    "Kiss::Target::CommunicationWorker\0\0"
    "entry\0progress(CommunicationEntryPtr)\0"
    "entry,success\0finished(CommunicationEntryPtr,bool)\0"
};

void Kiss::Target::CommunicationWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CommunicationWorker *_t = static_cast<CommunicationWorker *>(_o);
        switch (_id) {
        case 0: _t->progress((*reinterpret_cast< const CommunicationEntryPtr(*)>(_a[1]))); break;
        case 1: _t->finished((*reinterpret_cast< const CommunicationEntryPtr(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Kiss::Target::CommunicationWorker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kiss::Target::CommunicationWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Kiss__Target__CommunicationWorker,
      qt_meta_data_Kiss__Target__CommunicationWorker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kiss::Target::CommunicationWorker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kiss::Target::CommunicationWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kiss::Target::CommunicationWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kiss__Target__CommunicationWorker))
        return static_cast<void*>(const_cast< CommunicationWorker*>(this));
    if (!strcmp(_clname, "QRunnable"))
        return static_cast< QRunnable*>(const_cast< CommunicationWorker*>(this));
    return QObject::qt_metacast(_clname);
}

int Kiss::Target::CommunicationWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Kiss::Target::CommunicationWorker::progress(const CommunicationEntryPtr & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Kiss::Target::CommunicationWorker::finished(const CommunicationEntryPtr & _t1, const bool & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_Kiss__Target__CommunicationManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      42,   36,   35,   35, 0x05,
      74,   36,   35,   35, 0x05,
     118,  103,   35,   35, 0x05,
     171,  157,   35,   35, 0x05,
     208,   35,   35,   35, 0x05,

 // slots: signature, parameters, type, tag, flags
     224,   35,   35,   35, 0x08,
     235,  157,   35,   35, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Kiss__Target__CommunicationManager[] = {
    "Kiss::Target::CommunicationManager\0\0"
    "entry\0admitted(CommunicationEntryPtr)\0"
    "began(CommunicationEntryPtr)\0"
    "entry,fraction\0progress(CommunicationEntryPtr,double)\0"
    "entry,success\0finished(CommunicationEntryPtr,bool)\0"
    "queueFinished()\0saturate()\0"
    "workerFinished(CommunicationEntryPtr,bool)\0"
};

void Kiss::Target::CommunicationManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CommunicationManager *_t = static_cast<CommunicationManager *>(_o);
        switch (_id) {
        case 0: _t->admitted((*reinterpret_cast< const CommunicationEntryPtr(*)>(_a[1]))); break;
        case 1: _t->began((*reinterpret_cast< const CommunicationEntryPtr(*)>(_a[1]))); break;
        case 2: _t->progress((*reinterpret_cast< const CommunicationEntryPtr(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->finished((*reinterpret_cast< const CommunicationEntryPtr(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->queueFinished(); break;
        case 5: _t->saturate(); break;
        case 6: _t->workerFinished((*reinterpret_cast< CommunicationEntryPtr(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Kiss::Target::CommunicationManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kiss::Target::CommunicationManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Kiss__Target__CommunicationManager,
      qt_meta_data_Kiss__Target__CommunicationManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kiss::Target::CommunicationManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kiss::Target::CommunicationManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kiss::Target::CommunicationManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kiss__Target__CommunicationManager))
        return static_cast<void*>(const_cast< CommunicationManager*>(this));
    if (!strcmp(_clname, "Singleton<CommunicationManager>"))
        return static_cast< Singleton<CommunicationManager>*>(const_cast< CommunicationManager*>(this));
    return QObject::qt_metacast(_clname);
}

int Kiss::Target::CommunicationManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Kiss::Target::CommunicationManager::admitted(const CommunicationEntryPtr & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Kiss::Target::CommunicationManager::began(const CommunicationEntryPtr & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Kiss::Target::CommunicationManager::progress(const CommunicationEntryPtr & _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Kiss::Target::CommunicationManager::finished(const CommunicationEntryPtr & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Kiss::Target::CommunicationManager::queueFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
