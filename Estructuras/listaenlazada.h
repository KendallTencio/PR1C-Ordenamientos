#ifndef LISTAENLAZADA_H
#define LISTAENLAZADA_H

#include "nodoListaEnlazada.cpp"
template<class G>
class ListaEnlazada
{
public:
    ListaEnlazada();
    virtual ~ListaEnlazada();

    virtual void insertarCabeza(G);
    virtual void insertarFinal(G Dato);
    virtual void insertarPos(G,int);
    virtual Nodo<G>* getCabeza();
    virtual Nodo<G>* getSgte();
    virtual int getTam();
    virtual Nodo<G>* getPos(int);
    virtual void EliminarPos(int);
    virtual int isVacia();
private:
    Nodo<G> *cabeza;
    int tam;
};

#endif // LISTAENLAZADA_H
