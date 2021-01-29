#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_QtLib=(QtLibCreate*)QtLibCreateInstance();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete m_QtLib;
}
void MainWindow::on_pushButton_add_clicked()
{
    int num1=ui->lineEdit_num1->text().toInt();
    int num2=ui->lineEdit_num2->text().toInt();
    int result=m_QtLib->Add(num1,num2);
    ui->lineEdit_result->setText(QString::number(result));

}
void MainWindow::on_pushButton_sub_clicked()
{
    ui->lineEdit_result->setText(QString::number(m_QtLib->Sub(ui->lineEdit_num1->text().toInt(),ui->lineEdit_num2->text().toInt())));
}
