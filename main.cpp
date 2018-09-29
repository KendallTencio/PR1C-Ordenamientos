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
    for(int i=0;b.getTam()<5;i++)
        b.insertarFinal(rand() % 30 + 1987);
    for(int i=0;b.getTam()<5;i++)
        std::cout << b.getPos(i)->getElemento() << std::endl;
    BubbleSort<int> a;
    a.bubble_sort(&b);
    for(int i=0;b.getTam()<5;i++)
        std::cout << b.getPos(i)->getElemento() << std::endl;

    return 0;
}
