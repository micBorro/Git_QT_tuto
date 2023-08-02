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


void MainWindow::on_femer_clicked()
{
    QMainWindow::close();
}

void MainWindow::on_pushButtonAfficher_clicked()
{
    ui->lineEditREsult->setText("bonjour");
}
