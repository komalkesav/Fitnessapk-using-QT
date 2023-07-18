#include "owdietday5.h"
#include "ui_owdietday5.h"

owdietday5::owdietday5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::owdietday5)
{
    ui->setupUi(this);
}

owdietday5::~owdietday5()
{
    delete ui;
}
