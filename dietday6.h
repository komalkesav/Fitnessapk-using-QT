#ifndef DIETDAY6_H
#define DIETDAY6_H

#include <QDialog>

namespace Ui {
class dietday6;
}

class dietday6 : public QDialog
{
    Q_OBJECT

public:
    explicit dietday6(QWidget *parent = nullptr);
    ~dietday6();

private:
    Ui::dietday6 *ui;
};

#endif // DIETDAY6_H
