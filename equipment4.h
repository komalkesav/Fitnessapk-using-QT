#ifndef EQUIPMENT4_H
#define EQUIPMENT4_H

#include <QDialog>

namespace Ui {
class equipment4;
}

class equipment4 : public QDialog
{
    Q_OBJECT

public:
    explicit equipment4(QWidget *parent = nullptr);
    ~equipment4();

private:
    Ui::equipment4 *ui;
};

#endif // EQUIPMENT4_H
