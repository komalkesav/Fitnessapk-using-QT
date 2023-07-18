#include "exeday1.h"
#include "ui_exeday1.h"

exeday1::exeday1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::exeday1)
{
    ui->setupUi(this);
}

exeday1::~exeday1()
{
    delete ui;
}
