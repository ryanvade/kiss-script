/********************************************************************************
** Form generated from reading UI file 'ProjectSetupDialog.ui'
**
** Created: Wed May 29 16:42:46 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTSETUPDIALOG_H
#define UI_PROJECTSETUPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_ProjectSetupDialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ProjectSetupDialog)
    {
        if (ProjectSetupDialog->objectName().isEmpty())
            ProjectSetupDialog->setObjectName(QString::fromUtf8("ProjectSetupDialog"));
        ProjectSetupDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(ProjectSetupDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(ProjectSetupDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ProjectSetupDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ProjectSetupDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ProjectSetupDialog);
    } // setupUi

    void retranslateUi(QDialog *ProjectSetupDialog)
    {
        ProjectSetupDialog->setWindowTitle(QApplication::translate("ProjectSetupDialog", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ProjectSetupDialog: public Ui_ProjectSetupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTSETUPDIALOG_H
