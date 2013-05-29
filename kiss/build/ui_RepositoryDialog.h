/********************************************************************************
** Form generated from reading UI file 'RepositoryDialog.ui'
**
** Created: Wed May 29 12:25:34 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPOSITORYDIALOG_H
#define UI_REPOSITORYDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RepositoryDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *ui_list;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RepositoryDialog)
    {
        if (RepositoryDialog->objectName().isEmpty())
            RepositoryDialog->setObjectName(QString::fromUtf8("RepositoryDialog"));
        RepositoryDialog->resize(597, 341);
        verticalLayout = new QVBoxLayout(RepositoryDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ui_list = new QListWidget(RepositoryDialog);
        ui_list->setObjectName(QString::fromUtf8("ui_list"));

        verticalLayout->addWidget(ui_list);

        buttonBox = new QDialogButtonBox(RepositoryDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RepositoryDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RepositoryDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RepositoryDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RepositoryDialog);
    } // setupUi

    void retranslateUi(QDialog *RepositoryDialog)
    {
        RepositoryDialog->setWindowTitle(QApplication::translate("RepositoryDialog", "Repository", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RepositoryDialog: public Ui_RepositoryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPOSITORYDIALOG_H
