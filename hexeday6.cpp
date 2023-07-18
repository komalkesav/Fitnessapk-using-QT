#include "hexeday6.h"
#include "ui_hexeday6.h"

hexeday6::hexeday6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hexeday6)
{
    ui->setupUi(this);
}

hexeday6::~hexeday6()
{
    delete ui;
}
