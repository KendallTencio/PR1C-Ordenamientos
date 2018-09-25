#include "interfaz.h"
#include <QApplication>
#include <iostream>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Interfaz w;
    w.show();

    return a.exec();
}
