#ifndef NAMNHUAN_H
#define NAMNHUAN_H

#include <QWidget>
#include <common.h>

namespace Ui {
class NamNhuan;
}

class NamNhuan : public QWidget
{
    Q_OBJECT

public:
    explicit NamNhuan(QWidget *parent = nullptr);
    ~NamNhuan();

private slots:
    void on_pushButton_clicked();

private:
    Ui::NamNhuan *ui;
    common cm;
};

#endif // NAMNHUAN_H
