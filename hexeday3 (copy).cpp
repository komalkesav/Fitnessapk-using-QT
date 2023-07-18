#include "hexeday3.h"
#include "ui_hexeday3.h"

hexeday3::hexeday3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hexeday3)
{
    ui->setupUi(this);
}

hexeday3::~hexeday3()
{
    delete ui;
}
