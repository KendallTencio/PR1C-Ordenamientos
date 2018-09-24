#ifndef PILA_H
#define PILA_H
#include <iostream>
using namespace std;
#define SIZE 10

struct Pila {
private:
    char stackData[SIZE];
    int topOfStack;
public:
    Pila();
    void push(char ch);
    char pop();
};

#endif // PILA_H





