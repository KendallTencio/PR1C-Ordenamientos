#ifndef INSERTION_H
#define INSERTION_H
#include "Estructuras/listaenlazada.cpp"
template <class T>
class InsertionSort:public ListaEnlazada<T>
{
  private:
    int x = 0;
    int vectorIS[20];
  public:
    InsertionSort();
    void Insertion_sort(T* vectorIS);
    void Insertion_sort(ListaEnlazada<T>* vectorIS);
    ~InsertionSort();
};
#endif // INSERTION_H
