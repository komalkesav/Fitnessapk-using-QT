
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainwindow2.h"
#include "QLabel"
#include "QLineEdit"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->age->setMaximum(55);


    ui->age->setMinimum(15);
    ui->age->setValue(21);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_nextButton_clicked()
{
    secondbox = new mainwindow2(this);
    secondbox->text_set("Hello! " +ui->Fname->text()+" "+ui->Lname->text());
    secondbox->show();
    hide();
}
