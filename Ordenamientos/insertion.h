#ifndef INSERTION_H
#define INSERTION_H
#include "Estructuras/listaenlazada.h"

template <class T>
class InsertionSort
{
  private:
    int x = 0;
    int vectorIS[20];
  public:
    InsertionSort();
   // void Insertion_sort(T* vectorIS);
    void Insertion_sort(ListaEnlazada<T>* listaEnlazada);

    ~InsertionSort();
};
#endif // INSERTION_H
