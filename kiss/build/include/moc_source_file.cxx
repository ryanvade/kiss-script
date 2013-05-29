/****************************************************************************
** Meta object code from reading C++ file 'source_file.hpp'
**
** Created: Wed May 29 12:25:31 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/source_file.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'source_file.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Kiss__Widget__SourceFile[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      51,   25,   46,   25, 0x0a,
      60,   25,   25,   25, 0x0a,
      67,   25,   25,   25, 0x0a,
      73,   25,   25,   25, 0x0a,
      81,   25,   25,   25, 0x0a,
      88,   25,   25,   25, 0x0a,
      95,   25,   25,   25, 0x0a,
     102,   25,   25,   25, 0x0a,
     110,   25,   25,   25, 0x0a,
     129,   25,   46,   25, 0x0a,
     144,   25,   46,   25, 0x0a,
     155,   25,   46,   25, 0x0a,
     165,   25,   46,   25, 0x0a,
     171,   25,   25,   25, 0x0a,
     178,   25,   25,   25, 0x0a,
     186,   25,   25,   25, 0x0a,
     199,   25,   25,   25, 0x0a,
     221,  213,   25,   25, 0x0a,
     244,   25,   25,   25, 0x0a,
     263,   25,   25,   25, 0x0a,
     275,   25,   25,   25, 0x0a,
     293,   25,   25,   25, 0x0a,
     309,   25,   25,   25, 0x0a,
     318,   25,   25,   25, 0x0a,
     328,   25,   25,   25, 0x0a,
     340,   25,   46,   25, 0x0a,
     349,  347,   25,   25, 0x0a,
     383,   25,  370,   25, 0x0a,
     404,  393,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Kiss__Widget__SourceFile[] = {
    "Kiss::Widget::SourceFile\0\0updateActivatable()\0"
    "bool\0saveAs()\0copy()\0cut()\0paste()\0"
    "undo()\0redo()\0find()\0print()\0"
    "convertToProject()\0changeTarget()\0"
    "download()\0compile()\0run()\0stop()\0"
    "debug()\0screenGrab()\0requestFile()\0"
    "checked\0toggleBreakpoint(bool)\0"
    "clearBreakpoints()\0indentAll()\0"
    "refreshSettings()\0updateMargins()\0"
    "zoomIn()\0zoomOut()\0zoomReset()\0save()\0"
    "m\0sourceModified(bool)\0Kiss::KarPtr\0"
    "archive()\0line,index\0"
    "on_ui_editor_cursorPositionChanged(int,int)\0"
};

void Kiss::Widget::SourceFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SourceFile *_t = static_cast<SourceFile *>(_o);
        switch (_id) {
        case 0: _t->updateActivatable(); break;
        case 1: { bool _r = _t->saveAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->copy(); break;
        case 3: _t->cut(); break;
        case 4: _t->paste(); break;
        case 5: _t->undo(); break;
        case 6: _t->redo(); break;
        case 7: _t->find(); break;
        case 8: _t->print(); break;
        case 9: _t->convertToProject(); break;
        case 10: { bool _r = _t->changeTarget();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->download();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->compile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->run();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->stop(); break;
        case 15: _t->debug(); break;
        case 16: _t->screenGrab(); break;
        case 17: _t->requestFile(); break;
        case 18: _t->toggleBreakpoint((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 19: _t->clearBreakpoints(); break;
        case 20: _t->indentAll(); break;
        case 21: _t->refreshSettings(); break;
        case 22: _t->updateMargins(); break;
        case 23: _t->zoomIn(); break;
        case 24: _t->zoomOut(); break;
        case 25: _t->zoomReset(); break;
        case 26: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: _t->sourceModified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: { Kiss::KarPtr _r = _t->archive();
            if (_a[0]) *reinterpret_cast< Kiss::KarPtr*>(_a[0]) = _r; }  break;
        case 29: _t->on_ui_editor_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Kiss::Widget::SourceFile::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kiss::Widget::SourceFile::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Kiss__Widget__SourceFile,
      qt_meta_data_Kiss__Widget__SourceFile, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kiss::Widget::SourceFile::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kiss::Widget::SourceFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kiss::Widget::SourceFile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kiss__Widget__SourceFile))
        return static_cast<void*>(const_cast< SourceFile*>(this));
    if (!strcmp(_clname, "Tab"))
        return static_cast< Tab*>(const_cast< SourceFile*>(this));
    if (!strcmp(_clname, "Unit"))
        return static_cast< Unit*>(const_cast< SourceFile*>(this));
    return QWidget::qt_metacast(_clname);
}

int Kiss::Widget::SourceFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void Kiss::Widget::SourceFile::updateActivatable()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
