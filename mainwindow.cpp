#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QMessageBox>

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


void MainWindow::on_pushButton_clicked()
{
    QMessageBox msgBox;

    msgBox.setText(ui->lineEdit->text());
    //msgBox.setStandardButtons(QMessageBox::Ok| QMessageBox::Yes);
    msgBox.setStandardButtons(QMessageBox::Ok| QMessageBox::Cancel);

    msgBox.exec();
}

void MainWindow::on_textEdit_textChanged()
{

}
