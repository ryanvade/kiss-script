/********************************************************************************
** Form generated from reading UI file 'save_as_dialog.ui'
**
** Created: Wed May 29 16:42:46 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVE_AS_DIALOG_H
#define UI_SAVE_AS_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SaveAsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLineEdit *file;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QFrame *line;
    QTreeView *tree;
    QHBoxLayout *horizontalLayout_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SaveAsDialog)
    {
        if (SaveAsDialog->objectName().isEmpty())
            SaveAsDialog->setObjectName(QString::fromUtf8("SaveAsDialog"));
        SaveAsDialog->resize(684, 430);
        verticalLayout_2 = new QVBoxLayout(SaveAsDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(SaveAsDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        file = new QLineEdit(SaveAsDialog);
        file->setObjectName(QString::fromUtf8("file"));
        file->setMinimumSize(QSize(300, 0));

        horizontalLayout->addWidget(file);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_2 = new QLabel(SaveAsDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/shortcuts/file/icon_set/icons/disk.png")));

        horizontalLayout->addWidget(label_2);


        verticalLayout_2->addLayout(horizontalLayout);

        widget = new QWidget(SaveAsDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShadow(QFrame::Sunken);
        line->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line);

        tree = new QTreeView(widget);
        tree->setObjectName(QString::fromUtf8("tree"));
        tree->header()->setCascadingSectionResizes(true);
        tree->header()->setDefaultSectionSize(100);
        tree->header()->setStretchLastSection(false);

        verticalLayout->addWidget(tree);


        verticalLayout_2->addWidget(widget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        buttonBox = new QDialogButtonBox(SaveAsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(SaveAsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SaveAsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SaveAsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SaveAsDialog);
    } // setupUi

    void retranslateUi(QDialog *SaveAsDialog)
    {
        SaveAsDialog->setWindowTitle(QApplication::translate("SaveAsDialog", "Save File", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SaveAsDialog", "Save As:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SaveAsDialog: public Ui_SaveAsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVE_AS_DIALOG_H
