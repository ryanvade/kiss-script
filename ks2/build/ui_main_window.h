/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created: Wed May 29 16:46:51 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "console_widget.hpp"
#include "scaling_graphics_view.hpp"
#include "touch_dial.hpp"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionQuit;
    QAction *actionStart;
    QAction *actionStop;
    QAction *actionReset;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    ScalingGraphicsView *sim;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    ConsoleWidget *console;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *a;
    QPushButton *b;
    QPushButton *c;
    QWidget *extras;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *x;
    QPushButton *y;
    QPushButton *z;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_2;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label;
    QLabel *analog0;
    QLabel *label_17;
    QLabel *label_3;
    QLabel *analog1;
    QLabel *label_18;
    QLabel *label_5;
    QLabel *analog2;
    QLabel *label_19;
    QLabel *label_6;
    QLabel *analog3;
    QLabel *label_23;
    QLabel *label_7;
    QLabel *analog4;
    QLabel *label_2;
    QLabel *label_8;
    QLabel *analog5;
    QLabel *label_4;
    QLabel *label_9;
    QLabel *analog6;
    QLabel *label_11;
    QLabel *label_10;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *digital0;
    QLabel *label_43;
    QLabel *label_28;
    QLabel *digital1;
    QLabel *label_44;
    QLabel *label_12;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_5;
    TouchDial *motor0;
    TouchDial *motor1;
    TouchDial *motor2;
    TouchDial *motor3;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_6;
    TouchDial *servo0;
    TouchDial *servo1;
    TouchDial *servo2;
    TouchDial *servo3;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QMenu *menuSimulation;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1204, 792);
        MainWindow->setMinimumSize(QSize(400, 300));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/information.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon1);
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName(QString::fromUtf8("actionStart"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/arrow_right.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStart->setIcon(icon2);
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon3);
        actionReset = new QAction(MainWindow);
        actionReset->setObjectName(QString::fromUtf8("actionReset"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/arrow_refresh_small.png"), QSize(), QIcon::Normal, QIcon::On);
        actionReset->setIcon(icon4);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        sim = new ScalingGraphicsView(centralwidget);
        sim->setObjectName(QString::fromUtf8("sim"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 0));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(212, 208, 200, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        sim->setPalette(palette);
        sim->setRenderHints(QPainter::Antialiasing|QPainter::HighQualityAntialiasing|QPainter::TextAntialiasing);

        horizontalLayout->addWidget(sim);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMinimumSize(QSize(365, 0));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setLineWidth(0);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 365, 742));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_5 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setFlat(true);
        verticalLayout_2 = new QVBoxLayout(groupBox_5);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 2, 2, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        console = new ConsoleWidget(groupBox_5);
        console->setObjectName(QString::fromUtf8("console"));
        console->setMinimumSize(QSize(308, 166));
        console->setMaximumSize(QSize(308, 166));
        console->setUndoRedoEnabled(false);
        console->setReadOnly(true);

        horizontalLayout_3->addWidget(console);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        a = new QPushButton(groupBox_5);
        a->setObjectName(QString::fromUtf8("a"));

        horizontalLayout_2->addWidget(a);

        b = new QPushButton(groupBox_5);
        b->setObjectName(QString::fromUtf8("b"));

        horizontalLayout_2->addWidget(b);

        c = new QPushButton(groupBox_5);
        c->setObjectName(QString::fromUtf8("c"));

        horizontalLayout_2->addWidget(c);


        verticalLayout_2->addLayout(horizontalLayout_2);

        extras = new QWidget(groupBox_5);
        extras->setObjectName(QString::fromUtf8("extras"));
        horizontalLayout_4 = new QHBoxLayout(extras);
        horizontalLayout_4->setSpacing(3);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        x = new QPushButton(extras);
        x->setObjectName(QString::fromUtf8("x"));

        horizontalLayout_4->addWidget(x);

        y = new QPushButton(extras);
        y->setObjectName(QString::fromUtf8("y"));

        horizontalLayout_4->addWidget(y);

        z = new QPushButton(extras);
        z->setObjectName(QString::fromUtf8("z"));

        horizontalLayout_4->addWidget(z);


        verticalLayout_2->addWidget(extras);


        verticalLayout->addWidget(groupBox_5);

        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFlat(true);
        groupBox_3->setCheckable(false);
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setSpacing(2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(2, 2, 2, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(1);
        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_20->setFont(font);
        label_20->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_20, 0, 0, 1, 1);

        label_21 = new QLabel(groupBox_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font);
        label_21->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_21, 0, 1, 1, 1);

        label_22 = new QLabel(groupBox_3);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font);
        label_22->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_22, 0, 2, 1, 1);

        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        analog0 = new QLabel(groupBox_3);
        analog0->setObjectName(QString::fromUtf8("analog0"));
        analog0->setFont(font1);
        analog0->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(analog0, 1, 1, 1, 1);

        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font1);
        label_17->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_17, 1, 2, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        analog1 = new QLabel(groupBox_3);
        analog1->setObjectName(QString::fromUtf8("analog1"));
        analog1->setFont(font1);
        analog1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(analog1, 2, 1, 1, 1);

        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font1);
        label_18->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_18, 2, 2, 1, 1);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 3, 0, 1, 1);

        analog2 = new QLabel(groupBox_3);
        analog2->setObjectName(QString::fromUtf8("analog2"));
        analog2->setFont(font1);
        analog2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(analog2, 3, 1, 1, 1);

        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font1);
        label_19->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_19, 3, 2, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_6, 4, 0, 1, 1);

        analog3 = new QLabel(groupBox_3);
        analog3->setObjectName(QString::fromUtf8("analog3"));
        analog3->setFont(font1);
        analog3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(analog3, 4, 1, 1, 1);

        label_23 = new QLabel(groupBox_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font1);
        label_23->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_23, 4, 2, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_7, 5, 0, 1, 1);

        analog4 = new QLabel(groupBox_3);
        analog4->setObjectName(QString::fromUtf8("analog4"));
        analog4->setFont(font1);
        analog4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(analog4, 5, 1, 1, 1);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 5, 2, 1, 1);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_8, 6, 0, 1, 1);

        analog5 = new QLabel(groupBox_3);
        analog5->setObjectName(QString::fromUtf8("analog5"));
        analog5->setFont(font1);
        analog5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(analog5, 6, 1, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 6, 2, 1, 1);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_9, 7, 0, 1, 1);

        analog6 = new QLabel(groupBox_3);
        analog6->setObjectName(QString::fromUtf8("analog6"));
        analog6->setFont(font1);
        analog6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(analog6, 7, 1, 1, 1);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_11, 7, 2, 1, 1);


        verticalLayout_4->addLayout(gridLayout_2);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QPalette palette1;
        QBrush brush2(QColor(128, 128, 128, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        QBrush brush3(QColor(69, 69, 69, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        label_10->setPalette(palette1);
        QFont font2;
        font2.setPointSize(11);
        font2.setItalic(true);
        label_10->setFont(font2);

        verticalLayout_4->addWidget(label_10);


        verticalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setFlat(true);
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(2, 2, 2, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(1);
        label_24 = new QLabel(groupBox_4);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setFont(font);
        label_24->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_24, 0, 0, 1, 1);

        label_25 = new QLabel(groupBox_4);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setFont(font);
        label_25->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_25, 0, 1, 1, 1);

        label_26 = new QLabel(groupBox_4);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setFont(font);
        label_26->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_26, 0, 2, 1, 1);

        label_27 = new QLabel(groupBox_4);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setFont(font1);
        label_27->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_27, 1, 0, 1, 1);

        digital0 = new QLabel(groupBox_4);
        digital0->setObjectName(QString::fromUtf8("digital0"));
        digital0->setFont(font1);
        digital0->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(digital0, 1, 1, 1, 1);

        label_43 = new QLabel(groupBox_4);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setFont(font1);
        label_43->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_43, 1, 2, 1, 1);

        label_28 = new QLabel(groupBox_4);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setFont(font1);
        label_28->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_28, 2, 0, 1, 1);

        digital1 = new QLabel(groupBox_4);
        digital1->setObjectName(QString::fromUtf8("digital1"));
        digital1->setFont(font1);
        digital1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(digital1, 2, 1, 1, 1);

        label_44 = new QLabel(groupBox_4);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setFont(font1);
        label_44->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_44, 2, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        label_12->setPalette(palette2);
        label_12->setFont(font2);

        verticalLayout_3->addWidget(label_12);


        verticalLayout->addWidget(groupBox_4);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFlat(true);
        horizontalLayout_5 = new QHBoxLayout(groupBox);
        horizontalLayout_5->setSpacing(1);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 4, 0, 0);
        motor0 = new TouchDial(groupBox);
        motor0->setObjectName(QString::fromUtf8("motor0"));
        motor0->setMinimumSize(QSize(0, 80));

        horizontalLayout_5->addWidget(motor0);

        motor1 = new TouchDial(groupBox);
        motor1->setObjectName(QString::fromUtf8("motor1"));
        motor1->setMinimumSize(QSize(0, 80));

        horizontalLayout_5->addWidget(motor1);

        motor2 = new TouchDial(groupBox);
        motor2->setObjectName(QString::fromUtf8("motor2"));
        motor2->setMinimumSize(QSize(0, 80));

        horizontalLayout_5->addWidget(motor2);

        motor3 = new TouchDial(groupBox);
        motor3->setObjectName(QString::fromUtf8("motor3"));
        motor3->setMinimumSize(QSize(0, 80));

        horizontalLayout_5->addWidget(motor3);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFlat(true);
        horizontalLayout_6 = new QHBoxLayout(groupBox_2);
        horizontalLayout_6->setSpacing(1);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 4, 0, 0);
        servo0 = new TouchDial(groupBox_2);
        servo0->setObjectName(QString::fromUtf8("servo0"));
        servo0->setMinimumSize(QSize(0, 80));

        horizontalLayout_6->addWidget(servo0);

        servo1 = new TouchDial(groupBox_2);
        servo1->setObjectName(QString::fromUtf8("servo1"));
        servo1->setMinimumSize(QSize(0, 80));

        horizontalLayout_6->addWidget(servo1);

        servo2 = new TouchDial(groupBox_2);
        servo2->setObjectName(QString::fromUtf8("servo2"));
        servo2->setMinimumSize(QSize(0, 80));

        horizontalLayout_6->addWidget(servo2);

        servo3 = new TouchDial(groupBox_2);
        servo3->setObjectName(QString::fromUtf8("servo3"));
        servo3->setMinimumSize(QSize(0, 80));

        horizontalLayout_6->addWidget(servo3);


        verticalLayout->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(5, 1);
        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea);

        horizontalLayout->setStretch(0, 1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1204, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuSimulation = new QMenu(menubar);
        menuSimulation->setObjectName(QString::fromUtf8("menuSimulation"));
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMovable(false);
        toolBar->setIconSize(QSize(16, 16));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuSimulation->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionAbout);
        menuSimulation->addAction(actionStart);
        menuSimulation->addAction(actionStop);
        toolBar->addAction(actionStop);
        toolBar->addSeparator();
        toolBar->addAction(actionReset);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "KIPR's 2D Simulator", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        actionStart->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        actionStop->setText(QApplication::translate("MainWindow", "Stop", 0, QApplication::UnicodeUTF8));
        actionReset->setText(QApplication::translate("MainWindow", "Reset", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Console", 0, QApplication::UnicodeUTF8));
        a->setText(QApplication::translate("MainWindow", "A", 0, QApplication::UnicodeUTF8));
        b->setText(QApplication::translate("MainWindow", "B", 0, QApplication::UnicodeUTF8));
        c->setText(QApplication::translate("MainWindow", "C", 0, QApplication::UnicodeUTF8));
        x->setText(QApplication::translate("MainWindow", "X", 0, QApplication::UnicodeUTF8));
        y->setText(QApplication::translate("MainWindow", "Y", 0, QApplication::UnicodeUTF8));
        z->setText(QApplication::translate("MainWindow", "Z", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Analogs", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "Port", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindow", "Value", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("MainWindow", "Role", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        analog0->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "Left Range", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        analog1->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "Front Range", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        analog2->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "Right Range", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        analog3->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("MainWindow", "Left Light", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        analog4->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Right Light", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        analog5->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Left Reflectance", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        analog6->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Right Reflectance", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Analog port 7 is not assigned a role.", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Digitals", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("MainWindow", "Port", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("MainWindow", "Value", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("MainWindow", "Role", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        digital0->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("MainWindow", "Left Bump", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8));
        digital1->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("MainWindow", "Right Bump", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Digital ports 10 .. 15 are not assigned roles.", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Motors PWMs", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Servos", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        menuSimulation->setTitle(QApplication::translate("MainWindow", "Simulation", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
