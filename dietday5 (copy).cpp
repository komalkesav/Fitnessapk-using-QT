#include "dietday5.h"
#include "ui_dietday5.h"

dietday5::dietday5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dietday5)
{
    ui->setupUi(this);
}

dietday5::~dietday5()
{
    delete ui;
}
