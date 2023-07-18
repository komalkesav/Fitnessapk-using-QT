#ifndef DIETDAY2_H
#define DIETDAY2_H

#include <QDialog>

namespace Ui {
class dietday2;
}

class dietday2 : public QDialog
{
    Q_OBJECT

public:
    explicit dietday2(QWidget *parent = nullptr);
    ~dietday2();

private:
    Ui::dietday2 *ui;
};

#endif // DIETDAY2_H
