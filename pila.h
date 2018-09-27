#ifndef PILA_H
#define PILA_H
#include "nodoPila.cpp"

template<class G>
class Pila
{
private:
    NodoPila<G> *cima;
    int tam;
    void EliminarPos(int);
    NodoPila<G>* getPos(int );
public:
    Pila();
    ~Pila();
    NodoPila<G>* pop();
    void push(G);
    NodoPila<G>* getCima();
    int getTam();
    int isvacia();

};

#endif // PILA_H
