#ifndef INSERTION_H
#define INSERTION_H
<<<<<<< HEAD
<<<<<<< HEAD

<<<<<<< HEAD

=======
#include "Estructuras/listaenlazada.cpp"
=======
>>>>>>> parent of 8b0dd65... vamo a ver
#include "estructuras/listaenlazada.h"

<<<<<<< HEAD
=======
>>>>>>> parent of c7edc1c... fsdf
=======
#include "Estructuras/listaenlazada.cpp"
>>>>>>> parent of 86c7e0a... h
=======
>>>>>>> acd01e3e5de85cf2db701ba6819529f24a784edb
>>>>>>> parent of 8b0dd65... vamo a ver
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
<<<<<<< HEAD
    //void Insertion_sort(ListaEnlazada<T>* vectorIS);
    void Insertion_sort(ListaEnlazada<T>* listaEnlazada);
=======
>>>>>>> parent of c7edc1c... fsdf
=======
    void Insertion_sort(ListaEnlazada<T>* vectorIS);
>>>>>>> parent of 86c7e0a... h
=======
    void Insertion_sort(ListaEnlazada<T>* vectorIS);
=======
    void Insertion_sort(ListaEnlazada<T>* listaEnlazada);
>>>>>>> acd01e3e5de85cf2db701ba6819529f24a784edb
>>>>>>> parent of 8b0dd65... vamo a ver
    ~InsertionSort();
};
#endif // INSERTION_H
