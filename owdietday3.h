#ifndef OWDIETDAY3_H
#define OWDIETDAY3_H

#include <QDialog>

namespace Ui {
class owdietday3;
}

class owdietday3 : public QDialog
{
    Q_OBJECT

public:
    explicit owdietday3(QWidget *parent = nullptr);
    ~owdietday3();

private:
    Ui::owdietday3 *ui;
};

#endif // OWDIETDAY3_H
