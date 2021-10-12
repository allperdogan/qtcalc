//
// Created by alper on 12.10.2021.
//

#ifndef QTCALC_SECONDCALC_H
#define QTCALC_SECONDCALC_H

#include <QWidget>
#include "qtcalc.h"


QT_BEGIN_NAMESPACE
namespace Ui { class secondcalc; }
QT_END_NAMESPACE
class qtcalc;
class secondcalc : public QWidget {
Q_OBJECT

public:
    explicit secondcalc(QWidget *parent = nullptr);
    double num1s;
    double num2s;
    bool userTyping;
    double labelnumbers;
    char op;
    ~secondcalc() override;

public slots:
    void on_pushButton_returns_clicked();
    void digit_presseds();
    void on_pushButton_adds_clicked();
    void on_pushButton_subs_clicked();
    void on_pushButton_muls_clicked();
    void on_pushButton_divs_clicked();
    void on_pushButton_dots_clicked();
    void on_pushButton_signs_clicked();
    void on_pushButton_percents_clicked();
    void on_pushButton_Cs_clicked();
    void on_pushButton_Enters_clicked();
    void on_pushButton_squares_clicked();
    void on_pushButton_roots_clicked();

private:
    Ui::secondcalc *ui;
    //qtcalc *calc;
};


#endif //QTCALC_SECONDCALC_H
