#ifndef LISTAENLAZADA_H
#define LISTAENLAZADA_H



#include <iostream>
class ListaEnlazada
{
private:

    struct nodo{
           int elemento;        // en este caso es un numero entero
           struct nodo *sgte;
    };


public:
    ListaEnlazada();

    typedef struct nodo *Tlista;
    void insertarInicio(int valor);
    void insertarFinal( int valor);
    void insertarElemento(int valor, int pos);
    void imprimirLista();
    int getDimension();

protected:
    Tlista lista;
};

#endif // LISTAENLAZADA_H
