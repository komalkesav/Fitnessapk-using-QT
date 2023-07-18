#ifndef SCREEN4_H
#define SCREEN4_H

#include <QDialog>
#include "screen5.h"
#include "hscreen5.h"
#include "owscreen5.h"

namespace Ui {
class screen4;
}

class screen4 : public QDialog
{
    Q_OBJECT





private:
    double wval, hval;
    Ui::screen4 *ui;
    screen5 *fifthbox;
    hscreen5 *hfifthbox;
    owscreen5 *owfifthbox;
private slots:
    void on_s4nxt_clicked();
public:
    explicit screen4(double height=0, double weight=0, QWidget *parent = nullptr);
    ~screen4();
};

#endif // SCREEN4_H
