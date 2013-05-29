/********************************************************************************
** Form generated from reading UI file 'communication_widget.ui'
**
** Created: Wed May 29 12:25:34 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMUNICATION_WIDGET_H
#define UI_COMMUNICATION_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CommunicationWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *queue;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *hide;

    void setupUi(QWidget *CommunicationWidget)
    {
        if (CommunicationWidget->objectName().isEmpty())
            CommunicationWidget->setObjectName(QString::fromUtf8("CommunicationWidget"));
        CommunicationWidget->resize(739, 204);
        verticalLayout = new QVBoxLayout(CommunicationWidget);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        queue = new QTableView(CommunicationWidget);
        queue->setObjectName(QString::fromUtf8("queue"));
        queue->setAutoScroll(false);
        queue->setEditTriggers(QAbstractItemView::NoEditTriggers);
        queue->setProperty("showDropIndicator", QVariant(false));
        queue->setDragDropOverwriteMode(false);
        queue->setSelectionMode(QAbstractItemView::NoSelection);
        queue->setSelectionBehavior(QAbstractItemView::SelectRows);
        queue->setShowGrid(false);
        queue->setGridStyle(Qt::NoPen);
        queue->horizontalHeader()->setVisible(false);
        queue->horizontalHeader()->setStretchLastSection(true);
        queue->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(queue);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        hide = new QPushButton(CommunicationWidget);
        hide->setObjectName(QString::fromUtf8("hide"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/shortcuts/target/icon_set/icons/bullet_arrow_down.png"), QSize(), QIcon::Normal, QIcon::Off);
        hide->setIcon(icon);

        horizontalLayout->addWidget(hide);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CommunicationWidget);

        QMetaObject::connectSlotsByName(CommunicationWidget);
    } // setupUi

    void retranslateUi(QWidget *CommunicationWidget)
    {
        CommunicationWidget->setWindowTitle(QApplication::translate("CommunicationWidget", "Communication", 0, QApplication::UnicodeUTF8));
        hide->setText(QApplication::translate("CommunicationWidget", "Hide", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CommunicationWidget: public Ui_CommunicationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMUNICATION_WIDGET_H
