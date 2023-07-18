#include "exeday3.h"
#include "ui_exeday3.h"

exeday3::exeday3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::exeday3)
{
    ui->setupUi(this);
}

exeday3::~exeday3()
{
    delete ui;
}
