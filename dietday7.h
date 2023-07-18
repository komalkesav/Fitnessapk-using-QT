#ifndef DIETDAY7_H
#define DIETDAY7_H

#include <QDialog>

namespace Ui {
class dietday7;
}

class dietday7 : public QDialog
{
    Q_OBJECT

public:
    explicit dietday7(QWidget *parent = nullptr);
    ~dietday7();

private:
    Ui::dietday7 *ui;
};

#endif // DIETDAY7_H
