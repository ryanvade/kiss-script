/********************************************************************************
** Form generated from reading UI file 'ProjectSettingsTab.ui'
**
** Created: Wed May 29 12:25:34 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTSETTINGSTAB_H
#define UI_PROJECTSETTINGSTAB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectSettingsTab
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *ui_settingsTable;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *ui_remove;
    QPushButton *ui_add;

    void setupUi(QWidget *ProjectSettingsTab)
    {
        if (ProjectSettingsTab->objectName().isEmpty())
            ProjectSettingsTab->setObjectName(QString::fromUtf8("ProjectSettingsTab"));
        ProjectSettingsTab->resize(700, 490);
        verticalLayout = new QVBoxLayout(ProjectSettingsTab);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ui_settingsTable = new QTableWidget(ProjectSettingsTab);
        if (ui_settingsTable->columnCount() < 2)
            ui_settingsTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        ui_settingsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        ui_settingsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        ui_settingsTable->setObjectName(QString::fromUtf8("ui_settingsTable"));
        ui_settingsTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui_settingsTable->setColumnCount(2);
        ui_settingsTable->horizontalHeader()->setCascadingSectionResizes(false);
        ui_settingsTable->horizontalHeader()->setDefaultSectionSize(150);
        ui_settingsTable->horizontalHeader()->setHighlightSections(true);
        ui_settingsTable->horizontalHeader()->setMinimumSectionSize(1);
        ui_settingsTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        ui_settingsTable->horizontalHeader()->setStretchLastSection(true);
        ui_settingsTable->verticalHeader()->setVisible(false);
        ui_settingsTable->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(ui_settingsTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ui_remove = new QPushButton(ProjectSettingsTab);
        ui_remove->setObjectName(QString::fromUtf8("ui_remove"));

        horizontalLayout->addWidget(ui_remove);

        ui_add = new QPushButton(ProjectSettingsTab);
        ui_add->setObjectName(QString::fromUtf8("ui_add"));

        horizontalLayout->addWidget(ui_add);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ProjectSettingsTab);

        QMetaObject::connectSlotsByName(ProjectSettingsTab);
    } // setupUi

    void retranslateUi(QWidget *ProjectSettingsTab)
    {
        ProjectSettingsTab->setWindowTitle(QApplication::translate("ProjectSettingsTab", "Form", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = ui_settingsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ProjectSettingsTab", "Key", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = ui_settingsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ProjectSettingsTab", "Value", 0, QApplication::UnicodeUTF8));
        ui_remove->setText(QApplication::translate("ProjectSettingsTab", "Remove Key", 0, QApplication::UnicodeUTF8));
        ui_add->setText(QApplication::translate("ProjectSettingsTab", "Add Key", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ProjectSettingsTab: public Ui_ProjectSettingsTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTSETTINGSTAB_H
