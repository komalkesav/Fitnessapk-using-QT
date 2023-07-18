#include "screen6.h"
#include "ui_screen6.h"
#include <QApplication>
#include <QButtonGroup>

screen6::screen6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::screen6)
{
    ui->setupUi(this);
    QButtonGroup* radio_group = new QButtonGroup(this);
    radio_group->addButton(ui->q1opt1);
    radio_group->addButton(ui->q1opt2);
    radio_group->addButton(ui->q1opt3);

    QButtonGroup* radio_group1 =new QButtonGroup(this);
    radio_group1->addButton(ui->q2opt1);
    radio_group1->addButton(ui->q2opt2);
    connect(ui->pushButton, &QPushButton::clicked, this, [=](){
        QApplication::quit();
    });
}

screen6::~screen6()
{
    delete ui;
}

