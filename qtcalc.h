//
// Created by alper on 8.10.2021.
//

#ifndef QTCALC_QTCALC_H
#define QTCALC_QTCALC_H

#include <QWidget>
#include "secondcalc.h"

QT_BEGIN_NAMESPACE
namespace Ui { class qtcalc; }
QT_END_NAMESPACE
class secondcalc;
class qtcalc : public QWidget {
Q_OBJECT

public:
    double num1;
    double num2;
    bool userTyping;
    double labelnumber;
    char op;
    explicit qtcalc(QWidget *parent = nullptr);
    ~qtcalc() override;

public slots:
    void digit_pressed();
    void on_pushButton_add_clicked();
    void on_pushButton_sub_clicked();
    void on_pushButton_mul_clicked();
    void on_pushButton_div_clicked();
    void on_pushButton_dot_clicked();
    void on_pushButton_sign_clicked();
    void on_pushButton_percent_clicked();
    void on_pushButton_C_clicked();
    void on_pushButton_Enter_clicked();
    void on_pushButton_square_clicked();
    void on_pushButton_root_clicked();
    void on_pushButton_adv_clicked();

private:
    Ui::qtcalc *ui;
    secondcalc *sec;
};


#endif //QTCALC_QTCALC_H
