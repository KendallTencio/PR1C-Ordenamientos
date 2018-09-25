#include "pila.h"
template<typename T>
Pila<T>::Pila()
{}
template<typename T>
Pila<T>::~Pila(){}
template<typename T>
Nodo<T>* Pila<T>::pop()
{
    Nodo<T> *temp = lista.getPos(lista.getTam()-1);
    lista.getEliminarPos(lista.getTam()-1);
    return temp;
}
template<typename T>
void Pila<T>::push(T elem)
{
    lista.insertarFinal(elem);
}
template<typename T>
Nodo<T>* Pila<T>::getCima()
{
    return lista.getPos(lista.getTam()-1);
}
template<typename T>
int Pila<T>::getTam()
{
    return lista.getTam();
}

