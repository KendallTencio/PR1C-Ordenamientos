#include "mainwindow.h"
#include <QApplication>
#include <iostream>
//#include "Ordenamientos/bubblesort.cpp"
#include "Ordenamientos/insertion.cpp"

using namespace std;

int main(int argc, char *argv[])
{
    //QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    //return a.exec();
    cout<<"HOla"<<endl;
    ListaEnlazada<int> b;
    b.insertarCabeza(12);
    b.insertarCabeza(7);
    cout<<"HOla2"<<endl;
  //  BubbleSort<int> a;
    InsertionSort<int> x;
    cout<<"HOla3"<<endl;
    x.Insertion_sort(&b);
    cout<<"HOla4"<<endl;
    cout<<b.getCabeza()->getElemento()<<endl;
    cout<<"HOla5"<<endl;
    //a.bubble_sort(&b);
    return 0;
}
