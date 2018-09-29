#ifndef INSERTION_H
#define INSERTION_H

<<<<<<< HEAD

#include "estructuras/listaenlazada.h"
#include "estructuras/listaenlazada.cpp"

=======
>>>>>>> parent of c7edc1c... fsdf
template <class T>
class InsertionSort
{
  private:
    int x = 0;
    int vectorIS[20];
   //ListaEnlazada<T>* listaEnlazada;
  public:
    InsertionSort();
    void Insertion_sort(T* vectorIS);
<<<<<<< HEAD
    //void Insertion_sort(ListaEnlazada<T>* vectorIS);
    void Insertion_sort(ListaEnlazada<T>* listaEnlazada);
=======
>>>>>>> parent of c7edc1c... fsdf
    ~InsertionSort();
};
#endif // INSERTION_H
