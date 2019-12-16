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


void MainWindow::on_ENTER_clicked()
{
    num ++;
    QString msg;
    msg.sprintf("touch time is : %d ",num);


    ui->RESULT->setText(msg);

}
