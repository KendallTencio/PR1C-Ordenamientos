#include "nodoListaEnlazada.h"
template <class G>
Nodo<G>::Nodo(G dato)
{
    this->elemento=dato;
    this->siguiente=0;
}
template<typename G>
Nodo<G>::~Nodo(){}
template<typename G>
Nodo<G>* Nodo<G>::getSiguiente() {
  return siguiente;
}
template<typename G>
G Nodo<G>::getElemento() {
    return elemento;
}
template<typename G>
void Nodo<G>::setSiguiente(Nodo<G>* direccion)
{
    this->siguiente=direccion;
}
