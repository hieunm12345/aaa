#include "scp.h"
#include "ui_scp.h"

scp::scp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::scp)
{
    ui->setupUi(this);
    hide();
}

scp::~scp()
{
    delete ui;
}

void scp::yes()
{
    ui->label->setVisible(true);
    ui->label_2->setVisible(true);
    ui->label_3->setVisible(true);
    ui->label_4->setVisible(true);
    ui->label_5->setVisible(true);
    ui->label_6->setVisible(true);
    ui->label_7->setVisible(true);
    ui->label_8->setVisible(true);
    ui->label_9->setVisible(true);

    ui->label->setText("YESSS");
    ui->label_2->setText("YESSS");
    ui->label_3->setText("YESSS");
    ui->label_4->setText("YESSS");
    ui->label_5->setText("YESSS");
    ui->label_6->setText("YESSS");
    ui->label_7->setText("YESSS");
    ui->label_8->setText("YESSS");
    ui->label_9->setText("YESSS");


}

void scp::no()
{
    ui->label->setVisible(true);
    ui->label_2->setVisible(true);
    ui->label_3->setVisible(true);
    ui->label_4->setVisible(true);
    ui->label_5->setVisible(true);
    ui->label_6->setVisible(true);
    ui->label_7->setVisible(true);
    ui->label_8->setVisible(true);
    ui->label_9->setVisible(true);

    ui->label->setText("NOOO");
    ui->label_2->setText("NOOO");
    ui->label_3->setText("NOOO");
    ui->label_4->setText("NOOO");
    ui->label_5->setText("NOOO");
    ui->label_6->setText("NOOO");
    ui->label_7->setText("NOOO");
    ui->label_8->setText("NOOO");
    ui->label_9->setText("NOOO");
}

void scp::hide()
{
    ui->label->setVisible(false);
    ui->label_2->setVisible(false);
    ui->label_3->setVisible(false);
    ui->label_4->setVisible(false);
    ui->label_5->setVisible(false);
    ui->label_6->setVisible(false);
    ui->label_7->setVisible(false);
    ui->label_8->setVisible(false);
    ui->label_9->setVisible(false);
}


void scp::on_pushButton_clicked()
{
    int n;
    QString str = ui->lineEdit_nhap->text();
    if(cm.isSoNguyen(str))
    {
        n = str.toInt();
        if(n < 1)
        {
            no();
            return;
        }
        for(int i = 1; i <= n; i++)
        {
            if(i * i == n)
            {
                yes();
                return;
            }
        }
        no();
    }
    else
    {
        hide();
        // hien thi message box thong bao nhap loi
        QMessageBox a;
                a.setWindowTitle("!!!");
                a.setText("Khong phai so nguyen");
                a.setStandardButtons(QMessageBox::Close);
                a.setIcon(QMessageBox::Critical);
                int ketQua = a.exec();
                switch (ketQua)
                {
                    case QMessageBox::Close:
                    break;
                }
    }
}
