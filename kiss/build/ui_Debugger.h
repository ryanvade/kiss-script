/********************************************************************************
** Form generated from reading UI file 'Debugger.ui'
**
** Created: Wed May 29 12:25:34 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGGER_H
#define UI_DEBUGGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Debugger
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QFrame *frame;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *ui_run;
    QPushButton *ui_step;
    QPushButton *ui_pause;
    QPushButton *ui_stop;
    QSpacerItem *horizontalSpacer;
    QPushButton *ui_clear;
    QPushButton *ui_close;
    QTextEdit *ui_consoleOut;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *ui_consoleIn;
    QPushButton *ui_consoleEnter;
    QSplitter *splitter_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QListWidget *ui_variables;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QListWidget *ui_stack;

    void setupUi(QWidget *Debugger)
    {
        if (Debugger->objectName().isEmpty())
            Debugger->setObjectName(QString::fromUtf8("Debugger"));
        Debugger->resize(882, 624);
        verticalLayout_3 = new QVBoxLayout(Debugger);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        splitter = new QSplitter(Debugger);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        frame = new QFrame(splitter);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(0);
        verticalLayout_5 = new QVBoxLayout(frame);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout->setContentsMargins(0, 0, -1, -1);
        ui_run = new QPushButton(frame);
        ui_run->setObjectName(QString::fromUtf8("ui_run"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ui_run->sizePolicy().hasHeightForWidth());
        ui_run->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/debugger/icon_set/icons/control_play.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_run->setIcon(icon);
        ui_run->setFlat(false);

        horizontalLayout->addWidget(ui_run);

        ui_step = new QPushButton(frame);
        ui_step->setObjectName(QString::fromUtf8("ui_step"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/debugger/icon_set/icons/control_end.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_step->setIcon(icon1);

        horizontalLayout->addWidget(ui_step);

        ui_pause = new QPushButton(frame);
        ui_pause->setObjectName(QString::fromUtf8("ui_pause"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/debugger/icon_set/icons/control_pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_pause->setIcon(icon2);

        horizontalLayout->addWidget(ui_pause);

        ui_stop = new QPushButton(frame);
        ui_stop->setObjectName(QString::fromUtf8("ui_stop"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/debugger/icon_set/icons/control_stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_stop->setIcon(icon3);

        horizontalLayout->addWidget(ui_stop);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ui_clear = new QPushButton(frame);
        ui_clear->setObjectName(QString::fromUtf8("ui_clear"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/shortcuts/file/icon_set/icons/page_white.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_clear->setIcon(icon4);

        horizontalLayout->addWidget(ui_clear);

        ui_close = new QPushButton(frame);
        ui_close->setObjectName(QString::fromUtf8("ui_close"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/shortcuts/file/icon_set/icons/cross.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_close->setIcon(icon5);

        horizontalLayout->addWidget(ui_close);


        verticalLayout_5->addLayout(horizontalLayout);

        ui_consoleOut = new QTextEdit(frame);
        ui_consoleOut->setObjectName(QString::fromUtf8("ui_consoleOut"));
        ui_consoleOut->setReadOnly(true);

        verticalLayout_5->addWidget(ui_consoleOut);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        ui_consoleIn = new QLineEdit(frame);
        ui_consoleIn->setObjectName(QString::fromUtf8("ui_consoleIn"));

        horizontalLayout_2->addWidget(ui_consoleIn);

        ui_consoleEnter = new QPushButton(frame);
        ui_consoleEnter->setObjectName(QString::fromUtf8("ui_consoleEnter"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/shortcuts/target/icon_set/icons/bullet_go.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_consoleEnter->setIcon(icon6);

        horizontalLayout_2->addWidget(ui_consoleEnter);


        verticalLayout_5->addLayout(horizontalLayout_2);

        splitter->addWidget(frame);

        verticalLayout_3->addWidget(splitter);

        splitter_2 = new QSplitter(Debugger);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        groupBox_2 = new QGroupBox(splitter_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        ui_variables = new QListWidget(groupBox_2);
        ui_variables->setObjectName(QString::fromUtf8("ui_variables"));

        verticalLayout_2->addWidget(ui_variables);

        splitter_2->addWidget(groupBox_2);
        groupBox = new QGroupBox(splitter_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ui_stack = new QListWidget(groupBox);
        ui_stack->setObjectName(QString::fromUtf8("ui_stack"));

        verticalLayout->addWidget(ui_stack);

        splitter_2->addWidget(groupBox);

        verticalLayout_3->addWidget(splitter_2);


        retranslateUi(Debugger);
        QObject::connect(ui_consoleIn, SIGNAL(returnPressed()), ui_consoleEnter, SLOT(click()));
        QObject::connect(ui_clear, SIGNAL(clicked()), ui_consoleOut, SLOT(clear()));
        QObject::connect(ui_close, SIGNAL(clicked()), Debugger, SLOT(close()));

        QMetaObject::connectSlotsByName(Debugger);
    } // setupUi

    void retranslateUi(QWidget *Debugger)
    {
        Debugger->setWindowTitle(QApplication::translate("Debugger", "Debugger", 0, QApplication::UnicodeUTF8));
        ui_run->setText(QApplication::translate("Debugger", "Run", 0, QApplication::UnicodeUTF8));
        ui_step->setText(QApplication::translate("Debugger", "Step", 0, QApplication::UnicodeUTF8));
        ui_pause->setText(QApplication::translate("Debugger", "Pause", 0, QApplication::UnicodeUTF8));
        ui_stop->setText(QApplication::translate("Debugger", "Stop", 0, QApplication::UnicodeUTF8));
        ui_clear->setText(QApplication::translate("Debugger", "Clear", 0, QApplication::UnicodeUTF8));
        ui_close->setText(QApplication::translate("Debugger", "Close", 0, QApplication::UnicodeUTF8));
        ui_consoleEnter->setText(QApplication::translate("Debugger", "Enter", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Debugger", "Variables", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Debugger", "Stack", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Debugger: public Ui_Debugger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGGER_H
