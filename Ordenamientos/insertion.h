#ifndef INSERTION_H
#define INSERTION_H


#include "estructuras/listaenlazada.h"
#include "estructuras/listaenlazada.cpp"

template <class T>
class InsertionSort:public ListaEnlazada<T>
{
  private:
    int x = 0;
    int vectorIS[20];
   //ListaEnlazada<T>* listaEnlazada;
  public:
    InsertionSort();
    void Insertion_sort(T* vectorIS);
    void Insertion_sort(ListaEnlazada<T>* vectorIS);
    void Insertion_sort(ListaEnlazada<T>* listaEnlazada);
    ~InsertionSort();
};
#endif // INSERTION_H
