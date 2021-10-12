/********************************************************************************
** Form generated from reading UI file 'secondcalc.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDCALC_H
#define UI_SECONDCALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_secondcalc
{
public:
    QLineEdit *labels;
    QPushButton *pushButton_squares;
    QPushButton *pushButton_Cs;
    QPushButton *pushButton_0s;
    QTextEdit *textEdit;
    QPushButton *pushButton_9s;
    QPushButton *pushButton_undos;
    QPushButton *pushButton_percents;
    QPushButton *pushButton_8s;
    QPushButton *pushButton_subs;
    QPushButton *pushButton_5s;
    QPushButton *pushButton_2s;
    QPushButton *pushButton_6s;
    QPushButton *pushButton_dots;
    QPushButton *pushButton_Enters;
    QPushButton *pushButton_returns;
    QPushButton *pushButton_3s;
    QPushButton *pushButton_4s;
    QPushButton *pushButton_adds;
    QPushButton *pushButton_divs;
    QPushButton *pushButton_muls;
    QPushButton *pushButton_signs;
    QPushButton *pushButton_1s;
    QPushButton *pushButton_roots;
    QPushButton *pushButton_7s;

    void setupUi(QWidget *secondcalc)
    {
        if (secondcalc->objectName().isEmpty())
            secondcalc->setObjectName(QString::fromUtf8("secondcalc"));
        secondcalc->resize(501, 551);
        secondcalc->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: #C0C0C0;\n"
"\n"
"}\n"
"\n"
""));
        labels = new QLineEdit(secondcalc);
        labels->setObjectName(QString::fromUtf8("labels"));
        labels->setGeometry(QRect(0, 0, 501, 151));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labels->sizePolicy().hasHeightForWidth());
        labels->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu Condensed"));
        font.setPointSize(62);
        font.setBold(true);
        font.setWeight(75);
        labels->setFont(font);
        labels->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;\n"
"}"));
        labels->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_squares = new QPushButton(secondcalc);
        pushButton_squares->setObjectName(QString::fromUtf8("pushButton_squares"));
        pushButton_squares->setGeometry(QRect(400, 390, 101, 81));
        QFont font1;
        font1.setPointSize(18);
        pushButton_squares->setFont(font1);
        pushButton_squares->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0D6;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        pushButton_Cs = new QPushButton(secondcalc);
        pushButton_Cs->setObjectName(QString::fromUtf8("pushButton_Cs"));
        pushButton_Cs->setGeometry(QRect(0, 150, 201, 81));
        pushButton_Cs->setFont(font1);
        pushButton_Cs->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #cbc197;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        pushButton_0s = new QPushButton(secondcalc);
        pushButton_0s->setObjectName(QString::fromUtf8("pushButton_0s"));
        pushButton_0s->setGeometry(QRect(100, 470, 101, 81));
        pushButton_0s->setFont(font1);
        pushButton_0s->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        textEdit = new QTextEdit(secondcalc);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 470, 101, 81));
        pushButton_9s = new QPushButton(secondcalc);
        pushButton_9s->setObjectName(QString::fromUtf8("pushButton_9s"));
        pushButton_9s->setGeometry(QRect(200, 230, 101, 81));
        pushButton_9s->setFont(font1);
        pushButton_9s->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        pushButton_undos = new QPushButton(secondcalc);
        pushButton_undos->setObjectName(QString::fromUtf8("pushButton_undos"));
        pushButton_undos->setGeometry(QRect(400, 150, 101, 81));
        pushButton_undos->setFont(font1);
        pushButton_undos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #cbc197;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        pushButton_percents = new QPushButton(secondcalc);
        pushButton_percents->setObjectName(QString::fromUtf8("pushButton_percents"));
        pushButton_percents->setGeometry(QRect(200, 150, 101, 81));
        pushButton_percents->setFont(font1);
        pushButton_percents->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #cbc197;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        pushButton_8s = new QPushButton(secondcalc);
        pushButton_8s->setObjectName(QString::fromUtf8("pushButton_8s"));
        pushButton_8s->setGeometry(QRect(100, 230, 101, 81));
        pushButton_8s->setFont(font1);
        pushButton_8s->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        pushButton_subs = new QPushButton(secondcalc);
        pushButton_subs->setObjectName(QString::fromUtf8("pushButton_subs"));
        pushButton_subs->setGeometry(QRect(300, 310, 101, 81));
        pushButton_subs->setFont(font1);
        pushButton_subs->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0D6;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        pushButton_5s = new QPushButton(secondcalc);
        pushButton_5s->setObjectName(QString::fromUtf8("pushButton_5s"));
        pushButton_5s->setGeometry(QRect(100, 310, 101, 81));
        pushButton_5s->setFont(font1);
        pushButton_5s->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        pushButton_2s = new QPushButton(secondcalc);
        pushButton_2s->setObjectName(QString::fromUtf8("pushButton_2s"));
        pushButton_2s->setGeometry(QRect(100, 390, 101, 81));
        pushButton_2s->setFont(font1);
        pushButton_2s->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        pushButton_6s = new QPushButton(secondcalc);
        pushButton_6s->setObjectName(QString::fromUtf8("pushButton_6s"));
        pushButton_6s->setGeometry(QRect(200, 310, 101, 81));
        pushButton_6s->setFont(font1);
        pushButton_6s->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        pushButton_dots = new QPushButton(secondcalc);
        pushButton_dots->setObjectName(QString::fromUtf8("pushButton_dots"));
        pushButton_dots->setGeometry(QRect(200, 470, 101, 81));
        pushButton_dots->setFont(font1);
        pushButton_dots->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        pushButton_Enters = new QPushButton(secondcalc);
        pushButton_Enters->setObjectName(QString::fromUtf8("pushButton_Enters"));
        pushButton_Enters->setGeometry(QRect(300, 470, 201, 81));
        pushButton_Enters->setFont(font1);
        pushButton_Enters->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #485b93;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        pushButton_returns = new QPushButton(secondcalc);
        pushButton_returns->setObjectName(QString::fromUtf8("pushButton_returns"));
        pushButton_returns->setGeometry(QRect(0, 520, 101, 31));
        QFont font2;
        font2.setPointSize(8);
        pushButton_returns->setFont(font2);
        pushButton_3s = new QPushButton(secondcalc);
        pushButton_3s->setObjectName(QString::fromUtf8("pushButton_3s"));
        pushButton_3s->setGeometry(QRect(200, 390, 101, 81));
        pushButton_3s->setFont(font1);
        pushButton_3s->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        pushButton_4s = new QPushButton(secondcalc);
        pushButton_4s->setObjectName(QString::fromUtf8("pushButton_4s"));
        pushButton_4s->setGeometry(QRect(0, 310, 101, 81));
        pushButton_4s->setFont(font1);
        pushButton_4s->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        pushButton_adds = new QPushButton(secondcalc);
        pushButton_adds->setObjectName(QString::fromUtf8("pushButton_adds"));
        pushButton_adds->setGeometry(QRect(300, 390, 101, 81));
        pushButton_adds->setFont(font1);
        pushButton_adds->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0D6;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        pushButton_divs = new QPushButton(secondcalc);
        pushButton_divs->setObjectName(QString::fromUtf8("pushButton_divs"));
        pushButton_divs->setGeometry(QRect(400, 230, 101, 81));
        pushButton_divs->setFont(font1);
        pushButton_divs->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0D6;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        pushButton_muls = new QPushButton(secondcalc);
        pushButton_muls->setObjectName(QString::fromUtf8("pushButton_muls"));
        pushButton_muls->setGeometry(QRect(300, 230, 101, 81));
        pushButton_muls->setFont(font1);
        pushButton_muls->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0D6;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        pushButton_signs = new QPushButton(secondcalc);
        pushButton_signs->setObjectName(QString::fromUtf8("pushButton_signs"));
        pushButton_signs->setGeometry(QRect(300, 150, 101, 81));
        pushButton_signs->setFont(font1);
        pushButton_signs->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #cbc197;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        pushButton_1s = new QPushButton(secondcalc);
        pushButton_1s->setObjectName(QString::fromUtf8("pushButton_1s"));
        pushButton_1s->setGeometry(QRect(0, 390, 101, 81));
        pushButton_1s->setFont(font1);
        pushButton_1s->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        pushButton_roots = new QPushButton(secondcalc);
        pushButton_roots->setObjectName(QString::fromUtf8("pushButton_roots"));
        pushButton_roots->setGeometry(QRect(400, 310, 101, 81));
        pushButton_roots->setFont(font1);
        pushButton_roots->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0D6;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        pushButton_7s = new QPushButton(secondcalc);
        pushButton_7s->setObjectName(QString::fromUtf8("pushButton_7s"));
        pushButton_7s->setGeometry(QRect(0, 230, 101, 81));
        pushButton_7s->setFont(font1);
        pushButton_7s->setMouseTracking(false);
        pushButton_7s->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        pushButton_7s->setIconSize(QSize(50, 50));

        retranslateUi(secondcalc);

        QMetaObject::connectSlotsByName(secondcalc);
    } // setupUi

    void retranslateUi(QWidget *secondcalc)
    {
        secondcalc->setWindowTitle(QApplication::translate("secondcalc", "secondcalc", nullptr));
        labels->setText(QApplication::translate("secondcalc", "0", nullptr));
        pushButton_squares->setText(QApplication::translate("secondcalc", "x\302\262", nullptr));
        pushButton_Cs->setText(QApplication::translate("secondcalc", "C", nullptr));
        pushButton_0s->setText(QApplication::translate("secondcalc", "0", nullptr));
        textEdit->setHtml(QApplication::translate("secondcalc", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Calculator</p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButton_9s->setText(QApplication::translate("secondcalc", "9", nullptr));
        pushButton_undos->setText(QApplication::translate("secondcalc", "\342\216\214", nullptr));
        pushButton_percents->setText(QApplication::translate("secondcalc", "%", nullptr));
        pushButton_8s->setText(QApplication::translate("secondcalc", "8", nullptr));
        pushButton_subs->setText(QApplication::translate("secondcalc", "-", nullptr));
        pushButton_5s->setText(QApplication::translate("secondcalc", "5", nullptr));
        pushButton_2s->setText(QApplication::translate("secondcalc", "2", nullptr));
        pushButton_6s->setText(QApplication::translate("secondcalc", "6", nullptr));
        pushButton_dots->setText(QApplication::translate("secondcalc", ".", nullptr));
        pushButton_Enters->setText(QApplication::translate("secondcalc", "=", nullptr));
        pushButton_returns->setText(QApplication::translate("secondcalc", "Return", nullptr));
        pushButton_3s->setText(QApplication::translate("secondcalc", "3", nullptr));
        pushButton_4s->setText(QApplication::translate("secondcalc", "4", nullptr));
        pushButton_adds->setText(QApplication::translate("secondcalc", "+", nullptr));
        pushButton_divs->setText(QApplication::translate("secondcalc", "/", nullptr));
        pushButton_muls->setText(QApplication::translate("secondcalc", "*", nullptr));
        pushButton_signs->setText(QApplication::translate("secondcalc", "+/-", nullptr));
        pushButton_1s->setText(QApplication::translate("secondcalc", "1", nullptr));
        pushButton_roots->setText(QApplication::translate("secondcalc", "\342\210\232 ", nullptr));
        pushButton_7s->setText(QApplication::translate("secondcalc", "7", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secondcalc: public Ui_secondcalc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDCALC_H
