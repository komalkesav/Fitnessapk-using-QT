#ifndef EQUIPMENT2_H
#define EQUIPMENT2_H

#include <QDialog>

namespace Ui {
class equipment2;
}

class equipment2 : public QDialog
{
    Q_OBJECT

public:
    explicit equipment2(QWidget *parent = nullptr);
    ~equipment2();

private:
    Ui::equipment2 *ui;
};

#endif // EQUIPMENT2_H
