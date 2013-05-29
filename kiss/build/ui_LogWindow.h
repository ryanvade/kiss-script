/********************************************************************************
** Form generated from reading UI file 'LogWindow.ui'
**
** Created: Wed May 29 16:42:46 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGWINDOW_H
#define UI_LOGWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogWindow
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *ui_log;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QDialogButtonBox *ui_buttons;

    void setupUi(QWidget *LogWindow)
    {
        if (LogWindow->objectName().isEmpty())
            LogWindow->setObjectName(QString::fromUtf8("LogWindow"));
        LogWindow->resize(800, 567);
        verticalLayout = new QVBoxLayout(LogWindow);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ui_log = new QTextBrowser(LogWindow);
        ui_log->setObjectName(QString::fromUtf8("ui_log"));
        ui_log->setStyleSheet(QString::fromUtf8("font: 12pt \"Courier New\";"));

        verticalLayout->addWidget(ui_log);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(LogWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        ui_buttons = new QDialogButtonBox(LogWindow);
        ui_buttons->setObjectName(QString::fromUtf8("ui_buttons"));
        ui_buttons->setOrientation(Qt::Horizontal);
        ui_buttons->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(ui_buttons);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(LogWindow);
        QObject::connect(ui_buttons, SIGNAL(accepted()), LogWindow, SLOT(hide()));
        QObject::connect(ui_buttons, SIGNAL(rejected()), LogWindow, SLOT(hide()));
        QObject::connect(pushButton, SIGNAL(clicked()), ui_log, SLOT(clear()));

        QMetaObject::connectSlotsByName(LogWindow);
    } // setupUi

    void retranslateUi(QWidget *LogWindow)
    {
        LogWindow->setWindowTitle(QApplication::translate("LogWindow", "Error Log", 0, QApplication::UnicodeUTF8));
        ui_log->setHtml(QApplication::translate("LogWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Courier New'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("LogWindow", "Clear", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LogWindow: public Ui_LogWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGWINDOW_H
