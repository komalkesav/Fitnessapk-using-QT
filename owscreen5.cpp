#include "owscreen5.h"
#include "ui_owscreen5.h"
#include "screen6.h"

owscreen5::owscreen5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::owscreen5)
{
    ui->setupUi(this);
}

owscreen5::~owscreen5()
{
    delete ui;
}


void owscreen5::on_owexerd1_clicked()
{
    owd1 = new owexeday1(this);
    owd1-> show();

}

void owscreen5::on_owexerd2_clicked()
{
    owd2 = new owexeday2(this);
    owd2-> show();

}

void owscreen5::on_owexerd3_clicked()
{
    owd3 = new owexeday3(this);
    owd3-> show();

}

void owscreen5::on_owexerd4_clicked()
{
    owd4 = new owexeday4(this);
    owd4-> show();

}

void owscreen5::on_owexerd5_clicked()
{
    owd5 = new owexeday5(this);
    owd5-> show();

}

void owscreen5::on_owexerd6_clicked()
{
    owd6 = new owexeday6(this);
    owd6-> show();

}

void owscreen5::on_owdietd1_clicked()
{
    owdd1 = new owdietday1(this);
    owdd1-> show();

}

void owscreen5::on_owdietd2_clicked()
{
    owdd2 = new owdietday2(this);
    owdd2-> show();

}

void owscreen5::on_owdietd3_clicked()
{
    owdd3 = new owdietday3(this);
    owdd3-> show();

}

void owscreen5::on_owdietd4_clicked()
{
    owdd4 = new owdietday4(this);
    owdd4-> show();

}

void owscreen5::on_owdietd5_clicked()
{
    owdd5 = new owdietday5(this);
    owdd5-> show();

}

void owscreen5::on_owdietd6_clicked()
{
    owdd6 = new owdietday6(this);
    owdd6-> show();

}

void owscreen5::on_owdietd7_clicked()
{
    owdd7 = new owdietday7(this);
    owdd7-> show();

}

void owscreen5::on_ows5nxt_clicked()
{
    owsixthbox = new screen6(this);
    this->hide();
    owsixthbox -> show();
}


void owscreen5::on_eq1_clicked()
{
    oweq1 = new equipment1(this);
    oweq1 -> show();
}


void owscreen5::on_eq2_clicked()
{
    oweq2 = new equipment2(this);
    oweq2 -> show();
}


void owscreen5::on_eq3_clicked()
{
    oweq3 = new equipment3(this);
    oweq3 -> show();
}


void owscreen5::on_eq4_clicked()
{
    oweq4 = new equipment4(this);
    oweq4 -> show();
}

