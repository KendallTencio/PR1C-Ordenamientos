#include "cola.h"
#include <iostream>
template<typename G>
Cola<G>::Cola(){
    this->cabeza=0;
    this->tam=0;
}
template<typename G>
Cola<G>::~Cola(){}
template<typename G>
void Cola<G>::encolar(G dato){
    NodoCola<G> *nuevo = new NodoCola<G>(dato);
    NodoCola<G> *temp = cabeza;
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
int Cola<G>::isVacia(){
    if(cabeza)
        return true;
    return false;
}
template<typename G>
NodoCola<G>* Cola<G>::desencolar()
{
    NodoCola<G> *temp = this->getPos(tam-1);
    this->EliminarPos(tam-1);
    return temp;

}
template<typename G>
int Cola<G>::getTam(){
    return tam;
}
template<typename T>
NodoCola<T>* Cola<T>::getPos(int pos)
{
    NodoCola<T> *temp = this->cabeza;
    int i=0;
    while (pos!=i) {
        temp=temp->getSiguiente();
        i++;

    }
    return temp;
}
template<typename T>
void Cola<T>::EliminarPos(int pos)
{
    NodoCola<T> *temp = cabeza;
    NodoCola<T> *eliminar;
    int i=0;
    if (pos==0)
    {
        if(!cabeza->getSiguiente())
        {
            cabeza->~NodoCola();
            cabeza=0;
        }else{
            cabeza=cabeza->getSiguiente();
        }


    }else{


    while (pos-1!=i) {
        temp=temp->getSiguiente();
        i++;
    }
    eliminar = temp->getSiguiente();
    temp->setSiguiente(eliminar->getSiguiente());
    eliminar->~NodoCola();

    }
    tam--;
}
