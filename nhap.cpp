#include "nhap.h"
#include "ui_nhap.h"

nhap::nhap(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::nhap)
{
    ui->setupUi(this);
}

nhap::~nhap()
{
    delete ui;
}
