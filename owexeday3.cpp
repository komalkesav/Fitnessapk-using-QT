#include "owexeday3.h"
#include "ui_owexeday3.h"

owexeday3::owexeday3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::owexeday3)
{
    ui->setupUi(this);
}

owexeday3::~owexeday3()
{
    delete ui;
}
