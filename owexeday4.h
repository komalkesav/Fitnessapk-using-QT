#ifndef OWEXEDAY4_H
#define OWEXEDAY4_H

#include <QDialog>

namespace Ui {
class owexeday4;
}

class owexeday4 : public QDialog
{
    Q_OBJECT

public:
    explicit owexeday4(QWidget *parent = nullptr);
    ~owexeday4();

private:
    Ui::owexeday4 *ui;
};

#endif // OWEXEDAY4_H
