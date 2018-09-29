#ifndef LISTAENLAZADA_H
#define LISTAENLAZADA_H

#include "nodoListaEnlazada.cpp"
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
    Nodo<G>* getPos(int);
    void EliminarPos(int);
    int isVacia();
private:
    Nodo<G> *cabeza;
    int tam;
};

#endif // LISTAENLAZADA_H
