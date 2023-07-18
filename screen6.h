#ifndef SCREEN6_H
#define SCREEN6_H

#include <QDialog>

namespace Ui {
class screen6;
}

class screen6 : public QDialog
{
    Q_OBJECT

public:
    explicit screen6(QWidget *parent = nullptr);
    ~screen6();

private:
    Ui::screen6 *ui;
};

#endif // SCREEN6_H
