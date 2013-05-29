/********************************************************************************
** Form generated from reading UI file 'SourceFile.ui'
**
** Created: Wed May 29 16:42:46 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOURCEFILE_H
#define UI_SOURCEFILE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "Qsci/qsciscintilla.h"
#include "source_find_widget.hpp"

QT_BEGIN_NAMESPACE

class Ui_SourceFile
{
public:
    QVBoxLayout *verticalLayout;
    QsciScintilla *ui_editor;
    QVBoxLayout *verticalLayout_2;
    Kiss::Widget::SourceFind *ui_find;

    void setupUi(QWidget *SourceFile)
    {
        if (SourceFile->objectName().isEmpty())
            SourceFile->setObjectName(QString::fromUtf8("SourceFile"));
        SourceFile->resize(1324, 537);
        verticalLayout = new QVBoxLayout(SourceFile);
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ui_editor = new QsciScintilla(SourceFile);
        ui_editor->setObjectName(QString::fromUtf8("ui_editor"));
        verticalLayout_2 = new QVBoxLayout(ui_editor);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

        verticalLayout->addWidget(ui_editor);

        ui_find = new Kiss::Widget::SourceFind(SourceFile);
        ui_find->setObjectName(QString::fromUtf8("ui_find"));

        verticalLayout->addWidget(ui_find);

        verticalLayout->setStretch(0, 1);

        retranslateUi(SourceFile);

        QMetaObject::connectSlotsByName(SourceFile);
    } // setupUi

    void retranslateUi(QWidget *SourceFile)
    {
        SourceFile->setWindowTitle(QApplication::translate("SourceFile", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ui_editor->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ui_editor->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class SourceFile: public Ui_SourceFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOURCEFILE_H
