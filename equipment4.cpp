#include "equipment4.h"
#include "ui_equipment4.h"

equipment4::equipment4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::equipment4)
{
    ui->setupUi(this);
}

equipment4::~equipment4()
{
    delete ui;
}
