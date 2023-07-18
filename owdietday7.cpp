#include "owdietday7.h"
#include "ui_owdietday7.h"

owdietday7::owdietday7(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::owdietday7)
{
    ui->setupUi(this);
}

owdietday7::~owdietday7()
{
    delete ui;
}
