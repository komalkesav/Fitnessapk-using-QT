#include "owdietday6.h"
#include "ui_owdietday6.h"

owdietday6::owdietday6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::owdietday6)
{
    ui->setupUi(this);
}

owdietday6::~owdietday6()
{
    delete ui;
}
