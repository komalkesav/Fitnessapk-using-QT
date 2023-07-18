#include "hscreen5.h"
#include "ui_hscreen5.h"
#include "screen6.h"
#include "equipment1.h"
#include "equipment2.h"
#include "equipment3.h"
#include "equipment4.h"


hscreen5::hscreen5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hscreen5)
{
    ui->setupUi(this);
}

hscreen5::~hscreen5()
{
    delete ui;
}


void hscreen5::on_hexerd1_clicked()
{
    hd1 = new hexeday1(this);
    hd1-> show();

}

void hscreen5::on_hexerd2_clicked()
{
    hd2 = new hexeday2(this);
    hd2-> show();

}

void hscreen5::on_hexerd3_clicked()
{
    hd3 = new hexeday3(this);
    hd3-> show();

}

void hscreen5::on_hexerd4_clicked()
{
    hd4 = new hexeday4(this);
    hd4-> show();

}

void hscreen5::on_hexerd5_clicked()
{
    hd5 = new hexeday5(this);
    hd5-> show();

}

void hscreen5::on_hexerd6_clicked()
{
    hd6 = new hexeday6(this);
    hd6-> show();

}

void hscreen5::on_hdietd1_clicked()
{
    hdd1 = new hdietday1(this);
    hdd1-> show();

}

void hscreen5::on_hdietd2_clicked()
{
    hdd2 = new hdietday2(this);
    hdd2-> show();

}

void hscreen5::on_hdietd3_clicked()
{
    hdd3 = new hdietday3(this);
    hdd3-> show();

}

void hscreen5::on_hdietd4_clicked()
{
    hdd4 = new hdietday4(this);
    hdd4-> show();

}

void hscreen5::on_hdietd5_clicked()
{
    hdd5 = new hdietday5(this);
    hdd5-> show();

}

void hscreen5::on_hdietd6_clicked()
{
    hdd6 = new hdietday6(this);
    hdd6-> show();

}

void hscreen5::on_hdietd7_clicked()
{
    hdd7 = new hdietday7(this);
    hdd7-> show();

}

void hscreen5::on_hs5nxt_clicked()
{
    hsixthbox = new screen6(this);
    this->hide();
    hsixthbox->show();
}


void hscreen5::on_eq1_clicked()
{
    heq1 = new equipment1(this);
    heq1 -> show();
}


void hscreen5::on_eq2_clicked()
{
    heq2 = new equipment2(this);
    heq2 -> show();
}


void hscreen5::on_eq3_clicked()
{
    heq3 = new equipment3(this);
    heq3 -> show();
}


void hscreen5::on_eq4_clicked()
{
    heq4 = new equipment4(this);
    heq4 -> show();
}

