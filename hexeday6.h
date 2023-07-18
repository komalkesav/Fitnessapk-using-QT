#ifndef HEXEDAY6_H
#define HEXEDAY6_H

#include <QDialog>

namespace Ui {
class hexeday6;
}

class hexeday6 : public QDialog
{
    Q_OBJECT

public:
    explicit hexeday6(QWidget *parent = nullptr);
    ~hexeday6();

private:
    Ui::hexeday6 *ui;
};

#endif // HEXEDAY6_H
