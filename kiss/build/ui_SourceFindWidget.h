/********************************************************************************
** Form generated from reading UI file 'SourceFindWidget.ui'
**
** Created: Wed May 29 16:42:46 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOURCEFINDWIDGET_H
#define UI_SOURCEFINDWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SourceFindWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *ui_find;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *ui_replace;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *ui_matchCase;
    QSpacerItem *horizontalSpacer;
    QPushButton *ui_next;
    QPushButton *ui_replaceNext;
    QPushButton *ui_replaceAll;
    QPushButton *ui_closeFind;

    void setupUi(QWidget *SourceFindWidget)
    {
        if (SourceFindWidget->objectName().isEmpty())
            SourceFindWidget->setObjectName(QString::fromUtf8("SourceFindWidget"));
        SourceFindWidget->resize(674, 100);
        verticalLayout = new QVBoxLayout(SourceFindWidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(SourceFindWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(60, 0));
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(false);

        horizontalLayout->addWidget(label);

        ui_find = new QLineEdit(SourceFindWidget);
        ui_find->setObjectName(QString::fromUtf8("ui_find"));

        horizontalLayout->addWidget(ui_find);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(SourceFindWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(60, 0));

        horizontalLayout_2->addWidget(label_2);

        ui_replace = new QLineEdit(SourceFindWidget);
        ui_replace->setObjectName(QString::fromUtf8("ui_replace"));

        horizontalLayout_2->addWidget(ui_replace);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        ui_matchCase = new QCheckBox(SourceFindWidget);
        ui_matchCase->setObjectName(QString::fromUtf8("ui_matchCase"));

        horizontalLayout_3->addWidget(ui_matchCase);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        ui_next = new QPushButton(SourceFindWidget);
        ui_next->setObjectName(QString::fromUtf8("ui_next"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/shortcuts/edit/icon_set/icons/arrow_redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_next->setIcon(icon);

        horizontalLayout_3->addWidget(ui_next);

        ui_replaceNext = new QPushButton(SourceFindWidget);
        ui_replaceNext->setObjectName(QString::fromUtf8("ui_replaceNext"));

        horizontalLayout_3->addWidget(ui_replaceNext);

        ui_replaceAll = new QPushButton(SourceFindWidget);
        ui_replaceAll->setObjectName(QString::fromUtf8("ui_replaceAll"));

        horizontalLayout_3->addWidget(ui_replaceAll);

        ui_closeFind = new QPushButton(SourceFindWidget);
        ui_closeFind->setObjectName(QString::fromUtf8("ui_closeFind"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/shortcuts/file/icon_set/icons/cross.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_closeFind->setIcon(icon1);

        horizontalLayout_3->addWidget(ui_closeFind);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(SourceFindWidget);
        QObject::connect(ui_find, SIGNAL(returnPressed()), ui_next, SLOT(click()));
        QObject::connect(ui_closeFind, SIGNAL(clicked()), SourceFindWidget, SLOT(hide()));

        QMetaObject::connectSlotsByName(SourceFindWidget);
    } // setupUi

    void retranslateUi(QWidget *SourceFindWidget)
    {
        SourceFindWidget->setWindowTitle(QApplication::translate("SourceFindWidget", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SourceFindWidget", "Find", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SourceFindWidget", "Replace", 0, QApplication::UnicodeUTF8));
        ui_matchCase->setText(QApplication::translate("SourceFindWidget", "Match Case", 0, QApplication::UnicodeUTF8));
        ui_next->setText(QApplication::translate("SourceFindWidget", "Next", 0, QApplication::UnicodeUTF8));
        ui_replaceNext->setText(QApplication::translate("SourceFindWidget", "Replace and Next", 0, QApplication::UnicodeUTF8));
        ui_replaceAll->setText(QApplication::translate("SourceFindWidget", "Replace All", 0, QApplication::UnicodeUTF8));
        ui_closeFind->setText(QApplication::translate("SourceFindWidget", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SourceFindWidget: public Ui_SourceFindWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOURCEFINDWIDGET_H
