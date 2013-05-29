/********************************************************************************
** Form generated from reading UI file 'Documentation.ui'
**
** Created: Wed May 29 16:42:46 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCUMENTATION_H
#define UI_DOCUMENTATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Documentation
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;

    void setupUi(QWidget *Documentation)
    {
        if (Documentation->objectName().isEmpty())
            Documentation->setObjectName(QString::fromUtf8("Documentation"));
        Documentation->resize(690, 409);
        verticalLayout = new QVBoxLayout(Documentation);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(Documentation);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidget->setAlternatingRowColors(true);
        listWidget->setSelectionMode(QAbstractItemView::NoSelection);
        listWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        listWidget->setGridSize(QSize(0, 50));

        verticalLayout->addWidget(listWidget);


        retranslateUi(Documentation);

        QMetaObject::connectSlotsByName(Documentation);
    } // setupUi

    void retranslateUi(QWidget *Documentation)
    {
        Documentation->setWindowTitle(QApplication::translate("Documentation", "Documentation", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Documentation: public Ui_Documentation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCUMENTATION_H
