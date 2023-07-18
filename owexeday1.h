#ifndef OWEXEDAY1_H
#define OWEXEDAY1_H

#include <QDialog>

namespace Ui {
class owexeday1;
}

class owexeday1 : public QDialog
{
    Q_OBJECT

public:
    explicit owexeday1(QWidget *parent = nullptr);
    ~owexeday1();

private:
    Ui::owexeday1 *ui;
};

#endif // OWEXEDAY1_H
