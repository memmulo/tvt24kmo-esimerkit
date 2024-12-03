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

void MainWindow::on_btnSave_clicked()
{
    qDebug()<< fname;
    fname=ui->txtName->text();
    ui->labelResult->setText("Terve "+fname);
}

void MainWindow::on_btnOpenCalculator_clicked()
{
    objCalculator=new Calculator(this);
    objCalculator->setUsername(fname);
    objCalculator->show();                  //show tai open
}

