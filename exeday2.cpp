#include "exeday2.h"
#include "ui_exeday2.h"

exeday2::exeday2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::exeday2)
{
    ui->setupUi(this);
}

exeday2::~exeday2()
{
    delete ui;
}
