#ifndef HSCREEN5_H
#define HSCREEN5_H

#include <QDialog>
#include "hexeday1.h"
#include "hexeday2.h"
#include "hexeday3.h"
#include "hexeday4.h"
#include "hexeday5.h"
#include "hexeday6.h"
#include "hdietday1.h"
#include "hdietday2.h"
#include "hdietday3.h"
#include "hdietday4.h"
#include "hdietday5.h"
#include "hdietday6.h"
#include "hdietday7.h"
#include "screen6.h"
#include "equipment1.h"
#include "equipment2.h"
#include "equipment3.h"
#include "equipment4.h"


namespace Ui {
class hscreen5;
}

class hscreen5 : public QDialog
{
    Q_OBJECT

public:
    explicit hscreen5(QWidget *parent = nullptr);
    ~hscreen5();

private slots:
    void on_hexerd1_clicked();
    void on_hexerd2_clicked();
    void on_hexerd3_clicked();
    void on_hexerd4_clicked();
    void on_hexerd5_clicked();
    void on_hexerd6_clicked();
    void on_hdietd1_clicked();
    void on_hdietd2_clicked();
    void on_hdietd3_clicked();
    void on_hdietd4_clicked();
    void on_hdietd5_clicked();
    void on_hdietd6_clicked();
    void on_hdietd7_clicked();

    void on_hs5nxt_clicked();

    void on_eq1_clicked();

    void on_eq2_clicked();

    void on_eq3_clicked();

    void on_eq4_clicked();

private:
    Ui::hscreen5 *ui;
    hexeday1 *hd1;
    hexeday2 *hd2;
    hexeday3 *hd3;
    hexeday4 *hd4;
    hexeday5 *hd5;
    hexeday6 *hd6;
    hdietday1 *hdd1;
    hdietday2 *hdd2;
    hdietday3 *hdd3;
    hdietday4 *hdd4;
    hdietday5 *hdd5;
    hdietday6 *hdd6;
    hdietday7 *hdd7;
    screen6 *hsixthbox;
    equipment1 *heq1;
    equipment2 *heq2;
    equipment3 *heq3;
    equipment4 *heq4;

};

#endif // HSCREEN5_H
