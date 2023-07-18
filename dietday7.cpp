#include "dietday7.h"
#include "ui_dietday7.h"

dietday7::dietday7(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dietday7)
{
    ui->setupUi(this);
}

dietday7::~dietday7()
{
    delete ui;
}
