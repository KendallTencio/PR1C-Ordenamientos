#include "mainwindow.h"
#include <QApplication>
#include <iostream>
//#include "Ordenamientos/bubblesort.cpp"
#include "Ordenamientos/insertion.cpp"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
/*
    ListaEnlazada<int> b;
<<<<<<< HEAD
    for(int i=0;b.getTam()<5;i++)
        b.insertarFinal(rand() % 30 + 1987);
    for(int i=0;b.getTam()<5;i++)
        std::cout << b.getPos(i)->getElemento() << std::endl;
    BubbleSort<int> a;
    a.bubble_sort(&b);
    for(int i=0;b.getTam()<5;i++)
        std::cout << b.getPos(i)->getElemento() << std::endl;

    return 0;
=======
    b.insertarCabeza(12);
    b.insertarCabeza(7);
  //  BubbleSort<int> a;
    InsertionSort<int> x;
    x.Insertion_sort(&b);
    cout<<b.getCabeza()->getElemento()<<endl;
*/
    //a.bubble_sort(&b);
    return a.exec();
>>>>>>> acd01e3e5de85cf2db701ba6819529f24a784edb
}
