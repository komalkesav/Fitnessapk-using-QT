#ifndef OWDIETDAY7_H
#define OWDIETDAY7_H

#include <QDialog>

namespace Ui {
class owdietday7;
}

class owdietday7 : public QDialog
{
    Q_OBJECT

public:
    explicit owdietday7(QWidget *parent = nullptr);
    ~owdietday7();

private:
    Ui::owdietday7 *ui;
};

#endif // OWDIETDAY7_H
