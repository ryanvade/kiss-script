/********************************************************************************
** Form generated from reading UI file 'RequestFileDialog.ui'
**
** Created: Wed May 29 12:25:34 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUESTFILEDIALOG_H
#define UI_REQUESTFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RequestFileDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *ui_info;
    QListWidget *ui_files;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RequestFileDialog)
    {
        if (RequestFileDialog->objectName().isEmpty())
            RequestFileDialog->setObjectName(QString::fromUtf8("RequestFileDialog"));
        RequestFileDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(RequestFileDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ui_info = new QLabel(RequestFileDialog);
        ui_info->setObjectName(QString::fromUtf8("ui_info"));

        verticalLayout->addWidget(ui_info);

        ui_files = new QListWidget(RequestFileDialog);
        ui_files->setObjectName(QString::fromUtf8("ui_files"));

        verticalLayout->addWidget(ui_files);

        buttonBox = new QDialogButtonBox(RequestFileDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RequestFileDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RequestFileDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RequestFileDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RequestFileDialog);
    } // setupUi

    void retranslateUi(QDialog *RequestFileDialog)
    {
        RequestFileDialog->setWindowTitle(QApplication::translate("RequestFileDialog", "Request File", 0, QApplication::UnicodeUTF8));
        ui_info->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RequestFileDialog: public Ui_RequestFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUESTFILEDIALOG_H
