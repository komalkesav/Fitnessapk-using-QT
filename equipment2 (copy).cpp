#include "equipment2.h"
#include "ui_equipment2.h"

equipment2::equipment2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::equipment2)
{
    ui->setupUi(this);
}

equipment2::~equipment2()
{
    delete ui;
}
