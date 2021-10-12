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
    QLineEdit *label;
    QPushButton *pushButton_square;
    QPushButton *pushButton_C;
    QPushButton *pushButton_0;
    QTextEdit *textEdit;
    QPushButton *pushButton_9;
    QPushButton *pushButton_undo;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_8;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_Enter;
    QPushButton *pushButton_return;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_add;
    QPushButton *pushButton_div;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_sign;
    QPushButton *pushButton_1;
    QPushButton *pushButton_root;
    QPushButton *pushButton_7;

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
        label = new QLineEdit(secondcalc);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 501, 151));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu Condensed"));
        font.setPointSize(62);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;\n"
"}"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_square = new QPushButton(secondcalc);
        pushButton_square->setObjectName(QString::fromUtf8("pushButton_square"));
        pushButton_square->setGeometry(QRect(400, 390, 101, 81));
        QFont font1;
        font1.setPointSize(18);
        pushButton_square->setFont(font1);
        pushButton_square->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_C = new QPushButton(secondcalc);
        pushButton_C->setObjectName(QString::fromUtf8("pushButton_C"));
        pushButton_C->setGeometry(QRect(0, 150, 201, 81));
        pushButton_C->setFont(font1);
        pushButton_C->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_0 = new QPushButton(secondcalc);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(100, 470, 101, 81));
        pushButton_0->setFont(font1);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_9 = new QPushButton(secondcalc);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(200, 230, 101, 81));
        pushButton_9->setFont(font1);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_undo = new QPushButton(secondcalc);
        pushButton_undo->setObjectName(QString::fromUtf8("pushButton_undo"));
        pushButton_undo->setGeometry(QRect(400, 150, 101, 81));
        pushButton_undo->setFont(font1);
        pushButton_undo->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_percent = new QPushButton(secondcalc);
        pushButton_percent->setObjectName(QString::fromUtf8("pushButton_percent"));
        pushButton_percent->setGeometry(QRect(200, 150, 101, 81));
        pushButton_percent->setFont(font1);
        pushButton_percent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_8 = new QPushButton(secondcalc);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(100, 230, 101, 81));
        pushButton_8->setFont(font1);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_sub = new QPushButton(secondcalc);
        pushButton_sub->setObjectName(QString::fromUtf8("pushButton_sub"));
        pushButton_sub->setGeometry(QRect(300, 310, 101, 81));
        pushButton_sub->setFont(font1);
        pushButton_sub->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_5 = new QPushButton(secondcalc);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(100, 310, 101, 81));
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_2 = new QPushButton(secondcalc);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 390, 101, 81));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_6 = new QPushButton(secondcalc);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(200, 310, 101, 81));
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_dot = new QPushButton(secondcalc);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(200, 470, 101, 81));
        pushButton_dot->setFont(font1);
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_Enter = new QPushButton(secondcalc);
        pushButton_Enter->setObjectName(QString::fromUtf8("pushButton_Enter"));
        pushButton_Enter->setGeometry(QRect(300, 470, 201, 81));
        pushButton_Enter->setFont(font1);
        pushButton_Enter->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_return = new QPushButton(secondcalc);
        pushButton_return->setObjectName(QString::fromUtf8("pushButton_return"));
        pushButton_return->setGeometry(QRect(0, 520, 101, 31));
        QFont font2;
        font2.setPointSize(8);
        pushButton_return->setFont(font2);
        pushButton_3 = new QPushButton(secondcalc);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(200, 390, 101, 81));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_4 = new QPushButton(secondcalc);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 310, 101, 81));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_add = new QPushButton(secondcalc);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        pushButton_add->setGeometry(QRect(300, 390, 101, 81));
        pushButton_add->setFont(font1);
        pushButton_add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_div = new QPushButton(secondcalc);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setGeometry(QRect(400, 230, 101, 81));
        pushButton_div->setFont(font1);
        pushButton_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_mul = new QPushButton(secondcalc);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));
        pushButton_mul->setGeometry(QRect(300, 230, 101, 81));
        pushButton_mul->setFont(font1);
        pushButton_mul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_sign = new QPushButton(secondcalc);
        pushButton_sign->setObjectName(QString::fromUtf8("pushButton_sign"));
        pushButton_sign->setGeometry(QRect(300, 150, 101, 81));
        pushButton_sign->setFont(font1);
        pushButton_sign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_1 = new QPushButton(secondcalc);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(0, 390, 101, 81));
        pushButton_1->setFont(font1);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_root = new QPushButton(secondcalc);
        pushButton_root->setObjectName(QString::fromUtf8("pushButton_root"));
        pushButton_root->setGeometry(QRect(400, 310, 101, 81));
        pushButton_root->setFont(font1);
        pushButton_root->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_7 = new QPushButton(secondcalc);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 230, 101, 81));
        pushButton_7->setFont(font1);
        pushButton_7->setMouseTracking(false);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_7->setIconSize(QSize(50, 50));

        retranslateUi(secondcalc);

        QMetaObject::connectSlotsByName(secondcalc);
    } // setupUi

    void retranslateUi(QWidget *secondcalc)
    {
        secondcalc->setWindowTitle(QApplication::translate("secondcalc", "secondcalc", nullptr));
        label->setText(QApplication::translate("secondcalc", "0", nullptr));
        pushButton_square->setText(QApplication::translate("secondcalc", "x\302\262", nullptr));
        pushButton_C->setText(QApplication::translate("secondcalc", "C", nullptr));
        pushButton_0->setText(QApplication::translate("secondcalc", "0", nullptr));
        textEdit->setHtml(QApplication::translate("secondcalc", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Calculator</p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButton_9->setText(QApplication::translate("secondcalc", "9", nullptr));
        pushButton_undo->setText(QApplication::translate("secondcalc", "\342\216\214", nullptr));
        pushButton_percent->setText(QApplication::translate("secondcalc", "%", nullptr));
        pushButton_8->setText(QApplication::translate("secondcalc", "8", nullptr));
        pushButton_sub->setText(QApplication::translate("secondcalc", "-", nullptr));
        pushButton_5->setText(QApplication::translate("secondcalc", "5", nullptr));
        pushButton_2->setText(QApplication::translate("secondcalc", "2", nullptr));
        pushButton_6->setText(QApplication::translate("secondcalc", "6", nullptr));
        pushButton_dot->setText(QApplication::translate("secondcalc", ".", nullptr));
        pushButton_Enter->setText(QApplication::translate("secondcalc", "=", nullptr));
        pushButton_return->setText(QApplication::translate("secondcalc", "Return", nullptr));
        pushButton_3->setText(QApplication::translate("secondcalc", "3", nullptr));
        pushButton_4->setText(QApplication::translate("secondcalc", "4", nullptr));
        pushButton_add->setText(QApplication::translate("secondcalc", "+", nullptr));
        pushButton_div->setText(QApplication::translate("secondcalc", "/", nullptr));
        pushButton_mul->setText(QApplication::translate("secondcalc", "*", nullptr));
        pushButton_sign->setText(QApplication::translate("secondcalc", "+/-", nullptr));
        pushButton_1->setText(QApplication::translate("secondcalc", "1", nullptr));
        pushButton_root->setText(QApplication::translate("secondcalc", "\342\210\232 ", nullptr));
        pushButton_7->setText(QApplication::translate("secondcalc", "7", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secondcalc: public Ui_secondcalc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDCALC_H
