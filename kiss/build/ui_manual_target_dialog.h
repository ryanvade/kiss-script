/********************************************************************************
** Form generated from reading UI file 'manual_target_dialog.ui'
**
** Created: Wed May 29 16:42:46 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANUAL_TARGET_DIALOG_H
#define UI_MANUAL_TARGET_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ManualTargetDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *targetInterface;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *address;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ManualTargetDialog)
    {
        if (ManualTargetDialog->objectName().isEmpty())
            ManualTargetDialog->setObjectName(QString::fromUtf8("ManualTargetDialog"));
        ManualTargetDialog->resize(329, 124);
        ManualTargetDialog->setMinimumSize(QSize(300, 0));
        ManualTargetDialog->setMaximumSize(QSize(500, 124));
        verticalLayout = new QVBoxLayout(ManualTargetDialog);
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(ManualTargetDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(110, 0));

        horizontalLayout->addWidget(label);

        targetInterface = new QComboBox(ManualTargetDialog);
        targetInterface->setObjectName(QString::fromUtf8("targetInterface"));

        horizontalLayout->addWidget(targetInterface);

        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(ManualTargetDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(110, 0));

        horizontalLayout_2->addWidget(label_2);

        address = new QLineEdit(ManualTargetDialog);
        address->setObjectName(QString::fromUtf8("address"));

        horizontalLayout_2->addWidget(address);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ManualTargetDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ManualTargetDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ManualTargetDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ManualTargetDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ManualTargetDialog);
    } // setupUi

    void retranslateUi(QDialog *ManualTargetDialog)
    {
        ManualTargetDialog->setWindowTitle(QApplication::translate("ManualTargetDialog", "Manual Target Selector", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ManualTargetDialog", "Target Interface:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ManualTargetDialog", "Target Address:", 0, QApplication::UnicodeUTF8));
        address->setPlaceholderText(QApplication::translate("ManualTargetDialog", "e.g. 192.168.1.100", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ManualTargetDialog: public Ui_ManualTargetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANUAL_TARGET_DIALOG_H
