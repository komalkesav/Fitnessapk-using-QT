#include "dietday6.h"
#include "ui_dietday6.h"

dietday6::dietday6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dietday6)
{
    ui->setupUi(this);
}

dietday6::~dietday6()
{
    delete ui;
}
