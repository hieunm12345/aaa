#include "giaithua.h"
#include "ui_giaithua.h"

GiaiThua::GiaiThua(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GiaiThua)
{
    ui->setupUi(this);
}

GiaiThua::~GiaiThua()
{
    delete ui;
}

void GiaiThua::on_pushButton_clicked()
{
    unsigned long long kq = 1;
    int n;
    QString str = ui->lineEdit_nhap->text();
    if(cm.isSoNguyen(str))
    {
        n = str.toInt();
        if(n < 0)
        {
            ui->lineEdit_kq->setText("");
            QMessageBox a;
            a.setWindowTitle("!!!");
            a.setText("Khong the nho hon 0");
            a.setStandardButtons(QMessageBox::Close);
            a.setIcon(QMessageBox::Warning);
            int ketQua = a.exec();
            switch (ketQua) {
            case QMessageBox::Close:
                break;
            }
        } else
        {
            for(int i = 1; i <= n; i++)
            {
                kq *= i;
            }
            ui->lineEdit_kq->setText(QString::number(kq));
        }
    }else
    {
        ui->lineEdit_kq->setText("");
        // hien thi message box thong bao nhap loi
        QMessageBox a;
                a.setWindowTitle("!!!");
                a.setText("Khong phai so nguyen");
                a.setStandardButtons(QMessageBox::Close);
                a.setIcon(QMessageBox::Critical);
                int ketQua = a.exec();
                switch (ketQua) {
                    case QMessageBox::Close:
                    break;
                }
    }




}
