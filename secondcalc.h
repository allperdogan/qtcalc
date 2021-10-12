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

    ~secondcalc() override;

public slots:
    void on_pushButton_return_clicked();

private:
    Ui::secondcalc *ui;
    qtcalc *calc;
};


#endif //QTCALC_SECONDCALC_H
