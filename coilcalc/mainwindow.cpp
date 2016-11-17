#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "about.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //MainWindow::ui->frame->hide();
    setWindowState(Qt::WindowMaximized);

}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::checkedRadioWiredCount(){
    QString numChecked = "-1";
    QVector<QRadioButton*> rButtonContainer;
    rButtonContainer.push_back(ui->radioButton);
    rButtonContainer.push_back(ui->radioButton_2);
    rButtonContainer.push_back(ui->radioButton_3);
    rButtonContainer.push_back(ui->radioButton_4);
    rButtonContainer.push_back(ui->radioButton_5);
    rButtonContainer.push_back(ui->radioButton_6);

    QString str;
    for(int i = 0; i < rButtonContainer.size(); ++i){
       if(rButtonContainer[i]->isChecked()){
            numChecked = rButtonContainer[i]->text();
       }
    }
    return numChecked;
}

void MainWindow::on_pushButton_clicked()
{

    /*QString volt = MainWindow::ui->lineEdit->text();
    QString resist = MainWindow::ui->lineEdit_2->text();

    float power = (volt.toFloat() *volt.toFloat())/resist.toFloat();
    float ampere = power / volt.toFloat();

    MainWindow::ui->label_5->setText(QString::number(power));
    MainWindow::ui->label_6->setText(QString::number(ampere));
    MainWindow::ui->frame->show();*/

}

void MainWindow::on_pushButton_2_clicked()
{

    /*about aa(this);
    aa.exec();*/
//получить значение радиобатона

    //MainWindow::ui->label_7->setText(MainWindow::checkedRadioWiredCount());
    MainWindow::ui->label->setText("Лев гей");
    MainWindow::ui->label_2->setText("Лев гей");
    MainWindow::ui->label_3->setText("Лев гей");
    MainWindow::ui->label_4->setText("Лев гей");
    MainWindow::ui->label_5->setText("Лев гей");
    MainWindow::ui->label_6->setText("Лев гей");

}
