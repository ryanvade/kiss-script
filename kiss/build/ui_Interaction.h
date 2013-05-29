/********************************************************************************
** Form generated from reading UI file 'Interaction.ui'
**
** Created: Wed May 29 12:25:34 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERACTION_H
#define UI_INTERACTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Interaction
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *ui_commandList;
    QHBoxLayout *horizontalLayout;
    QLineEdit *ui_commandLine;
    QPushButton *ui_send;

    void setupUi(QWidget *Interaction)
    {
        if (Interaction->objectName().isEmpty())
            Interaction->setObjectName(QString::fromUtf8("Interaction"));
        Interaction->resize(873, 534);
        verticalLayout = new QVBoxLayout(Interaction);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ui_commandList = new QListWidget(Interaction);
        ui_commandList->setObjectName(QString::fromUtf8("ui_commandList"));

        verticalLayout->addWidget(ui_commandList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ui_commandLine = new QLineEdit(Interaction);
        ui_commandLine->setObjectName(QString::fromUtf8("ui_commandLine"));

        horizontalLayout->addWidget(ui_commandLine);

        ui_send = new QPushButton(Interaction);
        ui_send->setObjectName(QString::fromUtf8("ui_send"));

        horizontalLayout->addWidget(ui_send);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Interaction);

        QMetaObject::connectSlotsByName(Interaction);
    } // setupUi

    void retranslateUi(QWidget *Interaction)
    {
        Interaction->setWindowTitle(QApplication::translate("Interaction", "Form", 0, QApplication::UnicodeUTF8));
        ui_send->setText(QApplication::translate("Interaction", "Send", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Interaction: public Ui_Interaction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERACTION_H
