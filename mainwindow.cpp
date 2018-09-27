#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPropertyAnimation>
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

void MainWindow::mover(int _x,int _y){
    QPropertyAnimation *animation = new QPropertyAnimation(ui->label, "geometry");
    animation->setDuration(100);
    animation->setStartValue(QRect(this->x, 0, 100, this->y));
    this->y +=_y;
    this->x +=_x;
    animation->setEndValue(QRect(x,0, 100, y));
    animation->start();
}


void MainWindow::on_btnArriba_clicked()
{
    if (this->y>60)
        this->mover(0,-10);

}


void MainWindow::on_btnAbajo_clicked()
{
    if (this->y<630)
        this->mover(0,10);

}

void MainWindow::on_btnIzquierda_clicked()
{
    if (this->x>-30)
    this->mover(-10,0);
}

void MainWindow::on_btnDerecha_clicked()
{

    if (this->x<580)
        this->mover(10,0);
}


