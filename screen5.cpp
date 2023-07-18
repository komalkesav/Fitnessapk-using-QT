#include "screen5.h"
#include "ui_screen5.h"
#include "screen6.h"
#include "equipment1.h"
#include "equipment2.h"
#include "equipment3.h"
#include "equipment4.h"

screen5::screen5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::screen5)
{
    ui->setupUi(this);
}

screen5::~screen5()
{
    delete ui;
}

void screen5::on_exerd1_clicked()
{
    d1 = new exeday1(this);
    d1-> show();

}

void screen5::on_exerd2_clicked()
{
    d2 = new exeday2(this);
    d2-> show();

}

void screen5::on_exerd3_clicked()
{
    d3 = new exeday3(this);
    d3-> show();

}

void screen5::on_exerd4_clicked()
{
    d4 = new exeday4(this);
    d4-> show();

}

void screen5::on_exerd5_clicked()
{
    d5 = new exeday5(this);
    d5-> show();

}

void screen5::on_exerd6_clicked()
{
    d6 = new exeday6(this);
    d6-> show();

}

void screen5::on_dietd1_clicked()
{
    dd1 = new dietday1(this);
    dd1-> show();

}

void screen5::on_dietd2_clicked()
{
    dd2 = new dietday2(this);
    dd2-> show();

}

void screen5::on_dietd3_clicked()
{
    dd3 = new dietday3(this);
    dd3-> show();

}

void screen5::on_dietd4_clicked()
{
    dd4 = new dietday4(this);
    dd4-> show();

}

void screen5::on_dietd5_clicked()
{
    dd5 = new dietday5(this);
    dd5-> show();

}

void screen5::on_dietd6_clicked()
{
    dd6 = new dietday6(this);
    dd6-> show();

}

void screen5::on_dietd7_clicked()
{
    dd7 = new dietday7(this);
    dd7-> show();

}



void screen5::on_s5nxt_clicked()
{
    sixthbox = new screen6(this);
    this->hide();
    sixthbox->show();
}


void screen5::on_eq1_clicked()
{
    eq1 = new equipment1(this);
    eq1 -> show();
}


void screen5::on_eq2_clicked()
{
    eq2 = new equipment2(this);
    eq2 -> show();
}


void screen5::on_eq3_clicked()
{
    eq3 = new equipment3(this);
    eq3 -> show();
}


void screen5::on_eq4_clicked()
{
    eq4 = new equipment4(this);
    eq4 -> show();
}


