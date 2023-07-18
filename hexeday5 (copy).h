#ifndef HEXEDAY5_H
#define HEXEDAY5_H

#include <QDialog>

namespace Ui {
class hexeday5;
}

class hexeday5 : public QDialog
{
    Q_OBJECT

public:
    explicit hexeday5(QWidget *parent = nullptr);
    ~hexeday5();

private:
    Ui::hexeday5 *ui;
};

#endif // HEXEDAY5_H
