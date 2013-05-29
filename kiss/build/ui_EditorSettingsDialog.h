/********************************************************************************
** Form generated from reading UI file 'EditorSettingsDialog.ui'
**
** Created: Wed May 29 12:25:34 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORSETTINGSDIALOG_H
#define UI_EDITORSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditorSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGroupBox *ui_autoCompletionGroup;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QCheckBox *ui_autoCompletionEnabledCheckBox;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout1;
    QLabel *label_3;
    QVBoxLayout *vboxLayout1;
    QCheckBox *ui_autoCompletionAPISourceCheckBox;
    QCheckBox *ui_autoCompletionDocumentSourceCheckBox;
    QHBoxLayout *hboxLayout2;
    QLabel *label_4;
    QSpinBox *ui_autoCompletionThresholdSpinBox;
    QGroupBox *ui_autoIndentGroup;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem2;
    QCheckBox *ui_autoIndentEnabledCheckBox;
    QSpacerItem *spacerItem3;
    QHBoxLayout *hboxLayout4;
    QLabel *label_5;
    QVBoxLayout *vboxLayout3;
    QRadioButton *ui_autoIndentIntelligentStyleRadioButton;
    QRadioButton *ui_autoIndentMaintainStyleRadioButton;
    QHBoxLayout *hboxLayout5;
    QLabel *label_6;
    QSpinBox *ui_autoIndentWidthSpinBox;
    QGroupBox *ui_miscGroup;
    QVBoxLayout *vboxLayout4;
    QCheckBox *ui_callTipsCheckBox;
    QCheckBox *ui_braceMatchingCheckBox;
    QCheckBox *ui_marginLineNumbersCheckBox;
    QSpacerItem *spacerItem4;
    QDialogButtonBox *ui_buttonBox;

    void setupUi(QDialog *EditorSettingsDialog)
    {
        if (EditorSettingsDialog->objectName().isEmpty())
            EditorSettingsDialog->setObjectName(QString::fromUtf8("EditorSettingsDialog"));
        EditorSettingsDialog->resize(648, 230);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EditorSettingsDialog->sizePolicy().hasHeightForWidth());
        EditorSettingsDialog->setSizePolicy(sizePolicy);
        EditorSettingsDialog->setMinimumSize(QSize(648, 230));
        EditorSettingsDialog->setMaximumSize(QSize(648, 230));
        verticalLayout = new QVBoxLayout(EditorSettingsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ui_autoCompletionGroup = new QGroupBox(EditorSettingsDialog);
        ui_autoCompletionGroup->setObjectName(QString::fromUtf8("ui_autoCompletionGroup"));
        vboxLayout = new QVBoxLayout(ui_autoCompletionGroup);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        ui_autoCompletionEnabledCheckBox = new QCheckBox(ui_autoCompletionGroup);
        ui_autoCompletionEnabledCheckBox->setObjectName(QString::fromUtf8("ui_autoCompletionEnabledCheckBox"));

        hboxLayout->addWidget(ui_autoCompletionEnabledCheckBox);

        spacerItem1 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_3 = new QLabel(ui_autoCompletionGroup);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(66, 0));

        hboxLayout1->addWidget(label_3);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        ui_autoCompletionAPISourceCheckBox = new QCheckBox(ui_autoCompletionGroup);
        ui_autoCompletionAPISourceCheckBox->setObjectName(QString::fromUtf8("ui_autoCompletionAPISourceCheckBox"));
        ui_autoCompletionAPISourceCheckBox->setEnabled(false);

        vboxLayout1->addWidget(ui_autoCompletionAPISourceCheckBox);

        ui_autoCompletionDocumentSourceCheckBox = new QCheckBox(ui_autoCompletionGroup);
        ui_autoCompletionDocumentSourceCheckBox->setObjectName(QString::fromUtf8("ui_autoCompletionDocumentSourceCheckBox"));
        ui_autoCompletionDocumentSourceCheckBox->setEnabled(false);

        vboxLayout1->addWidget(ui_autoCompletionDocumentSourceCheckBox);


        hboxLayout1->addLayout(vboxLayout1);


        vboxLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        label_4 = new QLabel(ui_autoCompletionGroup);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setEnabled(true);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        hboxLayout2->addWidget(label_4);

        ui_autoCompletionThresholdSpinBox = new QSpinBox(ui_autoCompletionGroup);
        ui_autoCompletionThresholdSpinBox->setObjectName(QString::fromUtf8("ui_autoCompletionThresholdSpinBox"));
        ui_autoCompletionThresholdSpinBox->setEnabled(false);
        ui_autoCompletionThresholdSpinBox->setMinimum(1);
        ui_autoCompletionThresholdSpinBox->setMaximum(20);

        hboxLayout2->addWidget(ui_autoCompletionThresholdSpinBox);


        vboxLayout->addLayout(hboxLayout2);


        horizontalLayout->addWidget(ui_autoCompletionGroup);

        ui_autoIndentGroup = new QGroupBox(EditorSettingsDialog);
        ui_autoIndentGroup->setObjectName(QString::fromUtf8("ui_autoIndentGroup"));
        vboxLayout2 = new QVBoxLayout(ui_autoIndentGroup);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem2);

        ui_autoIndentEnabledCheckBox = new QCheckBox(ui_autoIndentGroup);
        ui_autoIndentEnabledCheckBox->setObjectName(QString::fromUtf8("ui_autoIndentEnabledCheckBox"));

        hboxLayout3->addWidget(ui_autoIndentEnabledCheckBox);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem3);


        vboxLayout2->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        label_5 = new QLabel(ui_autoIndentGroup);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(83, 0));

        hboxLayout4->addWidget(label_5);

        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        ui_autoIndentIntelligentStyleRadioButton = new QRadioButton(ui_autoIndentGroup);
        ui_autoIndentIntelligentStyleRadioButton->setObjectName(QString::fromUtf8("ui_autoIndentIntelligentStyleRadioButton"));
        ui_autoIndentIntelligentStyleRadioButton->setEnabled(false);

        vboxLayout3->addWidget(ui_autoIndentIntelligentStyleRadioButton);

        ui_autoIndentMaintainStyleRadioButton = new QRadioButton(ui_autoIndentGroup);
        ui_autoIndentMaintainStyleRadioButton->setObjectName(QString::fromUtf8("ui_autoIndentMaintainStyleRadioButton"));
        ui_autoIndentMaintainStyleRadioButton->setEnabled(false);

        vboxLayout3->addWidget(ui_autoIndentMaintainStyleRadioButton);


        hboxLayout4->addLayout(vboxLayout3);


        vboxLayout2->addLayout(hboxLayout4);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        label_6 = new QLabel(ui_autoIndentGroup);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        hboxLayout5->addWidget(label_6);

        ui_autoIndentWidthSpinBox = new QSpinBox(ui_autoIndentGroup);
        ui_autoIndentWidthSpinBox->setObjectName(QString::fromUtf8("ui_autoIndentWidthSpinBox"));
        ui_autoIndentWidthSpinBox->setEnabled(false);
        ui_autoIndentWidthSpinBox->setMinimum(1);
        ui_autoIndentWidthSpinBox->setMaximum(20);

        hboxLayout5->addWidget(ui_autoIndentWidthSpinBox);


        vboxLayout2->addLayout(hboxLayout5);


        horizontalLayout->addWidget(ui_autoIndentGroup);

        ui_miscGroup = new QGroupBox(EditorSettingsDialog);
        ui_miscGroup->setObjectName(QString::fromUtf8("ui_miscGroup"));
        vboxLayout4 = new QVBoxLayout(ui_miscGroup);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        ui_callTipsCheckBox = new QCheckBox(ui_miscGroup);
        ui_callTipsCheckBox->setObjectName(QString::fromUtf8("ui_callTipsCheckBox"));

        vboxLayout4->addWidget(ui_callTipsCheckBox);

        ui_braceMatchingCheckBox = new QCheckBox(ui_miscGroup);
        ui_braceMatchingCheckBox->setObjectName(QString::fromUtf8("ui_braceMatchingCheckBox"));

        vboxLayout4->addWidget(ui_braceMatchingCheckBox);

        ui_marginLineNumbersCheckBox = new QCheckBox(ui_miscGroup);
        ui_marginLineNumbersCheckBox->setObjectName(QString::fromUtf8("ui_marginLineNumbersCheckBox"));

        vboxLayout4->addWidget(ui_marginLineNumbersCheckBox);

        spacerItem4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout4->addItem(spacerItem4);


        horizontalLayout->addWidget(ui_miscGroup);


        verticalLayout->addLayout(horizontalLayout);

        ui_buttonBox = new QDialogButtonBox(EditorSettingsDialog);
        ui_buttonBox->setObjectName(QString::fromUtf8("ui_buttonBox"));
        ui_buttonBox->setOrientation(Qt::Horizontal);
        ui_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        verticalLayout->addWidget(ui_buttonBox);


        retranslateUi(EditorSettingsDialog);
        QObject::connect(ui_buttonBox, SIGNAL(accepted()), EditorSettingsDialog, SLOT(accept()));
        QObject::connect(ui_buttonBox, SIGNAL(rejected()), EditorSettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditorSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *EditorSettingsDialog)
    {
        EditorSettingsDialog->setWindowTitle(QApplication::translate("EditorSettingsDialog", "Settings", 0, QApplication::UnicodeUTF8));
        ui_autoCompletionGroup->setTitle(QApplication::translate("EditorSettingsDialog", "Auto Completion", 0, QApplication::UnicodeUTF8));
        ui_autoCompletionEnabledCheckBox->setText(QApplication::translate("EditorSettingsDialog", "Enabled", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("EditorSettingsDialog", "Source:", 0, QApplication::UnicodeUTF8));
        ui_autoCompletionAPISourceCheckBox->setText(QApplication::translate("EditorSettingsDialog", "API", 0, QApplication::UnicodeUTF8));
        ui_autoCompletionDocumentSourceCheckBox->setText(QApplication::translate("EditorSettingsDialog", "Document", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("EditorSettingsDialog", "Threshold:", 0, QApplication::UnicodeUTF8));
        ui_autoIndentGroup->setTitle(QApplication::translate("EditorSettingsDialog", "Auto Indent", 0, QApplication::UnicodeUTF8));
        ui_autoIndentEnabledCheckBox->setText(QApplication::translate("EditorSettingsDialog", "Enabled", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("EditorSettingsDialog", "Style:", 0, QApplication::UnicodeUTF8));
        ui_autoIndentIntelligentStyleRadioButton->setText(QApplication::translate("EditorSettingsDialog", "Intelligent", 0, QApplication::UnicodeUTF8));
        ui_autoIndentMaintainStyleRadioButton->setText(QApplication::translate("EditorSettingsDialog", "Maintain", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("EditorSettingsDialog", "Indent Width:", 0, QApplication::UnicodeUTF8));
        ui_miscGroup->setTitle(QApplication::translate("EditorSettingsDialog", "Misc", 0, QApplication::UnicodeUTF8));
        ui_callTipsCheckBox->setText(QApplication::translate("EditorSettingsDialog", "Call Tips", 0, QApplication::UnicodeUTF8));
        ui_braceMatchingCheckBox->setText(QApplication::translate("EditorSettingsDialog", "Brace Matching", 0, QApplication::UnicodeUTF8));
        ui_marginLineNumbersCheckBox->setText(QApplication::translate("EditorSettingsDialog", "Margin Line Numbers", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditorSettingsDialog: public Ui_EditorSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORSETTINGSDIALOG_H
