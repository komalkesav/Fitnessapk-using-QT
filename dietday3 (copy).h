#ifndef DIETDAY3_H
#define DIETDAY3_H

#include <QDialog>

namespace Ui {
class dietday3;
}

class dietday3 : public QDialog
{
    Q_OBJECT

public:
    explicit dietday3(QWidget *parent = nullptr);
    ~dietday3();

private:
    Ui::dietday3 *ui;
};

#endif // DIETDAY3_H
