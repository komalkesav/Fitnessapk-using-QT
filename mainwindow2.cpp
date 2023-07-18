#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include "mainwindow.h"
#include "QLineEdit"
#include "QRadioButton"
#include "QMainWindow"
#include "QLabel"
#include "screen3.h"


mainwindow2::mainwindow2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainwindow2)
{
    ui->setupUi(this);
}

mainwindow2::~mainwindow2()
{
    delete ui;
}


void mainwindow2::on_s2next_clicked()
{
    thirdbox = new screen3(height, weight, this);
    this->hide();
    thirdbox->show();

}

//QLabel mainwindow2::getheightval()
//{
//    hval = ui-> heightval;
//    return hval;
//}

//QLabel mainwindow2::getweightval()
//{
//    wval = ui->weightval;
//    return wval;
//}

void mainwindow2::on_calculatebutton_clicked()
{
    this->height = ui ->heightval->text().toDouble();
    this->height = this->height/100;
    this->weight = ui ->weightval->text().toDouble();
   // screen4 *hvalue = new screen4(this->getheightval());
   // screen4 *wvalue = new screen4(this->getweightval());
    double bmi = weight/pow(height,2);
    QString result = "Your BMI is: " +QString::number(bmi) + "\n";
    if(bmi<18.5)
    {
        result += "You are underweight";
    }
    else if(bmi>=18.5 && bmi<=24.9)
    {
        result += "You are fit";
    }
    else if(bmi>=25 && bmi<=50)
    {
        result += "You are overweight";
    }
    else
    {
        result += "Invalid Input";
    }

    ui->bmidisplay->setText(result);
}

void mainwindow2::text_set(QString name)
{
    ui->DisplayName->setText(name);
}


