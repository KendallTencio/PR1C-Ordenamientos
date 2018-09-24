#ifndef PILA_H
#define PILA_H
#include <iostream>
using namespace std;
#define SIZE 10

struct Pila {
private:
    char registroPila[SIZE];
    int cima;
public:
    Pila();
    template <class T>
    void push(T ch);
    char pop();
};

#endif // PILA_H





