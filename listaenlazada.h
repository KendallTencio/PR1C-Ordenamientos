#ifndef LISTAENLAZADA_H
#define LISTAENLAZADA_H


#include "nodo.cpp"
#include <iostream>

template <class generico>
class ListaEnlazada
{
private:
    Nodo<generico> *inicio;
    Nodo<generico> *fin;
    int tam;
public:
    ListaEnlazada();
    Nodo<generico> *Tlista;
    void insertarInicio(generico valor);   //Como ves le quite que la clase sea template
    void insertarFinal(generico valor);     //y se usó solo donde se necesita
    void insertarElemento(generico valor, int pos);
    int getDimension();                 //pero aquí no tenían, ese era un problema

     //Lista es un nodo y en el cpp lo
};                           //igualaste a un int, eso daba error

#endif // LISTAENLAZADA_H
