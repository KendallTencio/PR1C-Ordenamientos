#ifndef COLA_H
#define COLA_H
#include "nodocola.cpp"
template<class G>
class Cola
{
private:
    NodoCola<G> *cabeza;
    int tam;
    void EliminarPos(int);
    NodoCola<G>* getPos(int );
public:
    Cola();
    ~Cola();
    void encolar(G);
    NodoCola<G>* desencolar();
   int getTam();
};

#endif // COLA_H
