#ifndef NODOCOLA_H
#define NODOCOLA_H

template <class G>
class NodoCola
{
protected:
    G elemento;
    NodoCola<G>* siguiente;
public:
     NodoCola(G);
     ~NodoCola();
     G getElemento();
     NodoCola<G>* getSiguiente();
     void setSiguiente(NodoCola<G>*);
};

#endif // NODO_H
