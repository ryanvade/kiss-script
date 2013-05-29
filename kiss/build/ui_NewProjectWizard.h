/********************************************************************************
** Form generated from reading UI file 'NewProjectWizard.ui'
**
** Created: Wed May 29 16:42:46 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPROJECTWIZARD_H
#define UI_NEWPROJECTWIZARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewProjectWizard
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *ui_projectName;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *ui_saveLocation;
    QPushButton *ui_browse;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewProjectWizard)
    {
        if (NewProjectWizard->objectName().isEmpty())
            NewProjectWizard->setObjectName(QString::fromUtf8("NewProjectWizard"));
        NewProjectWizard->resize(450, 145);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NewProjectWizard->sizePolicy().hasHeightForWidth());
        NewProjectWizard->setSizePolicy(sizePolicy);
        NewProjectWizard->setMinimumSize(QSize(400, 145));
        NewProjectWizard->setMaximumSize(QSize(1000, 145));
        verticalLayout = new QVBoxLayout(NewProjectWizard);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(NewProjectWizard);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(label_3);

        ui_projectName = new QLineEdit(NewProjectWizard);
        ui_projectName->setObjectName(QString::fromUtf8("ui_projectName"));
        ui_projectName->setMinimumSize(QSize(0, 0));

        horizontalLayout_2->addWidget(ui_projectName);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(NewProjectWizard);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(label_2);

        ui_saveLocation = new QLineEdit(NewProjectWizard);
        ui_saveLocation->setObjectName(QString::fromUtf8("ui_saveLocation"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ui_saveLocation->sizePolicy().hasHeightForWidth());
        ui_saveLocation->setSizePolicy(sizePolicy1);
        ui_saveLocation->setMinimumSize(QSize(0, 22));
        ui_saveLocation->setReadOnly(true);

        horizontalLayout->addWidget(ui_saveLocation);

        ui_browse = new QPushButton(NewProjectWizard);
        ui_browse->setObjectName(QString::fromUtf8("ui_browse"));
        ui_browse->setMaximumSize(QSize(16777215, 100));

        horizontalLayout->addWidget(ui_browse);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(NewProjectWizard);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(NewProjectWizard);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewProjectWizard, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewProjectWizard, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewProjectWizard);
    } // setupUi

    void retranslateUi(QDialog *NewProjectWizard)
    {
        NewProjectWizard->setWindowTitle(QApplication::translate("NewProjectWizard", "New Project Wizard", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("NewProjectWizard", "Project Name", 0, QApplication::UnicodeUTF8));
        ui_projectName->setText(QApplication::translate("NewProjectWizard", "Untitled", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("NewProjectWizard", "Save Location", 0, QApplication::UnicodeUTF8));
        ui_browse->setText(QApplication::translate("NewProjectWizard", "Browse...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NewProjectWizard: public Ui_NewProjectWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPROJECTWIZARD_H
