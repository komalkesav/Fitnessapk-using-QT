#include "screen4.h"
#include "ui_screen4.h"
#include "mainwindow2.h"
#include "QString"
#include <QButtonGroup>

screen4::screen4(double height, double weight, QWidget *parent) :
    QDialog(parent), hval(height), wval(weight),
    ui(new Ui::screen4)
{
    ui->setupUi(this);
    QButtonGroup* radio_group3 = new QButtonGroup(this);
    radio_group3->addButton(ui->q2op1);
    radio_group3->addButton(ui->q2op2);
    radio_group3->addButton(ui->q2op3);

}
screen4::~screen4()
{
    delete ui;
    ui->days->setMaximum(10);
    ui->days->setMinimum(1);
    ui->days->setValue(1);

}

void screen4::on_s4nxt_clicked()
{
    double bmi = wval/pow(hval,2);
    if(bmi<18.4)
    {
        fifthbox = new screen5(this);
        fifthbox -> show();
        this->hide();
    }

    if(bmi>=18.5 && bmi<=24.9)
    {
        hfifthbox = new hscreen5(this);
        hfifthbox -> show();
        this->hide();
    }

    if(bmi>=25 && bmi<=29.9)
    {
        owfifthbox = new owscreen5(this);
        this->hide();
        owfifthbox -> show();
    }

}
