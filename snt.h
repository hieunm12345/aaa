#ifndef SNT_H
#define SNT_H

#include <QWidget>
#include <common.h>

namespace Ui {
class snt;
}

class snt : public QWidget
{
    Q_OBJECT

public:
    explicit snt(QWidget *parent = nullptr);
    ~snt();

private slots:
    void on_pushButton_clicked();

private:
    Ui::snt *ui;
    common cm;
    void yes();
    void no();
    void hide();
};

#endif // SNT_H
