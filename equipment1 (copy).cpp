#include "equipment1.h"
#include "ui_equipment1.h"

equipment1::equipment1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::equipment1)
{
    ui->setupUi(this);
}

equipment1::~equipment1()
{
    delete ui;
}
