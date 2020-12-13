#ifndef GIAITHUA_H
#define GIAITHUA_H

#include <QWidget>
#include <common.h>

namespace Ui {
class GiaiThua;
}

class GiaiThua : public QWidget
{
    Q_OBJECT

public:
    explicit GiaiThua(QWidget *parent = nullptr);
    ~GiaiThua();

private slots:
    void on_pushButton_clicked();

private:
    Ui::GiaiThua *ui;
    common cm;
};

#endif // GIAITHUA_H
