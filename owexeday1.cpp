#include "owexeday1.h"
#include "ui_owexeday1.h"

owexeday1::owexeday1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::owexeday1)
{
    ui->setupUi(this);
}

owexeday1::~owexeday1()
{
    delete ui;
}
