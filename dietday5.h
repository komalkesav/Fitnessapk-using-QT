#ifndef DIETDAY5_H
#define DIETDAY5_H

#include <QDialog>

namespace Ui {
class dietday5;
}

class dietday5 : public QDialog
{
    Q_OBJECT

public:
    explicit dietday5(QWidget *parent = nullptr);
    ~dietday5();

private:
    Ui::dietday5 *ui;
};

#endif // DIETDAY5_H
