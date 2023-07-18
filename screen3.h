#ifndef SCREEN3_H
#define SCREEN3_H

#include <QDialog>
#include "screen4.h"

namespace Ui {
class screen3;
}

class screen3 : public QDialog
{
    Q_OBJECT

public:
    explicit screen3(double height=0, double weight =0, QWidget *parent = nullptr);
    ~screen3();

private slots:
    void on_s3nxt_clicked();

private:
   double height, weight;
    Ui::screen3 *ui;
    screen4 *fourthbox;

};

#endif // SCREEN3_H
