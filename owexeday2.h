#ifndef OWEXEDAY2_H
#define OWEXEDAY2_H

#include <QDialog>

namespace Ui {
class owexeday2;
}

class owexeday2 : public QDialog
{
    Q_OBJECT

public:
    explicit owexeday2(QWidget *parent = nullptr);
    ~owexeday2();

private:
    Ui::owexeday2 *ui;
};

#endif // OWEXEDAY2_H
