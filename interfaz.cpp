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
      srand(time(0));
      int i;
      int vector[20];
      int vectorOBJ[20];

      //char vectorC[] = {'q','t','s','u','c','k','s'};

      //------------------------Bubble Bidireccional--------------------------------------------
      BIBubbleSort burbujaBiPrueba;
      for (i = 0; i<19; i++){
          vector[i] = (1 + rand() % 100);
      }
      cout<<"Lista desordenada con el Bubble Bidireccional: "<<endl;
      cout<<"\n";
      for (i = 0; i<19; i++){
          cout<<vector[i];
          cout<<", ";
      }
      cout<<"\n"<<endl;
      burbujaBiPrueba.bubbleBi_sort(vector);
      cout<<"Lista ordenada con el Bubble Bidireccional: "<<endl;
      cout<<"\n";
      for (i = 0; i<19; i++){
          cout<<vector[i];
          cout<<", ";
      }
      cout<<"\n"<<endl;


}


