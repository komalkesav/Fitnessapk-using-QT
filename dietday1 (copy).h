#ifndef DIETDAY1_H
#define DIETDAY1_H

#include <QDialog>

namespace Ui {
class dietday1;
}

class dietday1 : public QDialog
{
    Q_OBJECT

public:
    explicit dietday1(QWidget *parent = nullptr);
    ~dietday1();

private:
    Ui::dietday1 *ui;
};

#endif // DIETDAY1_H
