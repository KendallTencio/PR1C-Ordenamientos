#include "nodo.h"
template <class G>
Nodo<G>::Nodo()
{
    this->elemento=0;
    this->siguiente=0;
}
template <class G>
Nodo<G>::Nodo(G dato)
{
    this->elemento=dato;
    this->siguiente=0;
}
template <class G>
void Nodo<G>::setSiguiente(Nodo<G>* sig) {
  siguiente = sig;
}
template<typename G>
void Nodo<G>::setElemento(G elem) {
  elemento = elem;
}
template<typename G>
Nodo<G>* Nodo<G>::getSiguiente() {
        return siguiente;
}
template<typename G>
G Nodo<G>::getElemento() {
    return elemento;
}





