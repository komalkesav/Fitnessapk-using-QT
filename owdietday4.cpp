#include "owdietday4.h"
#include "ui_owdietday4.h"

owdietday4::owdietday4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::owdietday4)
{
    ui->setupUi(this);
}

owdietday4::~owdietday4()
{
    delete ui;
}
