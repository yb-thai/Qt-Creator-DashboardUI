/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *backgroundLabel;
    QPushButton *seattleButton;
    QPushButton *japanButton;
    QPushButton *londonButton;
    QLabel *tempLabel;
    QLabel *conditionLabel;
    QLabel *iconLabel;
    QLabel *blurBackground;
    QLabel *dateLabel;
    QLCDNumber *hourLcd;
    QLCDNumber *minuteLcd;
    QLabel *label;
    QLCDNumber *secondLcd;
    QLineEdit *zipCodeEdit;
    QPushButton *locationButton;
    QLabel *testLabel;
    QLabel *tempOneLabel;
    QLabel *conditionLabel1;
    QLabel *tempLabel2;
    QLabel *conditionLabel2;
    QLabel *tempLabel3;
    QLabel *conditionLabel3;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QLabel *welcomeLabel;
    QLabel *blurMapBackground;
    QLabel *mapLabel;
    QLabel *zipcodeBlur;
    QPushButton *clearMapButton;
    QLabel *threeHourLabel;
    QLabel *sixHourLabel;
    QLabel *nineHourLabel;
    QLabel *label_2;
    QTableView *tableView;
    QFrame *line_4;
    QPushButton *addToDoListButton;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *emptyLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1064, 659);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        backgroundLabel = new QLabel(centralwidget);
        backgroundLabel->setObjectName(QString::fromUtf8("backgroundLabel"));
        backgroundLabel->setEnabled(true);
        backgroundLabel->setGeometry(QRect(0, 0, 1071, 641));
        backgroundLabel->setScaledContents(false);
        seattleButton = new QPushButton(centralwidget);
        seattleButton->setObjectName(QString::fromUtf8("seattleButton"));
        seattleButton->setGeometry(QRect(140, 60, 71, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Malgun Gothic"));
        font.setBold(false);
        font.setWeight(50);
        seattleButton->setFont(font);
        seattleButton->setStyleSheet(QString::fromUtf8("color:rgb(250,250,250);\n"
"border:none;\n"
"background-color: rgb(51, 167, 255);\n"
"\n"
""));
        japanButton = new QPushButton(centralwidget);
        japanButton->setObjectName(QString::fromUtf8("japanButton"));
        japanButton->setGeometry(QRect(240, 60, 71, 21));
        japanButton->setFont(font);
        japanButton->setStyleSheet(QString::fromUtf8("color:rgb(250,250,250);\n"
"border:none;\n"
"background-color: rgb(51, 167, 255);"));
        londonButton = new QPushButton(centralwidget);
        londonButton->setObjectName(QString::fromUtf8("londonButton"));
        londonButton->setGeometry(QRect(40, 60, 71, 21));
        londonButton->setFont(font);
        londonButton->setStyleSheet(QString::fromUtf8("color:rgb(250,250,250);\n"
"border:none;\n"
"background-color: rgb(51, 167, 255);"));
        tempLabel = new QLabel(centralwidget);
        tempLabel->setObjectName(QString::fromUtf8("tempLabel"));
        tempLabel->setGeometry(QRect(40, 500, 181, 111));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Malgun Gothic"));
        font1.setPointSize(36);
        font1.setBold(true);
        font1.setWeight(75);
        tempLabel->setFont(font1);
        tempLabel->setStyleSheet(QString::fromUtf8("    color: rgb(255,255, 255);    "));
        conditionLabel = new QLabel(centralwidget);
        conditionLabel->setObjectName(QString::fromUtf8("conditionLabel"));
        conditionLabel->setGeometry(QRect(210, 560, 101, 71));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Malgun Gothic"));
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setWeight(75);
        conditionLabel->setFont(font2);
        conditionLabel->setStyleSheet(QString::fromUtf8("    color: rgb(255,255, 255);    "));
        conditionLabel->setAlignment(Qt::AlignCenter);
        iconLabel = new QLabel(centralwidget);
        iconLabel->setObjectName(QString::fromUtf8("iconLabel"));
        iconLabel->setGeometry(QRect(220, 520, 101, 71));
        iconLabel->setFont(font2);
        iconLabel->setStyleSheet(QString::fromUtf8("    color: rgb(255,255, 255);    "));
        iconLabel->setAlignment(Qt::AlignCenter);
        blurBackground = new QLabel(centralwidget);
        blurBackground->setObjectName(QString::fromUtf8("blurBackground"));
        blurBackground->setGeometry(QRect(10, 40, 321, 451));
        blurBackground->setStyleSheet(QString::fromUtf8("background-color:rgb(103, 103, 103);\n"
"border-radius:15px;"));
        dateLabel = new QLabel(centralwidget);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));
        dateLabel->setGeometry(QRect(40, 590, 151, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Century Schoolbook"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        dateLabel->setFont(font3);
        dateLabel->setStyleSheet(QString::fromUtf8("color: rgb(255,255, 255);    \n"
"\n"
"border-radius: 15px;"));
        dateLabel->setAlignment(Qt::AlignCenter);
        hourLcd = new QLCDNumber(centralwidget);
        hourLcd->setObjectName(QString::fromUtf8("hourLcd"));
        hourLcd->setGeometry(QRect(40, 110, 101, 71));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Malgun Gothic"));
        font4.setPointSize(8);
        font4.setBold(true);
        font4.setWeight(75);
        hourLcd->setFont(font4);
        hourLcd->setStyleSheet(QString::fromUtf8("QLCDNumber{\n"
"    color: rgb(255,255, 255); \n"
"	border-color:rgb(51, 167, 255);   \n"
"border-width : 1.2px;\n"
"border-style:inset;\n"
"}\n"
"\n"
""));
        hourLcd->setFrameShape(QFrame::WinPanel);
        hourLcd->setFrameShadow(QFrame::Plain);
        hourLcd->setDigitCount(2);
        hourLcd->setProperty("value", QVariant(11.000000000000000));
        minuteLcd = new QLCDNumber(centralwidget);
        minuteLcd->setObjectName(QString::fromUtf8("minuteLcd"));
        minuteLcd->setGeometry(QRect(160, 110, 101, 71));
        minuteLcd->setFont(font4);
        minuteLcd->setStyleSheet(QString::fromUtf8("QLCDNumber{\n"
"    color: rgb(255,255, 255); \n"
"	border-color:rgb(51, 167, 255);   \n"
"border-width : 1.2px;\n"
"border-style:inset;\n"
"}\n"
""));
        minuteLcd->setFrameShape(QFrame::Panel);
        minuteLcd->setFrameShadow(QFrame::Plain);
        minuteLcd->setDigitCount(2);
        minuteLcd->setProperty("value", QVariant(11.000000000000000));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 110, 20, 91));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Malgun Gothic"));
        font5.setPointSize(28);
        font5.setBold(true);
        font5.setWeight(75);
        label->setFont(font5);
        label->setFrameShape(QFrame::NoFrame);
        label->setAlignment(Qt::AlignCenter);
        secondLcd = new QLCDNumber(centralwidget);
        secondLcd->setObjectName(QString::fromUtf8("secondLcd"));
        secondLcd->setGeometry(QRect(270, 140, 41, 41));
        QFont font6;
        font6.setPointSize(8);
        secondLcd->setFont(font6);
        secondLcd->setStyleSheet(QString::fromUtf8("QLCDNumber{\n"
"    color: rgb(255,255, 255); \n"
"	border-color:rgb(51, 167, 255);   \n"
"border-width : 1.2px;\n"
"border-style:inset;\n"
"}"));
        secondLcd->setFrameShape(QFrame::WinPanel);
        secondLcd->setFrameShadow(QFrame::Plain);
        secondLcd->setDigitCount(2);
        secondLcd->setProperty("value", QVariant(11.000000000000000));
        zipCodeEdit = new QLineEdit(centralwidget);
        zipCodeEdit->setObjectName(QString::fromUtf8("zipCodeEdit"));
        zipCodeEdit->setGeometry(QRect(690, 50, 161, 31));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Malgun Gothic"));
        font7.setPointSize(16);
        font7.setBold(false);
        font7.setWeight(50);
        zipCodeEdit->setFont(font7);
        zipCodeEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background:transparent;\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
""));
        zipCodeEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        locationButton = new QPushButton(centralwidget);
        locationButton->setObjectName(QString::fromUtf8("locationButton"));
        locationButton->setGeometry(QRect(810, 50, 71, 31));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Malgun Gothic"));
        font8.setPointSize(10);
        font8.setBold(false);
        font8.setWeight(50);
        locationButton->setFont(font8);
        locationButton->setStyleSheet(QString::fromUtf8("color:rgb(250,250,250);\n"
"border:none;\n"
"background-color: rgb(51, 167, 255);\n"
""));
        locationButton->setIconSize(QSize(40, 40));
        testLabel = new QLabel(centralwidget);
        testLabel->setObjectName(QString::fromUtf8("testLabel"));
        testLabel->setGeometry(QRect(10, 510, 1041, 121));
        testLabel->setStyleSheet(QString::fromUtf8("background-color:rgb(118, 118, 118);\n"
"border-radius:15px;"));
        tempOneLabel = new QLabel(centralwidget);
        tempOneLabel->setObjectName(QString::fromUtf8("tempOneLabel"));
        tempOneLabel->setGeometry(QRect(376, 550, 71, 31));
        QFont font9;
        font9.setFamily(QString::fromUtf8("Malgun Gothic"));
        font9.setPointSize(12);
        font9.setBold(true);
        font9.setWeight(75);
        tempOneLabel->setFont(font9);
        tempOneLabel->setStyleSheet(QString::fromUtf8("    color: rgb(255,255, 255);    "));
        tempOneLabel->setAlignment(Qt::AlignCenter);
        conditionLabel1 = new QLabel(centralwidget);
        conditionLabel1->setObjectName(QString::fromUtf8("conditionLabel1"));
        conditionLabel1->setGeometry(QRect(440, 580, 81, 31));
        QFont font10;
        font10.setFamily(QString::fromUtf8("Malgun Gothic"));
        font10.setPointSize(11);
        font10.setBold(true);
        font10.setWeight(75);
        conditionLabel1->setFont(font10);
        conditionLabel1->setStyleSheet(QString::fromUtf8("    color: rgb(255,255, 255);    "));
        conditionLabel1->setAlignment(Qt::AlignCenter);
        tempLabel2 = new QLabel(centralwidget);
        tempLabel2->setObjectName(QString::fromUtf8("tempLabel2"));
        tempLabel2->setGeometry(QRect(596, 550, 81, 31));
        tempLabel2->setFont(font9);
        tempLabel2->setStyleSheet(QString::fromUtf8("    color: rgb(255,255, 255);    "));
        tempLabel2->setAlignment(Qt::AlignCenter);
        conditionLabel2 = new QLabel(centralwidget);
        conditionLabel2->setObjectName(QString::fromUtf8("conditionLabel2"));
        conditionLabel2->setGeometry(QRect(680, 580, 81, 31));
        conditionLabel2->setFont(font10);
        conditionLabel2->setStyleSheet(QString::fromUtf8("    color: rgb(255,255, 255);    "));
        conditionLabel2->setAlignment(Qt::AlignCenter);
        tempLabel3 = new QLabel(centralwidget);
        tempLabel3->setObjectName(QString::fromUtf8("tempLabel3"));
        tempLabel3->setGeometry(QRect(816, 550, 71, 31));
        tempLabel3->setFont(font9);
        tempLabel3->setStyleSheet(QString::fromUtf8("    color: rgb(255,255, 255);    "));
        tempLabel3->setAlignment(Qt::AlignCenter);
        conditionLabel3 = new QLabel(centralwidget);
        conditionLabel3->setObjectName(QString::fromUtf8("conditionLabel3"));
        conditionLabel3->setGeometry(QRect(890, 580, 81, 31));
        conditionLabel3->setFont(font10);
        conditionLabel3->setStyleSheet(QString::fromUtf8("    color: rgb(255,255, 255);    "));
        conditionLabel3->setAlignment(Qt::AlignCenter);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(560, 540, 16, 61));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(790, 540, 16, 61));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(50, 190, 251, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        welcomeLabel = new QLabel(centralwidget);
        welcomeLabel->setObjectName(QString::fromUtf8("welcomeLabel"));
        welcomeLabel->setGeometry(QRect(60, 200, 231, 41));
        QFont font11;
        font11.setFamily(QString::fromUtf8("Malgun Gothic"));
        font11.setPointSize(14);
        font11.setBold(false);
        font11.setItalic(false);
        font11.setWeight(50);
        welcomeLabel->setFont(font11);
        welcomeLabel->setStyleSheet(QString::fromUtf8("    color: rgb(255,255, 255); "));
        welcomeLabel->setAlignment(Qt::AlignCenter);
        blurMapBackground = new QLabel(centralwidget);
        blurMapBackground->setObjectName(QString::fromUtf8("blurMapBackground"));
        blurMapBackground->setGeometry(QRect(690, 90, 351, 381));
        blurMapBackground->setStyleSheet(QString::fromUtf8("background-color:rgb(120, 120, 120);\n"
"border-radius:15px;"));
        mapLabel = new QLabel(centralwidget);
        mapLabel->setObjectName(QString::fromUtf8("mapLabel"));
        mapLabel->setGeometry(QRect(700, 100, 331, 361));
        mapLabel->setStyleSheet(QString::fromUtf8("border-radius: 15px;"));
        mapLabel->setAlignment(Qt::AlignCenter);
        zipcodeBlur = new QLabel(centralwidget);
        zipcodeBlur->setObjectName(QString::fromUtf8("zipcodeBlur"));
        zipcodeBlur->setGeometry(QRect(690, 50, 151, 31));
        zipcodeBlur->setStyleSheet(QString::fromUtf8("background-color:rgb(120, 120, 120);\n"
""));
        clearMapButton = new QPushButton(centralwidget);
        clearMapButton->setObjectName(QString::fromUtf8("clearMapButton"));
        clearMapButton->setGeometry(QRect(1000, 110, 21, 21));
        clearMapButton->setFont(font8);
        clearMapButton->setStyleSheet(QString::fromUtf8("color:rgb(250,250,250);\n"
"border:none;\n"
"background-color: transparent;\n"
"\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/clear1.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearMapButton->setIcon(icon);
        clearMapButton->setIconSize(QSize(20, 26));
        threeHourLabel = new QLabel(centralwidget);
        threeHourLabel->setObjectName(QString::fromUtf8("threeHourLabel"));
        threeHourLabel->setGeometry(QRect(450, 530, 91, 51));
        sixHourLabel = new QLabel(centralwidget);
        sixHourLabel->setObjectName(QString::fromUtf8("sixHourLabel"));
        sixHourLabel->setGeometry(QRect(680, 530, 91, 51));
        nineHourLabel = new QLabel(centralwidget);
        nineHourLabel->setObjectName(QString::fromUtf8("nineHourLabel"));
        nineHourLabel->setGeometry(QRect(890, 530, 91, 51));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 250, 121, 31));
        QFont font12;
        font12.setFamily(QString::fromUtf8("Malgun Gothic"));
        font12.setPointSize(14);
        font12.setBold(true);
        font12.setUnderline(true);
        font12.setWeight(75);
        label_2->setFont(font12);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255,255, 255); "));
        label_2->setAlignment(Qt::AlignCenter);
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(40, 300, 271, 171));
        QFont font13;
        font13.setFamily(QString::fromUtf8("Malgun Gothic"));
        font13.setPointSize(11);
        tableView->setFont(font13);
        tableView->setStyleSheet(QString::fromUtf8("QTableView\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border:none;\n"
"\n"
"}"));
        tableView->setShowGrid(true);
        tableView->setGridStyle(Qt::NoPen);
        tableView->horizontalHeader()->setVisible(false);
        tableView->verticalHeader()->setVisible(false);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(110, 240, 118, 3));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        addToDoListButton = new QPushButton(centralwidget);
        addToDoListButton->setObjectName(QString::fromUtf8("addToDoListButton"));
        addToDoListButton->setGeometry(QRect(30, 250, 41, 41));
        addToDoListButton->setStyleSheet(QString::fromUtf8("border: none;\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addToDoListButton->setIcon(icon1);
        addToDoListButton->setIconSize(QSize(21, 30));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(440, 520, 47, 14));
        QFont font14;
        font14.setFamily(QString::fromUtf8("Malgun Gothic"));
        font14.setPointSize(10);
        font14.setBold(true);
        font14.setWeight(75);
        label_3->setFont(font14);
        label_3->setStyleSheet(QString::fromUtf8("    color: rgb(255,255, 255);    "));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(670, 520, 47, 14));
        label_4->setFont(font14);
        label_4->setStyleSheet(QString::fromUtf8("    color: rgb(255,255, 255);    "));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(890, 510, 47, 31));
        label_5->setFont(font14);
        label_5->setStyleSheet(QString::fromUtf8("    color: rgb(255,255, 255);    "));
        emptyLabel = new QLabel(centralwidget);
        emptyLabel->setObjectName(QString::fromUtf8("emptyLabel"));
        emptyLabel->setGeometry(QRect(140, 300, 61, 16));
        QFont font15;
        font15.setFamily(QString::fromUtf8("Malgun Gothic"));
        font15.setPointSize(11);
        font15.setBold(false);
        font15.setWeight(50);
        emptyLabel->setFont(font15);
        emptyLabel->setStyleSheet(QString::fromUtf8("color: rgb(255,255, 255); "));
        emptyLabel->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        backgroundLabel->raise();
        zipcodeBlur->raise();
        testLabel->raise();
        blurBackground->raise();
        seattleButton->raise();
        japanButton->raise();
        londonButton->raise();
        tempLabel->raise();
        conditionLabel->raise();
        iconLabel->raise();
        dateLabel->raise();
        hourLcd->raise();
        minuteLcd->raise();
        label->raise();
        secondLcd->raise();
        zipCodeEdit->raise();
        locationButton->raise();
        tempOneLabel->raise();
        conditionLabel1->raise();
        tempLabel2->raise();
        conditionLabel2->raise();
        tempLabel3->raise();
        conditionLabel3->raise();
        line->raise();
        line_2->raise();
        line_3->raise();
        welcomeLabel->raise();
        blurMapBackground->raise();
        mapLabel->raise();
        clearMapButton->raise();
        threeHourLabel->raise();
        sixHourLabel->raise();
        nineHourLabel->raise();
        label_2->raise();
        tableView->raise();
        line_4->raise();
        addToDoListButton->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        emptyLabel->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1064, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        backgroundLabel->setText(QString());
        seattleButton->setText(QApplication::translate("MainWindow", "SEATTLE", nullptr));
        japanButton->setText(QApplication::translate("MainWindow", "JAPAN", nullptr));
        londonButton->setText(QApplication::translate("MainWindow", "LONDON", nullptr));
        tempLabel->setText(QApplication::translate("MainWindow", "weather", nullptr));
        conditionLabel->setText(QApplication::translate("MainWindow", "condi", nullptr));
        iconLabel->setText(QApplication::translate("MainWindow", "icon", nullptr));
        blurBackground->setText(QString());
        dateLabel->setText(QApplication::translate("MainWindow", "date", nullptr));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">:</span></p></body></html>", nullptr));
        zipCodeEdit->setText(QApplication::translate("MainWindow", "98119", nullptr));
        locationButton->setText(QApplication::translate("MainWindow", "SEARCH", nullptr));
        testLabel->setText(QString());
        tempOneLabel->setText(QApplication::translate("MainWindow", "temp1", nullptr));
        conditionLabel1->setText(QApplication::translate("MainWindow", "condi1", nullptr));
        tempLabel2->setText(QApplication::translate("MainWindow", "temp2", nullptr));
        conditionLabel2->setText(QApplication::translate("MainWindow", "condi2", nullptr));
        tempLabel3->setText(QApplication::translate("MainWindow", "temp3", nullptr));
        conditionLabel3->setText(QApplication::translate("MainWindow", "comdi3", nullptr));
        welcomeLabel->setText(QApplication::translate("MainWindow", "Welcome message", nullptr));
        blurMapBackground->setText(QString());
        mapLabel->setText(QApplication::translate("MainWindow", "map", nullptr));
        zipcodeBlur->setText(QString());
        clearMapButton->setText(QString());
        threeHourLabel->setText(QApplication::translate("MainWindow", "icon1", nullptr));
        sixHourLabel->setText(QApplication::translate("MainWindow", "icon2", nullptr));
        nineHourLabel->setText(QApplication::translate("MainWindow", "icon3", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "To-Do List", nullptr));
        addToDoListButton->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "+3hrs", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "+6hrs", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "+9hrs", nullptr));
        emptyLabel->setText(QApplication::translate("MainWindow", "(Empty)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
