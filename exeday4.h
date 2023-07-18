#ifndef EXEDAY4_H
#define EXEDAY4_H

#include <QDialog>

namespace Ui {
class exeday4;
}

class exeday4 : public QDialog
{
    Q_OBJECT

public:
    explicit exeday4(QWidget *parent = nullptr);
    ~exeday4();

private:
    Ui::exeday4 *ui;
};

#endif // EXEDAY4_H
