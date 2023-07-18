#include "dietday2.h"
#include "ui_dietday2.h"

dietday2::dietday2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dietday2)
{
    ui->setupUi(this);
}

dietday2::~dietday2()
{
    delete ui;
}
