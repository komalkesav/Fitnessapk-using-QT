#ifndef EXEDAY3_H
#define EXEDAY3_H

#include <QDialog>

namespace Ui {
class exeday3;
}

class exeday3 : public QDialog
{
    Q_OBJECT

public:
    explicit exeday3(QWidget *parent = nullptr);
    ~exeday3();

private:
    Ui::exeday3 *ui;
};

#endif // EXEDAY3_H
