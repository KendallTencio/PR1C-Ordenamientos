#ifndef BUBBLESORT_H
#define BUBBLESORT_H

template <class T>
class BubbleSort
{
  private:
    int x = 0;
    int vectorBS[20];
  public:
    BubbleSort();
    void bubble_sort(T* vectorBS);
    //void bubble_sort(Cola<T>*);
    //void bubble_sort(T* pila);

    //void bubble_sort(T*);

    //void bubble_sort(T*);
    //void bubble_sort(T* listaEnlazadaDoble);
    ~BubbleSort();
};
#endif // BUBBLESORT_H


