#include "owexeday2.h"
#include "ui_owexeday2.h"

owexeday2::owexeday2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::owexeday2)
{
    ui->setupUi(this);
}

owexeday2::~owexeday2()
{
    delete ui;
}
