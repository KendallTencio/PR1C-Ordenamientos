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
     ~Nodo();
     G getElemento();
     Nodo<G>* getSiguiente();
     void setSiguiente(Nodo<G>*);
};

#endif // NODO_H
