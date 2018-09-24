#ifndef PILA_H
#define PILA_H
#include "listaenlazada.cpp"
template<class T>
class Pila
{
private:
    ListaEnlazada<T> lista;
public:
    Pila();
//    void push(T ch);
//    char pop();

    Nodo<T>* pop();
    void push(T);

    Nodo<T>* getCima();
    int getTam();
    ~Pila();

};

#endif // PILA_H
