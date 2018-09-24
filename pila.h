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
<<<<<<< HEAD
    template <class T>
    void push(T ch);
    char pop();
=======
    ~Pila();
    Nodo<T>* pop();
    void push(T);
    Nodo<T>* getCima();
    int getTam();

>>>>>>> 4cfc2be1cff4dec65700cd7ab8f0ae22c10c93cd
};

#endif // PILA_H
