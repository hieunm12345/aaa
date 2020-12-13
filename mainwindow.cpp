#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_giaiThua_clicked()
{
    GiaiThua *a = new GiaiThua();
    a->show();
}

void MainWindow::on_pushButton_namNhuan_clicked()
{
    NamNhuan *a = new NamNhuan();
    a->show();
}

void MainWindow::on_pushButton_snt_clicked()
{
    snt *a = new snt();
    a->show();
}

void MainWindow::on_pushButton_scp_clicked()
{
    scp *a = new scp();
    a->show();
}

void MainWindow::on_pushButton_thoat_clicked()
{
    QMessageBox a;
    a.setWindowTitle("Close");
    a.setText("Ban co muon close khong?");
    a.setInformativeText("Nhan Yes de close");
    a.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    a.setDefaultButton(QMessageBox::No);
    a.setIcon(QMessageBox::Warning);
    int ketQua = a.exec();
    switch (ketQua) {
        case QMessageBox::Yes:
        close();
        break;
    case QMessageBox::No:
        break;
    }
}
