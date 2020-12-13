#ifndef NHAP_H
#define NHAP_H

#include <QWidget>

namespace Ui {
class nhap;
}

class nhap : public QWidget
{
    Q_OBJECT

public:
    explicit nhap(QWidget *parent = nullptr);
    ~nhap();

private:
    Ui::nhap *ui;
};

#endif // NHAP_H
