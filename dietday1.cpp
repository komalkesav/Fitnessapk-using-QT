#include "dietday1.h"
#include "ui_dietday1.h"

dietday1::dietday1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dietday1)
{
    ui->setupUi(this);
}

dietday1::~dietday1()
{
    delete ui;
}
