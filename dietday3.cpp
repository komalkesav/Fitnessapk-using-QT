#include "dietday3.h"
#include "ui_dietday3.h"

dietday3::dietday3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dietday3)
{
    ui->setupUi(this);
}

dietday3::~dietday3()
{
    delete ui;
}
