#include "exeday5.h"
#include "ui_exeday5.h"

exeday5::exeday5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::exeday5)
{
    ui->setupUi(this);
}

exeday5::~exeday5()
{
    delete ui;
}
