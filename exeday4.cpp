#include "exeday4.h"
#include "ui_exeday4.h"

exeday4::exeday4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::exeday4)
{
    ui->setupUi(this);
}

exeday4::~exeday4()
{
    delete ui;
}
