#ifndef OWSCREEN5_H
#define OWSCREEN5_H

#include <QDialog>
#include "owexeday1.h"
#include "owexeday2.h"
#include "owexeday3.h"
#include "owexeday4.h"
#include "owexeday5.h"
#include "owexeday6.h"
#include "owdietday1.h"
#include "owdietday2.h"
#include "owdietday3.h"
#include "owdietday4.h"
#include "owdietday5.h"
#include "owdietday6.h"
#include "owdietday7.h"
#include "screen6.h"
#include "equipment1.h"
#include "equipment2.h"
#include "equipment3.h"
#include "equipment4.h"

namespace Ui {
class owscreen5;
}

class owscreen5 : public QDialog
{
    Q_OBJECT

public:
    explicit owscreen5(QWidget *parent = nullptr);
    ~owscreen5();


private slots:
    void on_owexerd1_clicked();
    void on_owexerd2_clicked();
    void on_owexerd3_clicked();
    void on_owexerd4_clicked();
    void on_owexerd5_clicked();
    void on_owexerd6_clicked();
    void on_owdietd1_clicked();
    void on_owdietd2_clicked();
    void on_owdietd3_clicked();
    void on_owdietd4_clicked();
    void on_owdietd5_clicked();
    void on_owdietd6_clicked();
    void on_owdietd7_clicked();


    void on_ows5nxt_clicked();

    void on_eq1_clicked();

    void on_eq2_clicked();

    void on_eq3_clicked();

    void on_eq4_clicked();

private:
    Ui::owscreen5 *ui;
    owexeday1 *owd1;
    owexeday2 *owd2;
    owexeday3 *owd3;
    owexeday4 *owd4;
    owexeday5 *owd5;
    owexeday6 *owd6;
    owdietday1 *owdd1;
    owdietday2 *owdd2;
    owdietday3 *owdd3;
    owdietday4 *owdd4;
    owdietday5 *owdd5;
    owdietday6 *owdd6;
    owdietday7 *owdd7;
    screen6 *owsixthbox;
    equipment1 *oweq1;
    equipment2 *oweq2;
    equipment3 *oweq3;
    equipment4 *oweq4;
};

#endif // OWSCREEN5_H
