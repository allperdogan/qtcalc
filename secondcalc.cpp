//
// Created by alper on 12.10.2021.
//

// You may need to build the project (run Qt uic code generator) to get "ui_secondcalc.h" resolved

#include "secondcalc.h"
#include "ui_secondcalc.h"
#include "math.h"

secondcalc::secondcalc(QWidget *parent) :
        QWidget(parent), ui(new Ui::secondcalc) {
    ui->setupUi(this);
    //calc = new qtcalc();
    ui->setupUi(this);
    connect(ui->pushButton_0s,SIGNAL(clicked()),this,SLOT(digit_presseds()));
    connect(ui->pushButton_1s,SIGNAL(clicked()),this,SLOT(digit_presseds()));
    connect(ui->pushButton_2s,SIGNAL(clicked()),this,SLOT(digit_presseds()));
    connect(ui->pushButton_3s,SIGNAL(clicked()),this,SLOT(digit_presseds()));
    connect(ui->pushButton_4s,SIGNAL(clicked()),this,SLOT(digit_presseds()));
    connect(ui->pushButton_5s,SIGNAL(clicked()),this,SLOT(digit_presseds()));
    connect(ui->pushButton_6s,SIGNAL(clicked()),this,SLOT(digit_presseds()));
    connect(ui->pushButton_7s,SIGNAL(clicked()),this,SLOT(digit_presseds()));
    connect(ui->pushButton_8s,SIGNAL(clicked()),this,SLOT(digit_presseds()));
    connect(ui->pushButton_9s,SIGNAL(clicked()),this,SLOT(digit_presseds()));

    ui->pushButton_adds->setCheckable(true);
    ui->pushButton_subs->setCheckable(true);
    ui->pushButton_muls->setCheckable(true);
    ui->pushButton_divs->setCheckable(true);
}

secondcalc::~secondcalc() {
    delete ui;
}


// pressing numbers (more than one buton click, puts a number next to the number)
void secondcalc::digit_presseds()
{
    QPushButton * button = (QPushButton*) sender();

    if((ui->pushButton_adds->isChecked() || ui->pushButton_subs->isChecked() || ui->pushButton_muls->isChecked() || ui->pushButton_divs->isChecked()) && (! userTyping))
    {
        labelnumbers = (button->text()).toDouble();
        userTyping = true;
    }

    else
    {
        labelnumbers = (ui->labels->text() + button->text()).toDouble();
    }

    QString newlabels = QString::number(labelnumbers);
    ui->labels->setText(newlabels);
}

// pressing . (decimal numbers)
void secondcalc::on_pushButton_dots_clicked()
{
    ui->labels->setText(ui->labels->text() + ".");
}

//pressing +/- (change sign)
void secondcalc::on_pushButton_signs_clicked()
{
    double labelnummers = ui->labels->text().toDouble();
    labelnummers =labelnummers * -1;
    QString newlabels =QString::number(labelnummers);
    ui->labels->setText(newlabels);
}

//pressing % (percent)
void secondcalc::on_pushButton_percents_clicked()
{
    double labelnummers = ui->labels->text().toDouble();
    labelnummers =labelnummers / 100;
    QString newlabels =QString::number(labelnummers);
    ui->labels->setText(newlabels);
}

// pressing x^2 (square)
void secondcalc::on_pushButton_squares_clicked()
{
    double labelnummers = ui->labels->text().toDouble();
    labelnummers =labelnummers * labelnummers;
    QString newlabels =QString::number(labelnummers);
    ui->labels->setText(newlabels);
}

void secondcalc::on_pushButton_roots_clicked()
{
    double labelnummers = ui->labels->text().toDouble();
    labelnummers = sqrt(labelnummers);
    QString newlabels =QString::number(labelnummers);
    ui->labels->setText(newlabels);
}

void secondcalc::on_pushButton_returns_clicked()
{
    hide();
}

//pressing Clear (there is a bug!!!!!!!!!!!!!!!!)
void secondcalc::on_pushButton_Cs_clicked()
{
    ui->pushButton_adds->setCheckable(true);
    ui->pushButton_subs->setCheckable(true);
    ui->pushButton_muls->setCheckable(true);
    ui->pushButton_divs->setCheckable(true);
    userTyping = false;
    ui->labels->setText("0");
    num1s=0;
    num2s=0;
    labelnumbers=0;
}

//pressing Enter to solution (which op??) choose operation
void secondcalc::on_pushButton_Enters_clicked()
{
    QString newlabels;
    num2s = ui->labels->text().toDouble();

    if(ui->pushButton_adds->isChecked())
    {
        labelnumbers = num1s + num2s;
        newlabels = QString::number(labelnumbers);
        ui->labels->setText(newlabels);
        ui->pushButton_adds->setChecked(false);
    }
    else if(ui->pushButton_subs->isChecked())
    {
        labelnumbers = num1s - num2s;
        newlabels = QString::number(labelnumbers);
        ui->labels->setText(newlabels);
        ui->pushButton_subs->setChecked(false);
    }
    else if(ui->pushButton_muls->isChecked())
    {
        labelnumbers = num1s * num2s;
        newlabels = QString::number(labelnumbers);
        ui->labels->setText(newlabels);
        ui->pushButton_muls->setChecked(false);
    }
    else if(ui->pushButton_divs->isChecked())
    {
        labelnumbers = num1s / num2s;
        newlabels = QString::number(labelnumbers);
        ui->labels->setText(newlabels);
        ui->pushButton_divs->setChecked(false);
    }
    userTyping = false;
}

//pressing + (add)
void secondcalc::on_pushButton_adds_clicked()
{
    QPushButton * button = (QPushButton*) sender();
    num1s = ui->labels->text().toDouble();
    button->setChecked(true);
}

//pressing - (subtraction)
void secondcalc::on_pushButton_subs_clicked()
{
    QPushButton * button = (QPushButton*) sender();
    num1s = ui->labels->text().toDouble();
    button->setChecked(true);
}

//pressing * (multiplication)
void secondcalc::on_pushButton_muls_clicked()
{
    QPushButton * button = (QPushButton*) sender();
    num1s = ui->labels->text().toDouble();
    button->setChecked(true);
}

//pressing / (division)
void secondcalc::on_pushButton_divs_clicked()
{
    QPushButton * button = (QPushButton*) sender();
    num1s = ui->labels->text().toDouble();
    button->setChecked(true);
}

