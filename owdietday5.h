#ifndef OWDIETDAY5_H
#define OWDIETDAY5_H

#include <QDialog>

namespace Ui {
class owdietday5;
}

class owdietday5 : public QDialog
{
    Q_OBJECT

public:
    explicit owdietday5(QWidget *parent = nullptr);
    ~owdietday5();

private:
    Ui::owdietday5 *ui;
};

#endif // OWDIETDAY5_H
