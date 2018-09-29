#include "bubblesort.h"
#include <iostream>
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
void BubbleSort<T>::bubble_sort(ListaEnlazada<T>* listaEnlazada)
    {
    int iteracion = 0;
    bool permutation = true;
    int actual;
    while ( permutation) {
        permutation = false;
        iteracion ++;
        for (actual=0;listaEnlazada->getTam()<actual;actual++) {
            if (listaEnlazada->getPos(actual)>listaEnlazada->getPos(actual+1)){
                permutation = true;
                // Intercambiamos los dos elementos
                Nodo<T>* temp = listaEnlazada->getPos(actual);
                listaEnlazada->insertarPos(listaEnlazada->getPos(actual+1)->getElemento(),actual);
                listaEnlazada->insertarPos(temp->getElemento(),actual+1);
            }
        }
    }
    for(int i=0;listaEnlazada->getTam()-1>i;i++)
        std::cout << listaEnlazada->getPos(i)->getElemento() <<std::endl;
   }


/*
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
<<<<<<< HEAD
*/

=======
*//*
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
    }*/
>>>>>>> acd01e3e5de85cf2db701ba6819529f24a784edb
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





