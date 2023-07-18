#ifndef EQUIPMENT1_H
#define EQUIPMENT1_H

#include <QDialog>

namespace Ui {
class equipment1;
}

class equipment1 : public QDialog
{
    Q_OBJECT

public:
    explicit equipment1(QWidget *parent = nullptr);
    ~equipment1();

private:
    Ui::equipment1 *ui;
};

#endif // EQUIPMENT1_H
