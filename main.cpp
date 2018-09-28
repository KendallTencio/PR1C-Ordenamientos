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
    ListaEnlazada<int> b;
    b.insertarCabeza(12);
    b.insertarCabeza(7);
  //  BubbleSort<int> a;
    InsertionSort<int> x;
    x.Insertion_sort(&b);
    cout<<b.getCabeza()->getElemento()<<endl;

    //a.bubble_sort(&b);
    return 0;
}
