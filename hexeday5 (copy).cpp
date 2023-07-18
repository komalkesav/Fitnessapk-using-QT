#include "hexeday5.h"
#include "ui_hexeday5.h"

hexeday5::hexeday5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hexeday5)
{
    ui->setupUi(this);
}

hexeday5::~hexeday5()
{
    delete ui;
}
