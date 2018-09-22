#ifndef NODO_H
#define NODO_H

template <class G>
class Nodo
{
private:
    G elemento;
    Nodo<G>* siguiente;
public:

     Nodo();
     Nodo(G dato);
     G getElemento();
     Nodo<G>* getSiguiente();
     void setSiguiente(Nodo<G>* sig);
     void setElemento(G elem);
};

#endif // NODO_H
