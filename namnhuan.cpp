#include "namnhuan.h"
#include "ui_namnhuan.h"

NamNhuan::NamNhuan(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NamNhuan)
{
    ui->setupUi(this);
}

NamNhuan::~NamNhuan()
{
    delete ui;
}

void NamNhuan::on_pushButton_clicked()
{

}
