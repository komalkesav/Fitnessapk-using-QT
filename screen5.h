#ifndef SCREEN5_H
#define SCREEN5_H

#include <QDialog>
#include "exeday1.h"
#include "exeday2.h"
#include "exeday3.h"
#include "exeday4.h"
#include "exeday5.h"
#include "exeday6.h"
#include "dietday1.h"
#include "dietday2.h"
#include "dietday3.h"
#include "dietday4.h"
#include "dietday5.h"
#include "dietday6.h"
#include "dietday7.h"
#include "screen6.h"
#include "equipment1.h"
#include "equipment2.h"
#include "equipment3.h"
#include "equipment4.h"

namespace Ui {
class screen5;
}

class screen5 : public QDialog
{
    Q_OBJECT

public:
    explicit screen5(QWidget *parent = nullptr);
    ~screen5();

private slots:
    void on_exerd1_clicked();
    void on_exerd2_clicked();
    void on_exerd3_clicked();
    void on_exerd4_clicked();
    void on_exerd5_clicked();
    void on_exerd6_clicked();
    void on_dietd1_clicked();
    void on_dietd2_clicked();
    void on_dietd3_clicked();
    void on_dietd4_clicked();
    void on_dietd5_clicked();
    void on_dietd6_clicked();
    void on_dietd7_clicked();




    void on_s5nxt_clicked();

    void on_eq1_clicked();

    void on_eq2_clicked();

    void on_eq3_clicked();

    void on_eq4_clicked();

private:
    Ui::screen5 *ui;
    exeday1 *d1;
    exeday2 *d2;
    exeday3 *d3;
    exeday4 *d4;
    exeday5 *d5;
    exeday6 *d6;
    dietday1 *dd1;
    dietday2 *dd2;
    dietday3 *dd3;
    dietday4 *dd4;
    dietday5 *dd5;
    dietday6 *dd6;
    dietday7 *dd7;
    screen6 *sixthbox;
    equipment1 *eq1;
    equipment2 *eq2;
    equipment3 *eq3;
    equipment4 *eq4;
};

#endif // SCREEN5_H
