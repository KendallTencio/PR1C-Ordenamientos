#include "listaenlazada.h"
#include <iostream>
template<typename G>
ListaEnlazada<G>::ListaEnlazada()
{
    this->tam=0;
    this->cabeza=0;
}
template<typename G>
ListaEnlazada<G>::~ListaEnlazada()
{}
template<typename G>
void ListaEnlazada<G>::insertarCabeza(G data)
{
    Nodo<G> *nuevo = new Nodo<G>(data);
    Nodo<G> *temp = cabeza;
    if(!cabeza)
    {
        cabeza=nuevo;
    }else{
        nuevo->setSiguiente(cabeza);
        cabeza = nuevo;
        while(temp)
            temp=temp->getSiguiente();
    }
    tam++;
}
template<typename G>
void ListaEnlazada<G>::insertarFinal(G Dato)
{
    Nodo<G> *nuevo = new Nodo<G>(Dato);
    Nodo<G> *temp = cabeza;
    if(!cabeza)
    {
        cabeza=nuevo;

    }else
    {
        while(temp->getSiguiente())
            temp=temp->getSiguiente();
    }
    temp->setSiguiente(nuevo);
    tam++;
}

template<typename G>
void ListaEnlazada<G>::insertarPos(G dato,int pos)
{
    Nodo<G> *nuevo = new Nodo<G>(dato);
    Nodo<G> *temp = cabeza;
    int i=0;
    if(pos>this->tam||pos<0)
    {

    }else
    {
        if(pos==0){
            this->insertarCabeza(dato);
        }else{
        while(i!=pos-1)
        {
             temp=temp->getSiguiente();
             i++;
        }
        nuevo->setSiguiente(temp);
        temp->setSiguiente(nuevo);
       tam++;
    }
    }


}

template<typename G>
Nodo<G>* ListaEnlazada<G>::getSgte()
{
  return this->cabeza->getSiguiente();
}
template<typename G>
int ListaEnlazada<G>::getTam()
{
  return this->tam;
}
template<typename G>
G ListaEnlazada<G>::getElemento(int pos)
{   Nodo<G> *temp = cabeza;
    int i=0;
    while (pos!=i) {
            temp=temp->getSiguiente();
            i++;
    }
    return temp->getElemento();
}




