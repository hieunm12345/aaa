#ifndef SCP_H
#define SCP_H

#include <QWidget>
#include <common.h>

namespace Ui {
class scp;
}

class scp : public QWidget
{
    Q_OBJECT

public:
    explicit scp(QWidget *parent = nullptr);
    ~scp();

private slots:
    void on_pushButton_clicked();

private:
    Ui::scp *ui;
    common cm;
    void yes();
    void no();
    void hide();
};

#endif // SCP_H
