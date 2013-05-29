/********************************************************************************
** Form generated from reading UI file 'template_dialog.ui'
**
** Created: Wed May 29 16:42:46 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMPLATE_DIALOG_H
#define UI_TEMPLATE_DIALOG_H

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
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TemplateDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QTreeView *templates;
    QTextBrowser *description;
    QHBoxLayout *horizontalLayout;
    QPushButton *removePack;
    QDialogButtonBox *buttons;

    void setupUi(QDialog *TemplateDialog)
    {
        if (TemplateDialog->objectName().isEmpty())
            TemplateDialog->setObjectName(QString::fromUtf8("TemplateDialog"));
        TemplateDialog->resize(662, 418);
        TemplateDialog->setMinimumSize(QSize(650, 410));
        verticalLayout = new QVBoxLayout(TemplateDialog);
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(TemplateDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        label = new QLabel(TemplateDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMaximumSize(QSize(32, 32));
        label->setPixmap(QPixmap(QString::fromUtf8(":/welcome/new.png")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);

        horizontalLayout_2->setStretch(0, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        templates = new QTreeView(TemplateDialog);
        templates->setObjectName(QString::fromUtf8("templates"));
        templates->setHeaderHidden(true);

        horizontalLayout_3->addWidget(templates);

        description = new QTextBrowser(TemplateDialog);
        description->setObjectName(QString::fromUtf8("description"));
        description->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0);"));

        horizontalLayout_3->addWidget(description);

        horizontalLayout_3->setStretch(0, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        removePack = new QPushButton(TemplateDialog);
        removePack->setObjectName(QString::fromUtf8("removePack"));

        horizontalLayout->addWidget(removePack);

        buttons = new QDialogButtonBox(TemplateDialog);
        buttons->setObjectName(QString::fromUtf8("buttons"));
        buttons->setOrientation(Qt::Horizontal);
        buttons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttons);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TemplateDialog);
        QObject::connect(buttons, SIGNAL(accepted()), TemplateDialog, SLOT(accept()));
        QObject::connect(buttons, SIGNAL(rejected()), TemplateDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TemplateDialog);
    } // setupUi

    void retranslateUi(QDialog *TemplateDialog)
    {
        TemplateDialog->setWindowTitle(QApplication::translate("TemplateDialog", "Templates", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TemplateDialog", "Please select a template:", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        description->setHtml(QApplication::translate("TemplateDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Please select a template or template pack to the left. A description of that item will appear here.</p></body></html>", 0, QApplication::UnicodeUTF8));
        removePack->setText(QApplication::translate("TemplateDialog", "Remove Template Pack", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TemplateDialog: public Ui_TemplateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPLATE_DIALOG_H
