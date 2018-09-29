#ifndef INSERTION_H
#define INSERTION_H
<<<<<<< HEAD

<<<<<<< HEAD

#include "estructuras/listaenlazada.h"
#include "estructuras/listaenlazada.cpp"

=======
>>>>>>> parent of c7edc1c... fsdf
=======
#include "Estructuras/listaenlazada.cpp"
>>>>>>> parent of 86c7e0a... h
template <class T>
class InsertionSort
{
  private:
    int x = 0;
    int vectorIS[20];
  public:
    InsertionSort();
    void Insertion_sort(T* vectorIS);
<<<<<<< HEAD
<<<<<<< HEAD
    //void Insertion_sort(ListaEnlazada<T>* vectorIS);
    void Insertion_sort(ListaEnlazada<T>* listaEnlazada);
=======
>>>>>>> parent of c7edc1c... fsdf
=======
    void Insertion_sort(ListaEnlazada<T>* vectorIS);
>>>>>>> parent of 86c7e0a... h
    ~InsertionSort();
};
#endif // INSERTION_H
