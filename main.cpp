#include "interfaz.h"
#include <QApplication>
#include "pila.cpp"
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
    i.EliminarPos(1);
    std::cout << i.getPos(0)->getElemento() << std::endl;


=======
>>>>>>> de5a2c71a9e49da56b075199043e88cef216e549

    return a.exec();
}
