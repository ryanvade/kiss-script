/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created: Wed May 29 16:42:46 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "communication_widget.hpp"
#include "output_widget.hpp"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *ui_centralwidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QSplitter *splitter;
    QTabWidget *ui_tabWidget;
    QWidget *tab;
    OutputWidget *ui_errors;
    QFrame *ui_projectFrame;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QTreeView *ui_projects;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *ui_addFile;
    QPushButton *ui_removeFile;
    QSpacerItem *horizontalSpacer;
    Kiss::Widget::CommunicationWidget *ui_comm;
    QStatusBar *ui_statusbar;
    QMenuBar *ui_menubar;
    QToolBar *ui_toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(1024, 625);
        MainWindow->setMinimumSize(QSize(200, 0));
        MainWindow->setAcceptDrops(true);
        MainWindow->setWindowOpacity(1);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        ui_centralwidget = new QWidget(MainWindow);
        ui_centralwidget->setObjectName(QString::fromUtf8("ui_centralwidget"));
        verticalLayout_2 = new QVBoxLayout(ui_centralwidget);
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, 0, -1);
        splitter = new QSplitter(ui_centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        ui_tabWidget = new QTabWidget(splitter);
        ui_tabWidget->setObjectName(QString::fromUtf8("ui_tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(ui_tabWidget->sizePolicy().hasHeightForWidth());
        ui_tabWidget->setSizePolicy(sizePolicy);
        ui_tabWidget->setTabPosition(QTabWidget::North);
        ui_tabWidget->setTabShape(QTabWidget::Rounded);
        ui_tabWidget->setElideMode(Qt::ElideRight);
        ui_tabWidget->setUsesScrollButtons(false);
        ui_tabWidget->setTabsClosable(false);
        ui_tabWidget->setMovable(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        ui_tabWidget->addTab(tab, QString());
        splitter->addWidget(ui_tabWidget);
        ui_errors = new OutputWidget(splitter);
        ui_errors->setObjectName(QString::fromUtf8("ui_errors"));
        ui_errors->setMinimumSize(QSize(0, 150));
        splitter->addWidget(ui_errors);

        horizontalLayout_3->addWidget(splitter);

        ui_projectFrame = new QFrame(ui_centralwidget);
        ui_projectFrame->setObjectName(QString::fromUtf8("ui_projectFrame"));
        ui_projectFrame->setFrameShape(QFrame::NoFrame);
        ui_projectFrame->setFrameShadow(QFrame::Raised);
        ui_projectFrame->setLineWidth(0);
        verticalLayout_3 = new QVBoxLayout(ui_projectFrame);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        ui_projects = new QTreeView(ui_projectFrame);
        ui_projects->setObjectName(QString::fromUtf8("ui_projects"));
        ui_projects->setRootIsDecorated(true);
        ui_projects->setHeaderHidden(true);
        ui_projects->setExpandsOnDoubleClick(false);

        verticalLayout->addWidget(ui_projects);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        ui_addFile = new QPushButton(ui_projectFrame);
        ui_addFile->setObjectName(QString::fromUtf8("ui_addFile"));
        ui_addFile->setMaximumSize(QSize(20, 20));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/sourcefile/icon_set/icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_addFile->setIcon(icon);
        ui_addFile->setFlat(true);

        horizontalLayout_2->addWidget(ui_addFile);

        ui_removeFile = new QPushButton(ui_projectFrame);
        ui_removeFile->setObjectName(QString::fromUtf8("ui_removeFile"));
        ui_removeFile->setMaximumSize(QSize(20, 20));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/sourcefile/icon_set/icons/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_removeFile->setIcon(icon1);
        ui_removeFile->setFlat(true);

        horizontalLayout_2->addWidget(ui_removeFile);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout);


        horizontalLayout_3->addWidget(ui_projectFrame);

        horizontalLayout_3->setStretch(0, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);

        ui_comm = new Kiss::Widget::CommunicationWidget(ui_centralwidget);
        ui_comm->setObjectName(QString::fromUtf8("ui_comm"));
        ui_comm->setMinimumSize(QSize(0, 150));

        verticalLayout_2->addWidget(ui_comm);

        MainWindow->setCentralWidget(ui_centralwidget);
        ui_statusbar = new QStatusBar(MainWindow);
        ui_statusbar->setObjectName(QString::fromUtf8("ui_statusbar"));
        MainWindow->setStatusBar(ui_statusbar);
        ui_menubar = new QMenuBar(MainWindow);
        ui_menubar->setObjectName(QString::fromUtf8("ui_menubar"));
        ui_menubar->setGeometry(QRect(0, 0, 1024, 22));
        MainWindow->setMenuBar(ui_menubar);
        ui_toolBar = new QToolBar(MainWindow);
        ui_toolBar->setObjectName(QString::fromUtf8("ui_toolBar"));
        ui_toolBar->setMovable(false);
        ui_toolBar->setAllowedAreas(Qt::TopToolBarArea);
        ui_toolBar->setIconSize(QSize(16, 16));
        ui_toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        ui_toolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, ui_toolBar);

        retranslateUi(MainWindow);

        ui_tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "KIPR's Instructional Software System", 0, QApplication::UnicodeUTF8));
        ui_tabWidget->setTabText(ui_tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", 0, QApplication::UnicodeUTF8));
        ui_addFile->setText(QString());
        ui_removeFile->setText(QString());
        ui_toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
