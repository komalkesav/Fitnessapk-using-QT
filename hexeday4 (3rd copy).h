#ifndef HEXEDAY4_H
#define HEXEDAY4_H

#include <QDialog>

namespace Ui {
class hexeday4;
}

class hexeday4 : public QDialog
{
    Q_OBJECT

public:
    explicit hexeday4(QWidget *parent = nullptr);
    ~hexeday4();

private:
    Ui::hexeday4 *ui;
};

#endif // HEXEDAY4_H
