/********************************************************************************
** Form generated from reading UI file 'chatwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWINDOW_H
#define UI_CHATWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatWindowClass
{
public:
    QAction *actionQuit;
    QAction *actionCloseTab;
    QWidget *widget_2;
    QWidget *splitter;
    QTabWidget *tab;
    QWidget *widget_4;
    QWidget *tab_5;
    QLineEdit *lineEdit;
    QListView *userView;
    QPushButton *disconnect;
    QWidget *hide3;
    QWidget *layoutWidget;
    QHBoxLayout *hide1;
    QLabel *label_9;
    QLabel *hide2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLineEdit *editPseudo;
    QLabel *label_5;
    QPushButton *buttonConnect;
    QLabel *label_10;

    void setupUi(QWidget *ChatWindowClass)
    {
        if (ChatWindowClass->objectName().isEmpty())
            ChatWindowClass->setObjectName(QString::fromUtf8("ChatWindowClass"));
        ChatWindowClass->resize(743, 514);
        actionQuit = new QAction(ChatWindowClass);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionCloseTab = new QAction(ChatWindowClass);
        actionCloseTab->setObjectName(QString::fromUtf8("actionCloseTab"));
        widget_2 = new QWidget(ChatWindowClass);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 741, 511));
        splitter = new QWidget(widget_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setEnabled(true);
        splitter->setGeometry(QRect(10, 10, 721, 501));
        splitter->setStyleSheet(QString::fromUtf8(""));
        tab = new QTabWidget(splitter);
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setGeometry(QRect(10, 0, 541, 430));
        tab->setStyleSheet(QString::fromUtf8(""));
        tab->setTabShape(QTabWidget::Rounded);
        tab->setTabsClosable(false);
        widget_4 = new QWidget();
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        tab->addTab(widget_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tab->addTab(tab_5, QString());
        lineEdit = new QLineEdit(splitter);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 439, 701, 30));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMaximumSize(QSize(16777215, 30));
        userView = new QListView(splitter);
        userView->setObjectName(QString::fromUtf8("userView"));
        userView->setGeometry(QRect(560, 20, 161, 382));
        userView->setMinimumSize(QSize(0, 300));
        userView->setStyleSheet(QString::fromUtf8("border-radius:10px;"));
        userView->setFrameShape(QFrame::StyledPanel);
        disconnect = new QPushButton(splitter);
        disconnect->setObjectName(QString::fromUtf8("disconnect"));
        disconnect->setGeometry(QRect(640, 407, 71, 28));
        hide3 = new QWidget(widget_2);
        hide3->setObjectName(QString::fromUtf8("hide3"));
        hide3->setGeometry(QRect(0, 0, 741, 511));
        hide3->setStyleSheet(QString::fromUtf8("font-family:Proxima Nova Rg;"));
        layoutWidget = new QWidget(hide3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 6, 731, 41));
        hide1 = new QHBoxLayout(layoutWidget);
        hide1->setSpacing(7);
        hide1->setContentsMargins(11, 11, 11, 11);
        hide1->setObjectName(QString::fromUtf8("hide1"));
        hide1->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("Proxima Nova Rg"));
        label_9->setFont(font);

        hide1->addWidget(label_9);

        hide2 = new QLabel(hide3);
        hide2->setObjectName(QString::fromUtf8("hide2"));
        hide2->setGeometry(QRect(80, 60, 541, 41));
        hide2->setWordWrap(true);
        hide2->setOpenExternalLinks(true);
        label = new QLabel(hide3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 310, 111, 131));
        label->setMargin(5);
        label->setOpenExternalLinks(true);
        label_3 = new QLabel(hide3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(260, 310, 111, 131));
        label_3->setOpenExternalLinks(true);
        label_4 = new QLabel(hide3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(350, 310, 91, 131));
        label_4->setOpenExternalLinks(true);
        label_6 = new QLabel(hide3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(460, 310, 131, 131));
        label_6->setOpenExternalLinks(true);
        editPseudo = new QLineEdit(hide3);
        editPseudo->setObjectName(QString::fromUtf8("editPseudo"));
        editPseudo->setGeometry(QRect(140, 180, 151, 22));
        label_5 = new QLabel(hide3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 180, 61, 21));
        buttonConnect = new QPushButton(hide3);
        buttonConnect->setObjectName(QString::fromUtf8("buttonConnect"));
        buttonConnect->setGeometry(QRect(140, 220, 151, 41));
        buttonConnect->setStyleSheet(QString::fromUtf8("border-radius:40px;border:1px solid grey"));
        label_10 = new QLabel(hide3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(80, 140, 181, 21));

        retranslateUi(ChatWindowClass);

        tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ChatWindowClass);
    } // setupUi

    void retranslateUi(QWidget *ChatWindowClass)
    {
        actionQuit->setText(QApplication::translate("ChatWindowClass", "Quitter", 0, QApplication::UnicodeUTF8));
        actionQuit->setShortcut(QApplication::translate("ChatWindowClass", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionCloseTab->setText(QApplication::translate("ChatWindowClass", "Fermer l'onglet", 0, QApplication::UnicodeUTF8));
        tab->setTabText(tab->indexOf(widget_4), QApplication::translate("ChatWindowClass", "Tab 1", 0, QApplication::UnicodeUTF8));
        tab->setTabText(tab->indexOf(tab_5), QApplication::translate("ChatWindowClass", "Tab 2", 0, QApplication::UnicodeUTF8));
        disconnect->setText(QApplication::translate("ChatWindowClass", "Disconnect", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600;\">Connect to social media</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        editPseudo->setText(QString());
        label_5->setText(QApplication::translate("ChatWindowClass", "Nickname", 0, QApplication::UnicodeUTF8));
        buttonConnect->setText(QApplication::translate("ChatWindowClass", "Connect to Trollbox", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p><span style=\" font-size:12pt;\">Connect to Trollbox :</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(ChatWindowClass);
    } // retranslateUi

};

namespace Ui {
    class ChatWindowClass: public Ui_ChatWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWINDOW_H
