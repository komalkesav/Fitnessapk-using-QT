#include "owexeday5.h"
#include "ui_owexeday5.h"

owexeday5::owexeday5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::owexeday5)
{
    ui->setupUi(this);
}

owexeday5::~owexeday5()
{
    delete ui;
}
