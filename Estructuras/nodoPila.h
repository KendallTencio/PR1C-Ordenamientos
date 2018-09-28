#ifndef NODOPILA_H
#define NODOPILA_H

template <class G>
class NodoPila
{
protected:
    G elemento;
    NodoPila<G>* siguiente;
public:
     NodoPila();
     NodoPila(G);
     ~NodoPila();
     G getElemento();
     NodoPila<G>* getSiguiente();
     void setSiguiente(NodoPila<G>*);
};

#endif // NODO_H
