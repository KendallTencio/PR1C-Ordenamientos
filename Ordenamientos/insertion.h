#ifndef INSERTION_H
#define INSERTION_H
<<<<<<< HEAD
#include "Estructuras/listaenlazada.cpp"
=======
#include "estructuras/listaenlazada.h"

>>>>>>> acd01e3e5de85cf2db701ba6819529f24a784edb
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
<<<<<<< HEAD
    void Insertion_sort(ListaEnlazada<T>* vectorIS);
=======
    void Insertion_sort(ListaEnlazada<T>* listaEnlazada);
>>>>>>> acd01e3e5de85cf2db701ba6819529f24a784edb
    ~InsertionSort();
};
#endif // INSERTION_H
