#ifndef OWDIETDAY6_H
#define OWDIETDAY6_H

#include <QDialog>

namespace Ui {
class owdietday6;
}

class owdietday6 : public QDialog
{
    Q_OBJECT

public:
    explicit owdietday6(QWidget *parent = nullptr);
    ~owdietday6();

private:
    Ui::owdietday6 *ui;
};

#endif // OWDIETDAY6_H
