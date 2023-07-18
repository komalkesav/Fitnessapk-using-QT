#ifndef EXEDAY1_H
#define EXEDAY1_H

#include <QDialog>

namespace Ui {
class exeday1;
}

class exeday1 : public QDialog
{
    Q_OBJECT

public:
    explicit exeday1(QWidget *parent = nullptr);
    ~exeday1();

private:
    Ui::exeday1 *ui;
};

#endif // EXEDAY1_H
