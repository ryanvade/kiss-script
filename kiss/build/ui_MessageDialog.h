/********************************************************************************
** Form generated from reading UI file 'MessageDialog.ui'
**
** Created: Wed May 29 16:42:46 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEDIALOG_H
#define UI_MESSAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MessageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *ui_label;
    QTextBrowser *ui_message;
    QHBoxLayout *horizontalLayout;
    QPushButton *ui_copy;
    QDialogButtonBox *ui_buttons;

    void setupUi(QDialog *MessageDialog)
    {
        if (MessageDialog->objectName().isEmpty())
            MessageDialog->setObjectName(QString::fromUtf8("MessageDialog"));
        MessageDialog->resize(536, 382);
        verticalLayout = new QVBoxLayout(MessageDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ui_label = new QLabel(MessageDialog);
        ui_label->setObjectName(QString::fromUtf8("ui_label"));

        verticalLayout->addWidget(ui_label);

        ui_message = new QTextBrowser(MessageDialog);
        ui_message->setObjectName(QString::fromUtf8("ui_message"));
        ui_message->setOpenExternalLinks(true);
        ui_message->setOpenLinks(false);

        verticalLayout->addWidget(ui_message);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ui_copy = new QPushButton(MessageDialog);
        ui_copy->setObjectName(QString::fromUtf8("ui_copy"));

        horizontalLayout->addWidget(ui_copy);

        ui_buttons = new QDialogButtonBox(MessageDialog);
        ui_buttons->setObjectName(QString::fromUtf8("ui_buttons"));
        ui_buttons->setOrientation(Qt::Horizontal);
        ui_buttons->setStandardButtons(QDialogButtonBox::Ok);

        horizontalLayout->addWidget(ui_buttons);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(MessageDialog);
        QObject::connect(ui_buttons, SIGNAL(accepted()), MessageDialog, SLOT(accept()));
        QObject::connect(ui_buttons, SIGNAL(rejected()), MessageDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MessageDialog);
    } // setupUi

    void retranslateUi(QDialog *MessageDialog)
    {
        MessageDialog->setWindowTitle(QApplication::translate("MessageDialog", "Error", 0, QApplication::UnicodeUTF8));
        ui_label->setText(QApplication::translate("MessageDialog", "KISS IDE has encountered an error:", 0, QApplication::UnicodeUTF8));
        ui_copy->setText(QApplication::translate("MessageDialog", "Copy to Clipboard", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MessageDialog: public Ui_MessageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEDIALOG_H
