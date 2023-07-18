#include "screen3.h"
#include "ui_screen3.h"
#include <QButtonGroup>

screen3::screen3(double height, double weight, QWidget *parent) :
    QDialog(parent), height(height), weight(weight),
    ui(new Ui::screen3)
{
    ui->setupUi(this);
    QButtonGroup* radio_group = new QButtonGroup(this);
    radio_group->addButton(ui->q1option1);
    radio_group->addButton(ui->q1option2);
    radio_group->addButton(ui->q1option3);
    radio_group->addButton(ui->q1option4);
    QButtonGroup* radio_group1 =new QButtonGroup(this);
    radio_group1->addButton(ui->q2option1);
    radio_group1->addButton(ui->q2option2);
    radio_group1->addButton(ui->q2option3);
    radio_group1->addButton(ui->q2option4);
    QButtonGroup* radio_group2 =new QButtonGroup(this);
    radio_group2->addButton(ui->yesButton);
    radio_group2->addButton(ui->noButton);
}

screen3::~screen3()
{
    delete ui;
}

void screen3::on_s3nxt_clicked()
{
    fourthbox = new screen4(height, weight, this);
    this->hide();
    fourthbox->show();


}
