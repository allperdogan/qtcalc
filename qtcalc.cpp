//
// Created by alper on 8.10.2021.
//

// You may need to build the project (run Qt uic code generator) to get "ui_qtcalc.h" resolved

#include "qtcalc.h"
#include "ui_qtcalc.h"
#include "math.h"
#include <string>
#include "secondcalc.h"
qtcalc::qtcalc(QWidget *parent) :

QWidget(parent), ui(new Ui::qtcalc)
{
// signals and slots (clicked with digit_pressed)
    ui->setupUi(this);
    connect(ui->pushButton_0,SIGNAL(clicked()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_1,SIGNAL(clicked()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_8,SIGNAL(clicked()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_9,SIGNAL(clicked()),this,SLOT(digit_pressed()));
    sec = new secondcalc();
    ui->pushButton_add->setCheckable(true);
    ui->pushButton_sub->setCheckable(true);
    ui->pushButton_mul->setCheckable(true);
    ui->pushButton_div->setCheckable(true);
}

qtcalc::~qtcalc()
{
    delete ui;
}

// pressing numbers (more than one buton click, puts a number next to the number)
void qtcalc::digit_pressed()
{
    QPushButton * button = (QPushButton*) sender();

    if((ui->pushButton_add->isChecked() || ui->pushButton_sub->isChecked() || ui->pushButton_mul->isChecked() || ui->pushButton_div->isChecked()) && (! userTyping))
    {
        labelnumber = (button->text()).toDouble();
        userTyping = true;
    }

    else
    {
        labelnumber = (ui->label->text() + button->text()).toDouble();
    }

    QString newlabel = QString::number(labelnumber);
    ui->label->setText(newlabel);
}

// pressing . (decimal numbers)
void qtcalc::on_pushButton_dot_clicked()
{
    ui->label->setText(ui->label->text() + ".");
}

//pressing +/- (change sign)
void qtcalc::on_pushButton_sign_clicked()
{
    double labelnummer = ui->label->text().toDouble();
    labelnummer =labelnummer * -1;
    QString newlabel =QString::number(labelnummer);
    ui->label->setText(newlabel);
}

//pressing % (percent)
void qtcalc::on_pushButton_percent_clicked()
{
    double labelnummer = ui->label->text().toDouble();
    labelnummer =labelnummer / 100;
    QString newlabel =QString::number(labelnummer);
    ui->label->setText(newlabel);
}

// pressing x^2 (square)
void qtcalc::on_pushButton_square_clicked()
{
    double labelnummer = ui->label->text().toDouble();
    labelnummer =labelnummer * labelnummer;
    QString newlabel =QString::number(labelnummer);
    ui->label->setText(newlabel);
}

void qtcalc::on_pushButton_root_clicked()
{
    double labelnummer = ui->label->text().toDouble();
    labelnummer = sqrt(labelnummer);
    QString newlabel =QString::number(labelnummer);
    ui->label->setText(newlabel);
}

void qtcalc::on_pushButton_adv_clicked()
{
    sec->show();
    hide();
}

//pressing Clear (there is a bug!!!!!!!!!!!!!!!!)
void qtcalc::on_pushButton_C_clicked()
{
    ui->pushButton_add->setCheckable(true);
    ui->pushButton_sub->setCheckable(true);
    ui->pushButton_mul->setCheckable(true);
    ui->pushButton_div->setCheckable(true);
    userTyping = false;
    ui->label->setText("0");
    num1=0;
    num2=0;
    labelnumber=0;
}

//pressing Enter to solution (which op??) choose operation
void qtcalc::on_pushButton_Enter_clicked()
{
    QString newlabel;
    num2 = ui->label->text().toDouble();

    if(ui->pushButton_add->isChecked())
    {
        labelnumber = num1 + num2;
        newlabel = QString::number(labelnumber);
        ui->label->setText(newlabel);
        ui->pushButton_add->setChecked(false);
    }
    else if(ui->pushButton_sub->isChecked())
    {
        labelnumber = num1 - num2;
        newlabel = QString::number(labelnumber);
        ui->label->setText(newlabel);
        ui->pushButton_sub->setChecked(false);
    }
    else if(ui->pushButton_mul->isChecked())
    {
        labelnumber = num1 * num2;
        newlabel = QString::number(labelnumber);
        ui->label->setText(newlabel);
        ui->pushButton_mul->setChecked(false);
    }
    else if(ui->pushButton_div->isChecked())
    {
        labelnumber = num1 / num2;
        newlabel = QString::number(labelnumber);
        ui->label->setText(newlabel);
        ui->pushButton_div->setChecked(false);
    }
    userTyping = false;
}

//pressing + (add)
void qtcalc::on_pushButton_add_clicked()
{
    QPushButton * button = (QPushButton*) sender();
    num1 = ui->label->text().toDouble();
    button->setChecked(true);
}

//pressing - (subtraction)
void qtcalc::on_pushButton_sub_clicked()
{
    QPushButton * button = (QPushButton*) sender();
    num1 = ui->label->text().toDouble();
    button->setChecked(true);
}

//pressing * (multiplication)
void qtcalc::on_pushButton_mul_clicked()
{
    QPushButton * button = (QPushButton*) sender();
    num1 = ui->label->text().toDouble();
    button->setChecked(true);
}

//pressing / (division)
void qtcalc::on_pushButton_div_clicked()
{
    QPushButton * button = (QPushButton*) sender();
    num1 = ui->label->text().toDouble();
    button->setChecked(true);
}
