#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "Estructuras/listaenlazada.cpp"
template <class T>
class BubbleSort: public ListaEnlazada<T>
{
  private:
    int x = 0;
    int vectorBS[20];
  public:
    BubbleSort();
    void bubble_sort(ListaEnlazada<T>*);
    void bubble_sort(T* vectorBS);
    //void bubble_sort(Cola<T>*);
    //void bubble_sort(T* pila);
<<<<<<< HEAD


=======
    //void bubble_sort(T*);
>>>>>>> acd01e3e5de85cf2db701ba6819529f24a784edb
    //void bubble_sort(T* listaEnlazadaDoble);
    ~BubbleSort();
};
#endif // BUBBLESORT_H


