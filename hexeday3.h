#ifndef HEXEDAY3_H
#define HEXEDAY3_H

#include <QDialog>

namespace Ui {
class hexeday3;
}

class hexeday3 : public QDialog
{
    Q_OBJECT

public:
    explicit hexeday3(QWidget *parent = nullptr);
    ~hexeday3();

private:
    Ui::hexeday3 *ui;
};

#endif // HEXEDAY3_H
