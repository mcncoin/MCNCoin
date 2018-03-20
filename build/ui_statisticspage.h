/********************************************************************************
** Form generated from reading UI file 'statisticspage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTICSPAGE_H
#define UI_STATISTICSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StatisticsPage
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QPushButton *startButton;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QFrame *gridFrame_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QFormLayout *formLayout_2;
    QLabel *label_14;
    QLabel *heightBox;
    QLabel *label_12;
    QLabel *rewardBox;
    QLabel *label_13;
    QLabel *diffBox;
    QLabel *label_16;
    QLabel *pawrateBox;
    QLabel *label3_2;
    QLabel *localBox;
    QLabel *label1_2;
    QLabel *connectionBox;
    QLabel *label_8;
    QLabel *volumeBox;
    QLabel *label_15;
    QLabel *cBox;

    void setupUi(QWidget *StatisticsPage)
    {
        if (StatisticsPage->objectName().isEmpty())
            StatisticsPage->setObjectName(QString::fromUtf8("StatisticsPage"));
        StatisticsPage->setWindowModality(Qt::NonModal);
        StatisticsPage->resize(623, 505);
        StatisticsPage->setStyleSheet(QString::fromUtf8("color:#505050;\n"
"font-family:'Open Sans,sans-serif';"));
        gridLayout = new QGridLayout(StatisticsPage);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        frame = new QFrame(StatisticsPage);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(213, 0));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        startButton = new QPushButton(frame);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(50, 270, 120, 60));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy);
        startButton->setMinimumSize(QSize(120, 60));
        startButton->setStyleSheet(QString::fromUtf8("background:lightgrey;"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 70, 191, 191));

        gridLayout->addWidget(frame, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        gridFrame_2 = new QFrame(StatisticsPage);
        gridFrame_2->setObjectName(QString::fromUtf8("gridFrame_2"));
        gridLayout_4 = new QGridLayout(gridFrame_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(7);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(gridFrame_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setFamily(QString::fromUtf8("Open Sans,sans-serif"));
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        gridLayout_4->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 2, 0, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_2->setHorizontalSpacing(139);
        formLayout_2->setVerticalSpacing(18);
        formLayout_2->setContentsMargins(-1, -1, 0, -1);
        label_14 = new QLabel(gridFrame_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_14);

        heightBox = new QLabel(gridFrame_2);
        heightBox->setObjectName(QString::fromUtf8("heightBox"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, heightBox);

        label_12 = new QLabel(gridFrame_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_12);

        rewardBox = new QLabel(gridFrame_2);
        rewardBox->setObjectName(QString::fromUtf8("rewardBox"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, rewardBox);

        label_13 = new QLabel(gridFrame_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_13);

        diffBox = new QLabel(gridFrame_2);
        diffBox->setObjectName(QString::fromUtf8("diffBox"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, diffBox);

        label_16 = new QLabel(gridFrame_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_16);

        pawrateBox = new QLabel(gridFrame_2);
        pawrateBox->setObjectName(QString::fromUtf8("pawrateBox"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, pawrateBox);

        label3_2 = new QLabel(gridFrame_2);
        label3_2->setObjectName(QString::fromUtf8("label3_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label3_2->sizePolicy().hasHeightForWidth());
        label3_2->setSizePolicy(sizePolicy1);

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label3_2);

        localBox = new QLabel(gridFrame_2);
        localBox->setObjectName(QString::fromUtf8("localBox"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, localBox);

        label1_2 = new QLabel(gridFrame_2);
        label1_2->setObjectName(QString::fromUtf8("label1_2"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label1_2);

        connectionBox = new QLabel(gridFrame_2);
        connectionBox->setObjectName(QString::fromUtf8("connectionBox"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, connectionBox);

        label_8 = new QLabel(gridFrame_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, label_8);

        volumeBox = new QLabel(gridFrame_2);
        volumeBox->setObjectName(QString::fromUtf8("volumeBox"));

        formLayout_2->setWidget(7, QFormLayout::FieldRole, volumeBox);

        label_15 = new QLabel(gridFrame_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_2->setWidget(8, QFormLayout::LabelRole, label_15);

        cBox = new QLabel(gridFrame_2);
        cBox->setObjectName(QString::fromUtf8("cBox"));

        formLayout_2->setWidget(8, QFormLayout::FieldRole, cBox);


        gridLayout_4->addLayout(formLayout_2, 3, 0, 1, 1);


        gridLayout->addWidget(gridFrame_2, 0, 0, 1, 1);


        retranslateUi(StatisticsPage);

        QMetaObject::connectSlotsByName(StatisticsPage);
    } // setupUi

    void retranslateUi(QWidget *StatisticsPage)
    {
        StatisticsPage->setWindowTitle(QApplication::translate("StatisticsPage", "Digging", 0, QApplication::UnicodeUTF8));
        startButton->setText(QApplication::translate("StatisticsPage", "Update Statistics", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p><span style=\" font-size:20px; font-weight:600; color:#000000;\">MCNCoin Statistics</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p><span style=\" font-weight:600;\">Block Height</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        heightBox->setText(QApplication::translate("StatisticsPage", "00000", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p><span style=\" font-weight:600;\">POW Block Reward</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        rewardBox->setText(QApplication::translate("StatisticsPage", "10000", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p><span style=\" font-weight:600;\">POW difficulty</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        diffBox->setText(QApplication::translate("StatisticsPage", "0.0002", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p><span style=\" font-weight:600;\">Net Hashrate</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pawrateBox->setText(QApplication::translate("StatisticsPage", "0 MH/s", 0, QApplication::UnicodeUTF8));
        label3_2->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p><span style=\" font-weight:600;\">Last block time</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        localBox->setText(QApplication::translate("StatisticsPage", "0 KH/s", 0, QApplication::UnicodeUTF8));
        label1_2->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p><span style=\" font-weight:600;\">Connections</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        connectionBox->setText(QApplication::translate("StatisticsPage", "0", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p><span style=\" font-weight:600;\">Total Volume</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        volumeBox->setText(QApplication::translate("StatisticsPage", "250", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p><span style=\" font-weight:600;\">Mining Phase</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        cBox->setText(QApplication::translate("StatisticsPage", "POW", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class StatisticsPage: public Ui_StatisticsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICSPAGE_H
