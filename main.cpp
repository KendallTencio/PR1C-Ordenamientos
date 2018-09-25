#include "interfaz.h"
#include <QApplication>
#include <iostream>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Interfaz w;
    w.show();


    return 0; //a.exec()
}
