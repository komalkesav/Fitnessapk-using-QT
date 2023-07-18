#ifndef EXEDAY2_H
#define EXEDAY2_H

#include <QDialog>

namespace Ui {
class exeday2;
}

class exeday2 : public QDialog
{
    Q_OBJECT

public:
    explicit exeday2(QWidget *parent = nullptr);
    ~exeday2();

private:
    Ui::exeday2 *ui;
};

#endif // EXEDAY2_H
