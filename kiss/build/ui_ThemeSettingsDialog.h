/********************************************************************************
** Form generated from reading UI file 'ThemeSettingsDialog.ui'
**
** Created: Wed May 29 12:25:34 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEMESETTINGSDIALOG_H
#define UI_THEMESETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFontComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include "color_box.hpp"

QT_BEGIN_NAMESPACE

class Ui_ThemeSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTableWidget *table;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    ColorBox *backgroundColorBox;
    QLabel *label_2;
    QFontComboBox *fontBox;
    QLabel *label_3;
    QSpinBox *fontSizeBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *reset;
    QDialogButtonBox *ui_buttonBox;

    void setupUi(QDialog *ThemeSettingsDialog)
    {
        if (ThemeSettingsDialog->objectName().isEmpty())
            ThemeSettingsDialog->setObjectName(QString::fromUtf8("ThemeSettingsDialog"));
        ThemeSettingsDialog->resize(661, 358);
        verticalLayout = new QVBoxLayout(ThemeSettingsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        table = new QTableWidget(ThemeSettingsDialog);
        if (table->columnCount() < 2)
            table->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (table->rowCount() < 11)
            table->setRowCount(11);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table->setItem(0, 0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table->setItem(1, 0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table->setItem(1, 1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table->setItem(2, 0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table->setItem(2, 1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        table->setItem(3, 0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        table->setItem(3, 1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        table->setItem(4, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        table->setItem(4, 1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        table->setItem(5, 0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        table->setItem(5, 1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        table->setItem(6, 0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        table->setItem(6, 1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        table->setItem(7, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        table->setItem(7, 1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        table->setItem(8, 0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        table->setItem(8, 1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        table->setItem(9, 0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        table->setItem(10, 0, __qtablewidgetitem20);
        table->setObjectName(QString::fromUtf8("table"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(table->sizePolicy().hasHeightForWidth());
        table->setSizePolicy(sizePolicy);
        table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table->setSelectionBehavior(QAbstractItemView::SelectRows);
        table->setShowGrid(false);
        table->setRowCount(11);
        table->horizontalHeader()->setStretchLastSection(true);
        table->verticalHeader()->setVisible(false);

        horizontalLayout->addWidget(table);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label = new QLabel(ThemeSettingsDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        backgroundColorBox = new ColorBox(ThemeSettingsDialog);
        backgroundColorBox->setObjectName(QString::fromUtf8("backgroundColorBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, backgroundColorBox);

        label_2 = new QLabel(ThemeSettingsDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        fontBox = new QFontComboBox(ThemeSettingsDialog);
        fontBox->setObjectName(QString::fromUtf8("fontBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, fontBox);

        label_3 = new QLabel(ThemeSettingsDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        fontSizeBox = new QSpinBox(ThemeSettingsDialog);
        fontSizeBox->setObjectName(QString::fromUtf8("fontSizeBox"));
        fontSizeBox->setMinimum(1);
        fontSizeBox->setMaximum(26);

        formLayout->setWidget(2, QFormLayout::FieldRole, fontSizeBox);


        verticalLayout_2->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        reset = new QPushButton(ThemeSettingsDialog);
        reset->setObjectName(QString::fromUtf8("reset"));

        horizontalLayout_2->addWidget(reset);

        ui_buttonBox = new QDialogButtonBox(ThemeSettingsDialog);
        ui_buttonBox->setObjectName(QString::fromUtf8("ui_buttonBox"));
        ui_buttonBox->setOrientation(Qt::Horizontal);
        ui_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(ui_buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ThemeSettingsDialog);
        QObject::connect(ui_buttonBox, SIGNAL(accepted()), ThemeSettingsDialog, SLOT(accept()));
        QObject::connect(ui_buttonBox, SIGNAL(rejected()), ThemeSettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ThemeSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *ThemeSettingsDialog)
    {
        ThemeSettingsDialog->setWindowTitle(QApplication::translate("ThemeSettingsDialog", "Theme Settings", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ThemeSettingsDialog", "Setting", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ThemeSettingsDialog", "Color", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = table->isSortingEnabled();
        table->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem2 = table->item(0, 0);
        ___qtablewidgetitem2->setText(QApplication::translate("ThemeSettingsDialog", "Default", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = table->item(1, 0);
        ___qtablewidgetitem3->setText(QApplication::translate("ThemeSettingsDialog", "Comments", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = table->item(2, 0);
        ___qtablewidgetitem4->setText(QApplication::translate("ThemeSettingsDialog", "Doc Comments", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = table->item(3, 0);
        ___qtablewidgetitem5->setText(QApplication::translate("ThemeSettingsDialog", "Numbers", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = table->item(4, 0);
        ___qtablewidgetitem6->setText(QApplication::translate("ThemeSettingsDialog", "Keywords", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = table->item(5, 0);
        ___qtablewidgetitem7->setText(QApplication::translate("ThemeSettingsDialog", "Strings", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = table->item(6, 0);
        ___qtablewidgetitem8->setText(QApplication::translate("ThemeSettingsDialog", "Preprocessors", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = table->item(7, 0);
        ___qtablewidgetitem9->setText(QApplication::translate("ThemeSettingsDialog", "Operators", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = table->item(8, 0);
        ___qtablewidgetitem10->setText(QApplication::translate("ThemeSettingsDialog", "Unclosed Strings", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = table->item(9, 0);
        ___qtablewidgetitem11->setText(QApplication::translate("ThemeSettingsDialog", "Doc Keywords", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = table->item(10, 0);
        ___qtablewidgetitem12->setText(QApplication::translate("ThemeSettingsDialog", "Doc Numbers", 0, QApplication::UnicodeUTF8));
        table->setSortingEnabled(__sortingEnabled);

        label->setText(QApplication::translate("ThemeSettingsDialog", "Background Color:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ThemeSettingsDialog", "Font:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ThemeSettingsDialog", "Font Size:", 0, QApplication::UnicodeUTF8));
        reset->setText(QApplication::translate("ThemeSettingsDialog", "Reset Defaults", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ThemeSettingsDialog: public Ui_ThemeSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEMESETTINGSDIALOG_H
