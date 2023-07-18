#ifndef OWEXEDAY5_H
#define OWEXEDAY5_H

#include <QDialog>

namespace Ui {
class owexeday5;
}

class owexeday5 : public QDialog
{
    Q_OBJECT

public:
    explicit owexeday5(QWidget *parent = nullptr);
    ~owexeday5();

private:
    Ui::owexeday5 *ui;
};

#endif // OWEXEDAY5_H
