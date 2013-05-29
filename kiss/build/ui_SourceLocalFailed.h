/********************************************************************************
** Form generated from reading UI file 'SourceLocalFailed.ui'
**
** Created: Wed May 29 12:25:34 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOURCELOCALFAILED_H
#define UI_SOURCELOCALFAILED_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SourceLocalFailed
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *ui_always;
    QPushButton *ui_yes;
    QPushButton *ui_no;
    QPushButton *ui_never;

    void setupUi(QWidget *SourceLocalFailed)
    {
        if (SourceLocalFailed->objectName().isEmpty())
            SourceLocalFailed->setObjectName(QString::fromUtf8("SourceLocalFailed"));
        SourceLocalFailed->resize(919, 32);
        horizontalLayout = new QHBoxLayout(SourceLocalFailed);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(SourceLocalFailed);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ui_always = new QPushButton(SourceLocalFailed);
        ui_always->setObjectName(QString::fromUtf8("ui_always"));

        horizontalLayout->addWidget(ui_always);

        ui_yes = new QPushButton(SourceLocalFailed);
        ui_yes->setObjectName(QString::fromUtf8("ui_yes"));

        horizontalLayout->addWidget(ui_yes);

        ui_no = new QPushButton(SourceLocalFailed);
        ui_no->setObjectName(QString::fromUtf8("ui_no"));

        horizontalLayout->addWidget(ui_no);

        ui_never = new QPushButton(SourceLocalFailed);
        ui_never->setObjectName(QString::fromUtf8("ui_never"));

        horizontalLayout->addWidget(ui_never);


        retranslateUi(SourceLocalFailed);

        QMetaObject::connectSlotsByName(SourceLocalFailed);
    } // setupUi

    void retranslateUi(QWidget *SourceLocalFailed)
    {
        SourceLocalFailed->setWindowTitle(QApplication::translate("SourceLocalFailed", "Form", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SourceLocalFailed", "Download even though local compilation failed?", 0, QApplication::UnicodeUTF8));
        ui_always->setText(QApplication::translate("SourceLocalFailed", "Always", 0, QApplication::UnicodeUTF8));
        ui_yes->setText(QApplication::translate("SourceLocalFailed", "Just This Once", 0, QApplication::UnicodeUTF8));
        ui_no->setText(QApplication::translate("SourceLocalFailed", "No", 0, QApplication::UnicodeUTF8));
        ui_never->setText(QApplication::translate("SourceLocalFailed", "Never", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SourceLocalFailed: public Ui_SourceLocalFailed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOURCELOCALFAILED_H
