/********************************************************************************
** Form generated from reading UI file 'SourceDialog.ui'
**
** Created: Wed May 29 12:25:34 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOURCEDIALOG_H
#define UI_SOURCEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SourceDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *ui_source;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SourceDialog)
    {
        if (SourceDialog->objectName().isEmpty())
            SourceDialog->setObjectName(QString::fromUtf8("SourceDialog"));
        SourceDialog->resize(398, 96);
        verticalLayout = new QVBoxLayout(SourceDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ui_source = new QLineEdit(SourceDialog);
        ui_source->setObjectName(QString::fromUtf8("ui_source"));

        verticalLayout->addWidget(ui_source);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SourceDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SourceDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SourceDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SourceDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SourceDialog);
    } // setupUi

    void retranslateUi(QDialog *SourceDialog)
    {
        SourceDialog->setWindowTitle(QApplication::translate("SourceDialog", "Source", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SourceDialog: public Ui_SourceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOURCEDIALOG_H
