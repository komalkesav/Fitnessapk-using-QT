#ifndef OWDIETDAY4_H
#define OWDIETDAY4_H

#include <QDialog>

namespace Ui {
class owdietday4;
}

class owdietday4 : public QDialog
{
    Q_OBJECT

public:
    explicit owdietday4(QWidget *parent = nullptr);
    ~owdietday4();

private:
    Ui::owdietday4 *ui;
};

#endif // OWDIETDAY4_H
