#ifndef DIETDAY4_H
#define DIETDAY4_H

#include <QDialog>

namespace Ui {
class dietday4;
}

class dietday4 : public QDialog
{
    Q_OBJECT

public:
    explicit dietday4(QWidget *parent = nullptr);
    ~dietday4();

private:
    Ui::dietday4 *ui;
};

#endif // DIETDAY4_H
