#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include "Ordenamientos/bubblesort.cpp"
#include "Ordenamientos/insertion.cpp"
//#include "Estructuras/listaenlazada.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    ListaEnlazada<int> b;
    b.insertarCabeza(12);
    b.insertarCabeza(7);
    b.insertarCabeza(8);
    b.insertarFinal(6);
    b.insertarFinal(4);
    BubbleSort<int> x;
    x.bubble_sort(&b);

    return a.exec();
}
