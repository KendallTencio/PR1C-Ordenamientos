#include "nodocola.h"
template <class G>
NodoCola<G>::NodoCola(G dato)
{
    this->elemento=dato;
    this->siguiente=0;
}
template<typename G>
NodoCola<G>::~NodoCola(){}
template<typename G>
NodoCola<G>* NodoCola<G>::getSiguiente() {
  return siguiente;
}
template<typename G>
G NodoCola<G>::getElemento() {
    if (this==0)
        return 0;
    return elemento;
}
template<typename G>
void NodoCola<G>::setSiguiente(NodoCola<G>* direccion)
{
    this->siguiente=direccion;
}
