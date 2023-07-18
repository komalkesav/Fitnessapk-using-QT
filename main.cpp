#include "mainwindow.h"
#include "mainwindow2.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

//    mainwindow2 x;
//    x.getheightval();
//    x.getweightval();





    return a.exec();
}
