#include "nodoPila.h"
template <class G>
NodoPila<G>::NodoPila()
{
    this->elemento=0;
    this->siguiente=0;
}
template <class G>
NodoPila<G>::NodoPila(G dato)
{
    this->elemento=dato;
    this->siguiente=0;
}
template<typename G>
NodoPila<G>::~NodoPila(){}
template<typename G>
NodoPila<G>* NodoPila<G>::getSiguiente() {

    return siguiente;
}
template<typename G>
G NodoPila<G>::getElemento() {
    if (this==0)
        return 0;
    return elemento;
}
template<typename G>
void NodoPila<G>::setSiguiente(NodoPila<G>* direccion)
{
    this->siguiente=direccion;
}
