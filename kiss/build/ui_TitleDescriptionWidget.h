/********************************************************************************
** Form generated from reading UI file 'TitleDescriptionWidget.ui'
**
** Created: Wed May 29 16:42:46 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TITLEDESCRIPTIONWIDGET_H
#define UI_TITLEDESCRIPTIONWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TitleDescriptionWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *title;
    QLabel *description;

    void setupUi(QWidget *TitleDescriptionWidget)
    {
        if (TitleDescriptionWidget->objectName().isEmpty())
            TitleDescriptionWidget->setObjectName(QString::fromUtf8("TitleDescriptionWidget"));
        TitleDescriptionWidget->resize(596, 88);
        horizontalLayout = new QHBoxLayout(TitleDescriptionWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(6, 6, 6, 6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        title = new QLabel(TitleDescriptionWidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setStyleSheet(QString::fromUtf8("font: 20pt;"));
        title->setTextFormat(Qt::AutoText);

        verticalLayout_2->addWidget(title);

        description = new QLabel(TitleDescriptionWidget);
        description->setObjectName(QString::fromUtf8("description"));
        description->setStyleSheet(QString::fromUtf8("font: italic;"));
        description->setWordWrap(true);

        verticalLayout_2->addWidget(description);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayout->setStretch(0, 2);

        retranslateUi(TitleDescriptionWidget);

        QMetaObject::connectSlotsByName(TitleDescriptionWidget);
    } // setupUi

    void retranslateUi(QWidget *TitleDescriptionWidget)
    {
        TitleDescriptionWidget->setWindowTitle(QApplication::translate("TitleDescriptionWidget", "TitleDescriptionWidget", 0, QApplication::UnicodeUTF8));
        title->setText(QApplication::translate("TitleDescriptionWidget", "Title", 0, QApplication::UnicodeUTF8));
        description->setText(QApplication::translate("TitleDescriptionWidget", "Description", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TitleDescriptionWidget: public Ui_TitleDescriptionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TITLEDESCRIPTIONWIDGET_H
