#include "dietday4.h"
#include "ui_dietday4.h"

dietday4::dietday4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dietday4)
{
    ui->setupUi(this);
}

dietday4::~dietday4()
{
    delete ui;
}
