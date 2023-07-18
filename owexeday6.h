#ifndef OWEXEDAY6_H
#define OWEXEDAY6_H

#include <QDialog>

namespace Ui {
class owexeday6;
}

class owexeday6 : public QDialog
{
    Q_OBJECT

public:
    explicit owexeday6(QWidget *parent = nullptr);
    ~owexeday6();

private:
    Ui::owexeday6 *ui;
};

#endif // OWEXEDAY6_H
