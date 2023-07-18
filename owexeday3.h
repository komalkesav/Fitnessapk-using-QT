#ifndef OWEXEDAY3_H
#define OWEXEDAY3_H

#include <QDialog>

namespace Ui {
class owexeday3;
}

class owexeday3 : public QDialog
{
    Q_OBJECT

public:
    explicit owexeday3(QWidget *parent = nullptr);
    ~owexeday3();

private:
    Ui::owexeday3 *ui;
};

#endif // OWEXEDAY3_H
