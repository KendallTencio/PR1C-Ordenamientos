#ifndef NODOLISTAENLAZADA_H
#define NODOLISTAENLAZADA_H

template <class G>
class Nodo
{
protected:
    G elemento;
    Nodo<G>* siguiente;
public:
     Nodo(G dato);
     ~Nodo();
     G getElemento();
     Nodo<G>* getSiguiente();
     void setSiguiente(Nodo<G>*);
};

#endif // NODO_H
