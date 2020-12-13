#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <giaithua.h>
#include <namnhuan.h>
#include <snt.h>
#include <scp.h>
#include <common.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_giaiThua_clicked();

    void on_pushButton_namNhuan_clicked();

    void on_pushButton_snt_clicked();

    void on_pushButton_scp_clicked();

    void on_pushButton_thoat_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
