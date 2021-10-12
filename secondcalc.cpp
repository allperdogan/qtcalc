//
// Created by alper on 12.10.2021.
//

// You may need to build the project (run Qt uic code generator) to get "ui_secondcalc.h" resolved

#include "secondcalc.h"
#include "ui_secondcalc.h"
#include "qtcalc.h"

secondcalc::secondcalc(QWidget *parent) :
        QWidget(parent), ui(new Ui::secondcalc) {
    ui->setupUi(this);
    calc = new qtcalc();
}

secondcalc::~secondcalc() {
    delete ui;
}

void secondcalc::on_pushButton_return_clicked()
{
    //calc->show();

}
