#include "owexeday4.h"
#include "ui_owexeday4.h"

owexeday4::owexeday4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::owexeday4)
{
    ui->setupUi(this);
}

owexeday4::~owexeday4()
{
    delete ui;
}
