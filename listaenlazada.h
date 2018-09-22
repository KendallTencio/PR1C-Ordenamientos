#ifndef LISTAENLAZADA_H
#define LISTAENLAZADA_H
#include "nodo.h"
#include "nodo.cpp"
template<class G>
class ListaEnlazada
{
public:
    ListaEnlazada();
    ~ListaEnlazada();

    void insertarCabeza(G);
    void insertarFinal(G Dato);
    void insertarPos(G,int);
    Nodo<G>* getCabeza();
    Nodo<G>* getSgte();
    int getTam();
    G getElemento(int);

private:
    Nodo<G> *cabeza;
    int tam;
};

#endif // LISTAENLAZADA_H
