#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include "Ordenamientos/bubblesort.cpp"
int main(int argc, char *argv[])
{
    //QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    //return a.exec();
    ListaEnlazada<int> b;
    b.insertarCabeza(12);
    BubbleSort<int> a;
    a.bubble_sort(&b);
    return 0;
}
