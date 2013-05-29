/********************************************************************************
** Form generated from reading UI file 'template_tab.ui'
**
** Created: Wed May 29 16:42:46 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMPLATE_TAB_H
#define UI_TEMPLATE_TAB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TemplateTab
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QTreeView *packTree;
    QVBoxLayout *verticalLayout_3;
    QLabel *file;
    QFrame *line;
    QLabel *descriptionLabel;
    QTextEdit *description;
    QHBoxLayout *horizontalLayout;
    QPushButton *addFile;
    QPushButton *deleteSelection;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;

    void setupUi(QWidget *TemplateTab)
    {
        if (TemplateTab->objectName().isEmpty())
            TemplateTab->setObjectName(QString::fromUtf8("TemplateTab"));
        TemplateTab->resize(928, 541);
        verticalLayout = new QVBoxLayout(TemplateTab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_4 = new QLabel(TemplateTab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        packTree = new QTreeView(TemplateTab);
        packTree->setObjectName(QString::fromUtf8("packTree"));
        packTree->setRootIsDecorated(false);
        packTree->setItemsExpandable(false);
        packTree->setExpandsOnDoubleClick(false);
        packTree->header()->setVisible(false);

        verticalLayout_2->addWidget(packTree);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        file = new QLabel(TemplateTab);
        file->setObjectName(QString::fromUtf8("file"));

        verticalLayout_3->addWidget(file);

        line = new QFrame(TemplateTab);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        descriptionLabel = new QLabel(TemplateTab);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));

        verticalLayout_3->addWidget(descriptionLabel);

        description = new QTextEdit(TemplateTab);
        description->setObjectName(QString::fromUtf8("description"));

        verticalLayout_3->addWidget(description);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalLayout_2->setStretch(0, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addFile = new QPushButton(TemplateTab);
        addFile->setObjectName(QString::fromUtf8("addFile"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/sourcefile/icon_set/icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addFile->setIcon(icon);

        horizontalLayout->addWidget(addFile);

        deleteSelection = new QPushButton(TemplateTab);
        deleteSelection->setObjectName(QString::fromUtf8("deleteSelection"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/sourcefile/icon_set/icons/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteSelection->setIcon(icon1);

        horizontalLayout->addWidget(deleteSelection);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_3 = new QPushButton(TemplateTab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon_set/icons/eye.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TemplateTab);

        QMetaObject::connectSlotsByName(TemplateTab);
    } // setupUi

    void retranslateUi(QWidget *TemplateTab)
    {
        TemplateTab->setWindowTitle(QApplication::translate("TemplateTab", "Form", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("TemplateTab", "Package Layout:", 0, QApplication::UnicodeUTF8));
        file->setText(QApplication::translate("TemplateTab", "File Name:", 0, QApplication::UnicodeUTF8));
        descriptionLabel->setText(QApplication::translate("TemplateTab", "Description:", 0, QApplication::UnicodeUTF8));
        addFile->setText(QApplication::translate("TemplateTab", "Add File", 0, QApplication::UnicodeUTF8));
        deleteSelection->setText(QApplication::translate("TemplateTab", "Delete Selection", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("TemplateTab", "Test", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TemplateTab: public Ui_TemplateTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPLATE_TAB_H
