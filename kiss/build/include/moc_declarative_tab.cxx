/****************************************************************************
** Meta object code from reading C++ file 'declarative_tab.hpp'
**
** Created: Wed May 29 12:25:30 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/declarative_tab.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'declarative_tab.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Kiss__Widget__DeclarativeTools[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   31,   31,   31, 0x05,
      44,   31,   31,   31, 0x05,

 // slots: signature, parameters, type, tag, flags
      61,   31,   31,   31, 0x0a,
      71,   31,   31,   31, 0x0a,
      82,   78,   31,   31, 0x0a,
      99,   31,   31,   31, 0x0a,
     129,  122,  110,   31, 0x0a,
     148,   31,   31,   31, 0x0a,
     164,   31,   31,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Kiss__Widget__DeclarativeTools[] = {
    "Kiss::Widget::DeclarativeTools\0\0"
    "activated()\0completedSetup()\0newFile()\0"
    "open()\0url\0openWeb(QString)\0settings()\0"
    "QStringList\0target\0templates(QString)\0"
    "tellActivated()\0tellCompletedSetup()\0"
};

void Kiss::Widget::DeclarativeTools::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DeclarativeTools *_t = static_cast<DeclarativeTools *>(_o);
        switch (_id) {
        case 0: _t->activated(); break;
        case 1: _t->completedSetup(); break;
        case 2: _t->newFile(); break;
        case 3: _t->open(); break;
        case 4: _t->openWeb((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->settings(); break;
        case 6: { QStringList _r = _t->templates((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 7: _t->tellActivated(); break;
        case 8: _t->tellCompletedSetup(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Kiss::Widget::DeclarativeTools::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kiss::Widget::DeclarativeTools::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Kiss__Widget__DeclarativeTools,
      qt_meta_data_Kiss__Widget__DeclarativeTools, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kiss::Widget::DeclarativeTools::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kiss::Widget::DeclarativeTools::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kiss::Widget::DeclarativeTools::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kiss__Widget__DeclarativeTools))
        return static_cast<void*>(const_cast< DeclarativeTools*>(this));
    return QObject::qt_metacast(_clname);
}

int Kiss::Widget::DeclarativeTools::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Kiss::Widget::DeclarativeTools::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Kiss::Widget::DeclarativeTools::completedSetup()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_Kiss__Widget__DeclarativeTab[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x0a,
      45,   39,   29,   29, 0x0a,
      63,   29,   29,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Kiss__Widget__DeclarativeTab[] = {
    "Kiss::Widget::DeclarativeTab\0\0reload()\0"
    "title\0setTitle(QString)\0refreshSettings()\0"
};

void Kiss::Widget::DeclarativeTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DeclarativeTab *_t = static_cast<DeclarativeTab *>(_o);
        switch (_id) {
        case 0: _t->reload(); break;
        case 1: _t->setTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->refreshSettings(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Kiss::Widget::DeclarativeTab::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kiss::Widget::DeclarativeTab::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Kiss__Widget__DeclarativeTab,
      qt_meta_data_Kiss__Widget__DeclarativeTab, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kiss::Widget::DeclarativeTab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kiss::Widget::DeclarativeTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kiss::Widget::DeclarativeTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kiss__Widget__DeclarativeTab))
        return static_cast<void*>(const_cast< DeclarativeTab*>(this));
    if (!strcmp(_clname, "Tab"))
        return static_cast< Tab*>(const_cast< DeclarativeTab*>(this));
    return QObject::qt_metacast(_clname);
}

int Kiss::Widget::DeclarativeTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
