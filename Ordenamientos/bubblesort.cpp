#include "bubblesort.h"
#include "Estructuras/listaenlazada.h"
#include <iostream>
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
*//*
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
*/
template <class T>
Nodo<T>* BubbleSort<T>::bubble_sort(ListaEnlazada<T>* listaEnlazada)
{
    Nodo<T>* actual;
    bool cambio=true;
    int indice=0;
    while(cambio){
        cambio = false;
        while( indice<listaEnlazada->getTam() )
        {
            if(listaEnlazada->getPos(indice)->getElemento()>listaEnlazada->getPos(indice)->getElemento())
            {
                cambio=true;

                aux = listaEnlazada->getPos(indice);
                listaEnlazada->EliminarPos(indice);
                listaEnlazada->insertarPos(indice,aux->getElemento()+1);


            }
            indice++;

        }
    }
    return aux;


}

/*
template <class T>
void BubbleSort<T>::bubble_sort(ListaDoblementeEnlazada<T> listaEnlazadaDoble)
    {

    }
*/
template <class T>
BubbleSort<T>::~BubbleSort()
{

}





