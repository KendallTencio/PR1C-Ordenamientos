#include "bubblesort.h"
template <class T>
BubbleSort<T>::BubbleSort(){
    x = 1;
}

template <class T>
void BubbleSort<T>::bubble_sort(T* vectorBS)
    {
        int iteracion = 0;
        bool permutation = true;
        int actual;

        while ( permutation) {
            permutation = false;
            iteracion ++;
            for (actual=0;actual<19-iteracion;actual++) {
                if (vectorBS[actual]>vectorBS[actual+1]){
                    permutation = true;
                    // Intercambiamos los dos elementos
                    T temp = vectorBS[actual];
                    vectorBS[actual] = vectorBS[actual+1];
                    vectorBS[actual+1] = temp;
                }
            }
        }

    }

template <class T>
void BubbleSort<T>::bubble_sort(T* cola)
    {

    }

template <class T>
void BubbleSort<T>::bubble_sort(T* pila)
    {

    }

template <class T>
void BubbleSort<T>::bubble_sort(T* listaEnlazada)
    {

    }

template <class T>
void BubbleSort<T>::bubble_sort(T* listaEnlazadaDoble)
    {

    }

template <class T>
BubbleSort<T>::~BubbleSort()
{

}
