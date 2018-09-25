#include "interfaz.h"
#include "ui_interfaz.h"
#include "bi_bubblesort.h"
#include <iostream>

using namespace std;

Interfaz::Interfaz(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Interfaz)
{
    ui->setupUi(this);
}

Interfaz::~Interfaz()
{
    delete ui;
}

void Interfaz::on_pushButton_clicked()
{


}


