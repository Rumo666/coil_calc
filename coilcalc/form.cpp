#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "form.h"

form::QWindow(QWidget *parent):
    QWindow(parent),
    ui(new Ui::form){
    ui->setupUi(this);
}

form::~form(){
    delete ui;
}

/*
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
*/
