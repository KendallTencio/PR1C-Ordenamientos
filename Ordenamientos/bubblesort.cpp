#include "bubblesort.h"
template <class T>
BubbleSort<T>::BubbleSort(){
    x = 1;
}
/*
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
void BubbleSort<T>::bubble_sort(Cola<T>* cola)
    {
        int iteracion = 0;
        bool permutation = true;
        int actual;

        while ( permutation) {
            permutation = false;
            iteracion ++;
            for (actual=0;cola->isVacia();actual++) {
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
void BubbleSort<T>::bubble_sort(Cola<int> pila)
    {

    }

template <class T>
void BubbleSort<T>::bubble_sort(ListaEnlazada<T>* listaEnlazada)
    {
    int iteracion = 0;
    bool permutation = true;
    int actual;

    while ( permutation) {
        permutation = false;
        iteracion ++;
        for (actual=0;listaEnlazada->isVacia();actual++) {

            if (listaEnlazada->getPos(actual)->getElemento()>listaEnlazada(actual+1)->getElemento()){
                permutation = true;
                // Intercambiamos los dos elementos
                Nodo<T> temp = listaEnlazada->getPos(actual);
                listaEnlazada->insertarPos(listaEnlazada->getPos(actual+1)->getElemento(),actual);
                listaEnlazada->insertarPos(temp->getElemento(),actual+1);
            }
        }
    }
    }


template <class T>
void BubbleSort<T>::bubble_sort(ListaDoblementeEnlazada<T> listaEnlazadaDoble)
    {

    }

template <class T>
BubbleSort<T>::~BubbleSort()
{

}

*/



