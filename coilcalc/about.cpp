#include "about.h"
#include "ui_about.h"
#include "mainwindow.h"

about::about(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);
    /*
    воткнуть автоопределение размера окна
    и устанговку fixed для текущего
    */
    //physicalDpiX();
    //setFixedSize(200, 120);
    setWindowState(Qt::WindowMaximized);
}

about::~about()
{
    delete ui;
}

void about::on_pushButton_clicked()
{
    //int x =physicalDpiX();
    //int x = availableSize();
    setWindowState(Qt::WindowMaximized);
    //about::ui->label->setText(QString::number(x));
}
