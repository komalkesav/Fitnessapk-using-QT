#ifndef EQUIPMENT3_H
#define EQUIPMENT3_H

#include <QDialog>

namespace Ui {
class equipment3;
}

class equipment3 : public QDialog
{
    Q_OBJECT

public:
    explicit equipment3(QWidget *parent = nullptr);
    ~equipment3();

private:
    Ui::equipment3 *ui;
};

#endif // EQUIPMENT3_H
