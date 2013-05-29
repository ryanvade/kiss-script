/********************************************************************************
** Form generated from reading UI file 'WebTab.ui'
**
** Created: Wed May 29 16:42:46 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEBTAB_H
#define UI_WEBTAB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_WebTab
{
public:
    QAction *actionBack;
    QAction *actionForward;
    QAction *actionReload;
    QAction *actionGo;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionFind;
    QAction *actionOpenInBrowser;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *ui_urlBar;
    QPushButton *ui_goButton;
    QProgressBar *ui_load;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QWebView *ui_webView;
    QFrame *ui_frameFind;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *ui_find;
    QPushButton *ui_prevFind;
    QPushButton *ui_nextFind;
    QSpacerItem *horizontalSpacer;
    QPushButton *ui_closeFind;

    void setupUi(QWidget *WebTab)
    {
        if (WebTab->objectName().isEmpty())
            WebTab->setObjectName(QString::fromUtf8("WebTab"));
        WebTab->resize(901, 595);
        actionBack = new QAction(WebTab);
        actionBack->setObjectName(QString::fromUtf8("actionBack"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/browser/icon_set/icons/arrow_left.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBack->setIcon(icon);
        actionForward = new QAction(WebTab);
        actionForward->setObjectName(QString::fromUtf8("actionForward"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/browser/icon_set/icons/arrow_right.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionForward->setIcon(icon1);
        actionReload = new QAction(WebTab);
        actionReload->setObjectName(QString::fromUtf8("actionReload"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/browser/icon_set/icons/arrow_refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReload->setIcon(icon2);
        actionGo = new QAction(WebTab);
        actionGo->setObjectName(QString::fromUtf8("actionGo"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/browser/icon_set/icons/resultset_next.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGo->setIcon(icon3);
        actionCopy = new QAction(WebTab);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/shortcuts/edit/icon_set/icons/page_white_copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon4);
        actionCut = new QAction(WebTab);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/shortcuts/edit/icon_set/icons/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon5);
        actionPaste = new QAction(WebTab);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/shortcuts/edit/icon_set/icons/page_white_paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon6);
        actionFind = new QAction(WebTab);
        actionFind->setObjectName(QString::fromUtf8("actionFind"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/shortcuts/edit/icon_set/icons/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFind->setIcon(icon7);
        actionOpenInBrowser = new QAction(WebTab);
        actionOpenInBrowser->setObjectName(QString::fromUtf8("actionOpenInBrowser"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/shortcuts/target/icon_set/icons/bullet_go.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenInBrowser->setIcon(icon8);
        verticalLayout_2 = new QVBoxLayout(WebTab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ui_urlBar = new QLineEdit(WebTab);
        ui_urlBar->setObjectName(QString::fromUtf8("ui_urlBar"));

        horizontalLayout->addWidget(ui_urlBar);

        ui_goButton = new QPushButton(WebTab);
        ui_goButton->setObjectName(QString::fromUtf8("ui_goButton"));
        ui_goButton->setMaximumSize(QSize(20, 16777215));
        ui_goButton->setIcon(icon3);
        ui_goButton->setDefault(false);
        ui_goButton->setFlat(true);

        horizontalLayout->addWidget(ui_goButton);

        ui_load = new QProgressBar(WebTab);
        ui_load->setObjectName(QString::fromUtf8("ui_load"));
        ui_load->setValue(0);
        ui_load->setOrientation(Qt::Horizontal);
        ui_load->setInvertedAppearance(false);

        horizontalLayout->addWidget(ui_load);

        horizontalLayout->setStretch(0, 10);

        verticalLayout_2->addLayout(horizontalLayout);

        frame = new QFrame(WebTab);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ui_webView = new QWebView(frame);
        ui_webView->setObjectName(QString::fromUtf8("ui_webView"));
        ui_webView->setAcceptDrops(false);
        ui_webView->setUrl(QUrl(QString::fromUtf8("about:blank")));
        ui_webView->setRenderHints(QPainter::TextAntialiasing);

        verticalLayout->addWidget(ui_webView);


        verticalLayout_2->addWidget(frame);

        ui_frameFind = new QFrame(WebTab);
        ui_frameFind->setObjectName(QString::fromUtf8("ui_frameFind"));
        ui_frameFind->setFrameShape(QFrame::NoFrame);
        ui_frameFind->setFrameShadow(QFrame::Sunken);
        horizontalLayout_2 = new QHBoxLayout(ui_frameFind);
        horizontalLayout_2->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(ui_frameFind);
        label->setObjectName(QString::fromUtf8("label"));
        label->setTextFormat(Qt::AutoText);
        label->setPixmap(QPixmap(QString::fromUtf8(":/shortcuts/edit/icon_set/icons/find.png")));

        horizontalLayout_2->addWidget(label);

        ui_find = new QLineEdit(ui_frameFind);
        ui_find->setObjectName(QString::fromUtf8("ui_find"));

        horizontalLayout_2->addWidget(ui_find);

        ui_prevFind = new QPushButton(ui_frameFind);
        ui_prevFind->setObjectName(QString::fromUtf8("ui_prevFind"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/shortcuts/edit/icon_set/icons/arrow_undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_prevFind->setIcon(icon9);

        horizontalLayout_2->addWidget(ui_prevFind);

        ui_nextFind = new QPushButton(ui_frameFind);
        ui_nextFind->setObjectName(QString::fromUtf8("ui_nextFind"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/shortcuts/edit/icon_set/icons/arrow_redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_nextFind->setIcon(icon10);

        horizontalLayout_2->addWidget(ui_nextFind);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        ui_closeFind = new QPushButton(ui_frameFind);
        ui_closeFind->setObjectName(QString::fromUtf8("ui_closeFind"));
        ui_closeFind->setMaximumSize(QSize(20, 20));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/shortcuts/file/icon_set/icons/cross.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_closeFind->setIcon(icon11);
        ui_closeFind->setFlat(false);

        horizontalLayout_2->addWidget(ui_closeFind);


        verticalLayout_2->addWidget(ui_frameFind);

        verticalLayout_2->setStretch(1, 1);

        retranslateUi(WebTab);
        QObject::connect(ui_goButton, SIGNAL(clicked()), actionGo, SLOT(trigger()));
        QObject::connect(ui_urlBar, SIGNAL(returnPressed()), actionGo, SLOT(trigger()));
        QObject::connect(actionReload, SIGNAL(triggered()), ui_webView, SLOT(reload()));
        QObject::connect(actionBack, SIGNAL(triggered()), ui_webView, SLOT(back()));
        QObject::connect(actionForward, SIGNAL(triggered()), ui_webView, SLOT(forward()));
        QObject::connect(actionFind, SIGNAL(triggered()), ui_frameFind, SLOT(show()));
        QObject::connect(ui_closeFind, SIGNAL(clicked()), ui_frameFind, SLOT(hide()));
        QObject::connect(ui_find, SIGNAL(returnPressed()), ui_nextFind, SLOT(click()));
        QObject::connect(actionFind, SIGNAL(triggered()), ui_find, SLOT(clear()));
        QObject::connect(actionFind, SIGNAL(triggered()), ui_find, SLOT(setFocus()));
        QObject::connect(ui_webView, SIGNAL(loadProgress(int)), ui_load, SLOT(setValue(int)));
        QObject::connect(ui_webView, SIGNAL(loadStarted()), ui_load, SLOT(show()));

        QMetaObject::connectSlotsByName(WebTab);
    } // setupUi

    void retranslateUi(QWidget *WebTab)
    {
        WebTab->setWindowTitle(QApplication::translate("WebTab", "Form", 0, QApplication::UnicodeUTF8));
        actionBack->setText(QApplication::translate("WebTab", "Back", 0, QApplication::UnicodeUTF8));
        actionForward->setText(QApplication::translate("WebTab", "Forward", 0, QApplication::UnicodeUTF8));
        actionReload->setText(QApplication::translate("WebTab", "Reload", 0, QApplication::UnicodeUTF8));
        actionGo->setText(QApplication::translate("WebTab", "Go", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("WebTab", "Copy", 0, QApplication::UnicodeUTF8));
        actionCopy->setShortcut(QApplication::translate("WebTab", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionCut->setText(QApplication::translate("WebTab", "Cut", 0, QApplication::UnicodeUTF8));
        actionCut->setShortcut(QApplication::translate("WebTab", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        actionPaste->setText(QApplication::translate("WebTab", "Paste", 0, QApplication::UnicodeUTF8));
        actionPaste->setShortcut(QApplication::translate("WebTab", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        actionFind->setText(QApplication::translate("WebTab", "Find", 0, QApplication::UnicodeUTF8));
        actionFind->setShortcut(QApplication::translate("WebTab", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        actionOpenInBrowser->setText(QApplication::translate("WebTab", "Open In Browser", 0, QApplication::UnicodeUTF8));
        ui_goButton->setText(QString());
        label->setText(QString());
        ui_prevFind->setText(QApplication::translate("WebTab", "Previous", 0, QApplication::UnicodeUTF8));
        ui_nextFind->setText(QApplication::translate("WebTab", "Next", 0, QApplication::UnicodeUTF8));
        ui_closeFind->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WebTab: public Ui_WebTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEBTAB_H
