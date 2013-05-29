/****************************************************************************
** Meta object code from reading C++ file 'main_window.hpp'
**
** Created: Wed May 29 12:25:30 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/main_window.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Kiss__Widget__MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x05,
      44,   25,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      64,   25,   25,   25, 0x0a,
      85,   25,   25,   25, 0x0a,
     123,   25,  103,   25, 0x0a,
     136,   25,   25,   25, 0x0a,
     146,   25,   25,   25, 0x0a,
     153,   25,   25,   25, 0x0a,
     167,   25,   25,   25, 0x0a,
     174,   25,   25,   25, 0x0a,
     191,  185,   25,   25, 0x0a,
     206,   25,   25,   25, 0x2a,
     225,  217,   25,   25, 0x0a,
     279,  274,  269,   25, 0x0a,
     298,   25,   25,   25, 0x0a,
     306,   25,   25,   25, 0x0a,
     317,   25,   25,   25, 0x0a,
     333,  325,   25,   25, 0x0a,
     374,   25,   25,   25, 0x0a,
     390,   25,   25,   25, 0x0a,
     411,   25,   25,   25, 0x0a,
     435,   25,   25,   25, 0x0a,
     459,  454,   25,   25, 0x0a,
     481,   25,   25,   25, 0x2a,
     499,   25,   25,   25, 0x0a,
     517,   25,   25,   25, 0x0a,
     566,  561,  545,   25, 0x0a,
     582,  580,   25,   25, 0x08,
     618,   25,   25,   25, 0x08,
     642,   25,   25,   25, 0x08,
     669,   25,   25,   25, 0x08,
     687,  682,   25,   25, 0x08,
     722,  718,   25,   25, 0x08,
     760,  754,   25,   25, 0x08,
     788,  754,   25,   25, 0x08,
     820,  217,   25,   25, 0x08,
     861,  217,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Kiss__Widget__MainWindow[] = {
    "Kiss::Widget::MainWindow\0\0settingsUpdated()\0"
    "updateActivatable()\0importTemplatePack()\0"
    "newTemplatePack()\0Project::ProjectPtr\0"
    "newProject()\0newFile()\0open()\0"
    "openProject()\0next()\0previous()\0force\0"
    "closeTab(bool)\0closeTab()\0project\0"
    "closeProjectTabs(Kiss::Project::ProjectPtr)\0"
    "bool\0file\0closeFile(QString)\0about()\0"
    "settings()\0theme()\0results\0"
    "showCompilerOutput(Compiler::OutputList)\0"
    "projectAddNew()\0projectAddExisting()\0"
    "projectRemoveExisting()\0projectExtractTo()\0"
    "show\0showProjectDock(bool)\0showProjectDock()\0"
    "hideProjectDock()\0toggleCommunicationWidget()\0"
    "QList<QObject*>\0type\0tabs(QString)\0i\0"
    "on_ui_tabWidget_currentChanged(int)\0"
    "on_ui_addFile_clicked()\0"
    "on_ui_removeFile_clicked()\0openRecent()\0"
    "item\0errorClicked(QListWidgetItem*)\0"
    "pos\0showContextMenuForError(QPoint)\0"
    "index\0projectClicked(QModelIndex)\0"
    "projectFileClicked(QModelIndex)\0"
    "projectOpened(Kiss::Project::ProjectPtr)\0"
    "projectClosed(Kiss::Project::ProjectPtr)\0"
};

void Kiss::Widget::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->settingsUpdated(); break;
        case 1: _t->updateActivatable(); break;
        case 2: _t->importTemplatePack(); break;
        case 3: _t->newTemplatePack(); break;
        case 4: { Project::ProjectPtr _r = _t->newProject();
            if (_a[0]) *reinterpret_cast< Project::ProjectPtr*>(_a[0]) = _r; }  break;
        case 5: _t->newFile(); break;
        case 6: _t->open(); break;
        case 7: _t->openProject(); break;
        case 8: _t->next(); break;
        case 9: _t->previous(); break;
        case 10: _t->closeTab((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->closeTab(); break;
        case 12: _t->closeProjectTabs((*reinterpret_cast< const Kiss::Project::ProjectPtr(*)>(_a[1]))); break;
        case 13: { bool _r = _t->closeFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->about(); break;
        case 15: _t->settings(); break;
        case 16: _t->theme(); break;
        case 17: _t->showCompilerOutput((*reinterpret_cast< const Compiler::OutputList(*)>(_a[1]))); break;
        case 18: _t->projectAddNew(); break;
        case 19: _t->projectAddExisting(); break;
        case 20: _t->projectRemoveExisting(); break;
        case 21: _t->projectExtractTo(); break;
        case 22: _t->showProjectDock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->showProjectDock(); break;
        case 24: _t->hideProjectDock(); break;
        case 25: _t->toggleCommunicationWidget(); break;
        case 26: { QList<QObject*> _r = _t->tabs((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QObject*>*>(_a[0]) = _r; }  break;
        case 27: _t->on_ui_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->on_ui_addFile_clicked(); break;
        case 29: _t->on_ui_removeFile_clicked(); break;
        case 30: _t->openRecent(); break;
        case 31: _t->errorClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 32: _t->showContextMenuForError((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 33: _t->projectClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 34: _t->projectFileClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 35: _t->projectOpened((*reinterpret_cast< const Kiss::Project::ProjectPtr(*)>(_a[1]))); break;
        case 36: _t->projectClosed((*reinterpret_cast< const Kiss::Project::ProjectPtr(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Kiss::Widget::MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Kiss::Widget::MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Kiss__Widget__MainWindow,
      qt_meta_data_Kiss__Widget__MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Kiss::Widget::MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Kiss::Widget::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Kiss::Widget::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Kiss__Widget__MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Kiss::Widget::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    }
    return _id;
}

// SIGNAL 0
void Kiss::Widget::MainWindow::settingsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Kiss::Widget::MainWindow::updateActivatable()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
