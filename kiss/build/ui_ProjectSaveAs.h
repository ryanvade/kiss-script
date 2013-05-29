/********************************************************************************
** Form generated from reading UI file 'ProjectSaveAs.ui'
**
** Created: Wed May 29 16:42:46 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTSAVEAS_H
#define UI_PROJECTSAVEAS_H

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
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ProjectSaveAs
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *ui_savinginto;
    QTreeView *ui_projects;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *ui_filename;
    QLabel *ui_error;
    QDialogButtonBox *ui_buttons;

    void setupUi(QDialog *ProjectSaveAs)
    {
        if (ProjectSaveAs->objectName().isEmpty())
            ProjectSaveAs->setObjectName(QString::fromUtf8("ProjectSaveAs"));
        ProjectSaveAs->resize(409, 477);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ProjectSaveAs->sizePolicy().hasHeightForWidth());
        ProjectSaveAs->setSizePolicy(sizePolicy);
        ProjectSaveAs->setSizeGripEnabled(false);
        ProjectSaveAs->setModal(false);
        verticalLayout = new QVBoxLayout(ProjectSaveAs);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ui_savinginto = new QLabel(ProjectSaveAs);
        ui_savinginto->setObjectName(QString::fromUtf8("ui_savinginto"));

        verticalLayout->addWidget(ui_savinginto);

        ui_projects = new QTreeView(ProjectSaveAs);
        ui_projects->setObjectName(QString::fromUtf8("ui_projects"));
        ui_projects->setRootIsDecorated(true);
        ui_projects->setItemsExpandable(true);
        ui_projects->header()->setVisible(false);

        verticalLayout->addWidget(ui_projects);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton = new QPushButton(ProjectSaveAs);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(20, 25));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/sourcefile/icon_set/icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setFlat(true);

        horizontalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(ProjectSaveAs);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(20, 25));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/sourcefile/icon_set/icons/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setFlat(true);

        horizontalLayout_4->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_4);

        line = new QFrame(ProjectSaveAs);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(ProjectSaveAs);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(label_2);

        ui_filename = new QLineEdit(ProjectSaveAs);
        ui_filename->setObjectName(QString::fromUtf8("ui_filename"));
        ui_filename->setMinimumSize(QSize(250, 0));
        ui_filename->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(ui_filename);


        verticalLayout->addLayout(horizontalLayout);

        ui_error = new QLabel(ProjectSaveAs);
        ui_error->setObjectName(QString::fromUtf8("ui_error"));
        ui_error->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        ui_error->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(ui_error);

        ui_buttons = new QDialogButtonBox(ProjectSaveAs);
        ui_buttons->setObjectName(QString::fromUtf8("ui_buttons"));
        ui_buttons->setOrientation(Qt::Horizontal);
        ui_buttons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Save);

        verticalLayout->addWidget(ui_buttons);


        retranslateUi(ProjectSaveAs);
        QObject::connect(ui_buttons, SIGNAL(accepted()), ProjectSaveAs, SLOT(accept()));
        QObject::connect(ui_buttons, SIGNAL(rejected()), ProjectSaveAs, SLOT(reject()));

        QMetaObject::connectSlotsByName(ProjectSaveAs);
    } // setupUi

    void retranslateUi(QDialog *ProjectSaveAs)
    {
        ProjectSaveAs->setWindowTitle(QApplication::translate("ProjectSaveAs", "Save As", 0, QApplication::UnicodeUTF8));
        ui_savinginto->setText(QApplication::translate("ProjectSaveAs", "Saving into project", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        label_2->setText(QApplication::translate("ProjectSaveAs", "File Name", 0, QApplication::UnicodeUTF8));
        ui_error->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ProjectSaveAs: public Ui_ProjectSaveAs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTSAVEAS_H
