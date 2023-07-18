#include "equipment3.h"
#include "ui_equipment3.h"

equipment3::equipment3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::equipment3)
{
    ui->setupUi(this);
}

equipment3::~equipment3()
{
    delete ui;
}
