/********************************************************************************
** Form generated from reading UI file 'TargetDialog.ui'
**
** Created: Wed May 29 16:42:46 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TARGETDIALOG_H
#define UI_TARGETDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TargetDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout;
    QListView *ui_targets;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QComboBox *ui_interfaces;
    QGroupBox *ui_targetInfo;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *ui_deviceName;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLabel *ui_deviceType;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_9;
    QLabel *ui_version;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLabel *ui_commPort;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLabel *ui_serialNumber;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *ui_interface;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *ui_manual;
    QPushButton *ui_refresh;
    QCheckBox *ui_additionalInfo;
    QDialogButtonBox *ui_buttons;

    void setupUi(QDialog *TargetDialog)
    {
        if (TargetDialog->objectName().isEmpty())
            TargetDialog->setObjectName(QString::fromUtf8("TargetDialog"));
        TargetDialog->resize(632, 377);
        verticalLayout_3 = new QVBoxLayout(TargetDialog);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_4 = new QLabel(TargetDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_3->addWidget(label_4);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ui_targets = new QListView(TargetDialog);
        ui_targets->setObjectName(QString::fromUtf8("ui_targets"));
        ui_targets->setGridSize(QSize(128, 128));
        ui_targets->setViewMode(QListView::IconMode);

        verticalLayout->addWidget(ui_targets);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_6 = new QLabel(TargetDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        ui_interfaces = new QComboBox(TargetDialog);
        ui_interfaces->setObjectName(QString::fromUtf8("ui_interfaces"));

        horizontalLayout->addWidget(ui_interfaces);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_9->addLayout(verticalLayout);

        ui_targetInfo = new QGroupBox(TargetDialog);
        ui_targetInfo->setObjectName(QString::fromUtf8("ui_targetInfo"));
        ui_targetInfo->setMinimumSize(QSize(250, 0));
        ui_targetInfo->setFlat(false);
        verticalLayout_2 = new QVBoxLayout(ui_targetInfo);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(ui_targetInfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        ui_deviceName = new QLabel(ui_targetInfo);
        ui_deviceName->setObjectName(QString::fromUtf8("ui_deviceName"));
        ui_deviceName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(ui_deviceName);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label = new QLabel(ui_targetInfo);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_6->addWidget(label);

        ui_deviceType = new QLabel(ui_targetInfo);
        ui_deviceType->setObjectName(QString::fromUtf8("ui_deviceType"));
        ui_deviceType->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(ui_deviceType);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_9 = new QLabel(ui_targetInfo);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_10->addWidget(label_9);

        ui_version = new QLabel(ui_targetInfo);
        ui_version->setObjectName(QString::fromUtf8("ui_version"));
        ui_version->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(ui_version);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(ui_targetInfo);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        ui_commPort = new QLabel(ui_targetInfo);
        ui_commPort->setObjectName(QString::fromUtf8("ui_commPort"));
        ui_commPort->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(ui_commPort);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_7 = new QLabel(ui_targetInfo);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_5->addWidget(label_7);

        ui_serialNumber = new QLabel(ui_targetInfo);
        ui_serialNumber->setObjectName(QString::fromUtf8("ui_serialNumber"));
        ui_serialNumber->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(ui_serialNumber);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(ui_targetInfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        ui_interface = new QLabel(ui_targetInfo);
        ui_interface->setObjectName(QString::fromUtf8("ui_interface"));
        ui_interface->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(ui_interface);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_9->addWidget(ui_targetInfo);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(8);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        ui_manual = new QPushButton(TargetDialog);
        ui_manual->setObjectName(QString::fromUtf8("ui_manual"));

        horizontalLayout_7->addWidget(ui_manual);

        ui_refresh = new QPushButton(TargetDialog);
        ui_refresh->setObjectName(QString::fromUtf8("ui_refresh"));

        horizontalLayout_7->addWidget(ui_refresh);

        ui_additionalInfo = new QCheckBox(TargetDialog);
        ui_additionalInfo->setObjectName(QString::fromUtf8("ui_additionalInfo"));

        horizontalLayout_7->addWidget(ui_additionalInfo);

        ui_buttons = new QDialogButtonBox(TargetDialog);
        ui_buttons->setObjectName(QString::fromUtf8("ui_buttons"));
        ui_buttons->setOrientation(Qt::Horizontal);
        ui_buttons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_7->addWidget(ui_buttons);


        verticalLayout_3->addLayout(horizontalLayout_7);


        retranslateUi(TargetDialog);
        QObject::connect(ui_buttons, SIGNAL(accepted()), TargetDialog, SLOT(accept()));
        QObject::connect(ui_buttons, SIGNAL(rejected()), TargetDialog, SLOT(reject()));
        QObject::connect(ui_additionalInfo, SIGNAL(toggled(bool)), ui_targetInfo, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(TargetDialog);
    } // setupUi

    void retranslateUi(QDialog *TargetDialog)
    {
        TargetDialog->setWindowTitle(QApplication::translate("TargetDialog", "Target Selection", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("TargetDialog", "Select the target you wish to communicate with:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("TargetDialog", "Show targets communicating over:", 0, QApplication::UnicodeUTF8));
        ui_targetInfo->setTitle(QApplication::translate("TargetDialog", "Target Information", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TargetDialog", "Device Name:", 0, QApplication::UnicodeUTF8));
        ui_deviceName->setText(QApplication::translate("TargetDialog", "Unknown", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TargetDialog", "Device Type:", 0, QApplication::UnicodeUTF8));
        ui_deviceType->setText(QApplication::translate("TargetDialog", "Unknown", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("TargetDialog", "Version:", 0, QApplication::UnicodeUTF8));
        ui_version->setText(QApplication::translate("TargetDialog", "Unknown", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("TargetDialog", "Comm Port:", 0, QApplication::UnicodeUTF8));
        ui_commPort->setText(QApplication::translate("TargetDialog", "Unknown", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("TargetDialog", "Serial Number:", 0, QApplication::UnicodeUTF8));
        ui_serialNumber->setText(QApplication::translate("TargetDialog", "N/A", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("TargetDialog", "Interface:", 0, QApplication::UnicodeUTF8));
        ui_interface->setText(QApplication::translate("TargetDialog", "Unknown", 0, QApplication::UnicodeUTF8));
        ui_manual->setText(QApplication::translate("TargetDialog", "Manual...", 0, QApplication::UnicodeUTF8));
        ui_refresh->setText(QApplication::translate("TargetDialog", "Refresh", 0, QApplication::UnicodeUTF8));
        ui_additionalInfo->setText(QApplication::translate("TargetDialog", "Show Additional Information", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TargetDialog: public Ui_TargetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TARGETDIALOG_H
