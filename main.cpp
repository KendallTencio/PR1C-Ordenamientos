#include "interfaz.h"
#include <QApplication>
#include <iostream>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Interfaz w;
    w.show();
<<<<<<< HEAD
    ListaEnlazada<int> i;
    i.insertarFinal(12);
    i.insertarFinal(321);
    i.insertarFinal(7843);
    i.getEliminarPos(1);
    std::cout << i.getPos(0)->getElemento() << std::endl;
=======

>>>>>>> 9a242a98ed1a202a815f5e5babd1c77145980327



    return a.exec();
}
