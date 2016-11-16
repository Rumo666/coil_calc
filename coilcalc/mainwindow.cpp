#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MainWindow::ui->frame->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    QString volt = MainWindow::ui->lineEdit->text();
    QString resist = MainWindow::ui->lineEdit_2->text();

    float power = (volt.toFloat() *volt.toFloat())/resist.toFloat();
    float ampere = power / volt.toFloat();

    MainWindow::ui->label_5->setText(QString::number(power));
    MainWindow::ui->label_6->setText(QString::number(ampere));
    MainWindow::ui->frame->show();

}
