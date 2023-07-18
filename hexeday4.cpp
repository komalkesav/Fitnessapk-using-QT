#include "hexeday4.h"
#include "ui_hexeday4.h"

hexeday4::hexeday4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hexeday4)
{
    ui->setupUi(this);
}

hexeday4::~hexeday4()
{
    delete ui;
}
