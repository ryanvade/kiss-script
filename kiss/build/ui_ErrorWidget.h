/********************************************************************************
** Form generated from reading UI file 'ErrorWidget.ui'
**
** Created: Wed May 29 12:25:34 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORWIDGET_H
#define UI_ERRORWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ErrorWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *ui_viewMode;
    QSpacerItem *horizontalSpacer;
    QPushButton *ui_hide;
    QTabWidget *ui_tabs;
    QTextBrowser *ui_raw;

    void setupUi(QWidget *ErrorWidget)
    {
        if (ErrorWidget->objectName().isEmpty())
            ErrorWidget->setObjectName(QString::fromUtf8("ErrorWidget"));
        ErrorWidget->resize(581, 295);
        verticalLayout = new QVBoxLayout(ErrorWidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        ui_viewMode = new QComboBox(ErrorWidget);
        ui_viewMode->setObjectName(QString::fromUtf8("ui_viewMode"));
        ui_viewMode->setMinimumSize(QSize(200, 0));

        horizontalLayout_2->addWidget(ui_viewMode);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        ui_hide = new QPushButton(ErrorWidget);
        ui_hide->setObjectName(QString::fromUtf8("ui_hide"));
        ui_hide->setMaximumSize(QSize(30, 20));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/shortcuts/file/icon_set/icons/cross.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_hide->setIcon(icon);
        ui_hide->setFlat(true);

        horizontalLayout_2->addWidget(ui_hide);


        verticalLayout->addLayout(horizontalLayout_2);

        ui_tabs = new QTabWidget(ErrorWidget);
        ui_tabs->setObjectName(QString::fromUtf8("ui_tabs"));

        verticalLayout->addWidget(ui_tabs);

        ui_raw = new QTextBrowser(ErrorWidget);
        ui_raw->setObjectName(QString::fromUtf8("ui_raw"));

        verticalLayout->addWidget(ui_raw);

        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);

        retranslateUi(ErrorWidget);
        QObject::connect(ui_hide, SIGNAL(clicked()), ErrorWidget, SLOT(hide()));

        ui_tabs->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ErrorWidget);
    } // setupUi

    void retranslateUi(QWidget *ErrorWidget)
    {
        ErrorWidget->setWindowTitle(QApplication::translate("ErrorWidget", "Errors", 0, QApplication::UnicodeUTF8));
        ui_viewMode->clear();
        ui_viewMode->insertItems(0, QStringList()
         << QApplication::translate("ErrorWidget", "Categorized", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ErrorWidget", "Raw", 0, QApplication::UnicodeUTF8)
        );
        ui_hide->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ErrorWidget: public Ui_ErrorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORWIDGET_H
