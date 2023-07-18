#include "owexeday6.h"
#include "ui_owexeday6.h"

owexeday6::owexeday6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::owexeday6)
{
    ui->setupUi(this);
}

owexeday6::~owexeday6()
{
    delete ui;
}
