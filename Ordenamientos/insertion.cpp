#include "insertion.h"
#include "Estructuras/listaenlazada.h"

template <class T>
InsertionSort<T>::InsertionSort(){
    x = 1;
}
/*
template <class T>
void InsertionSort<T>::Insertion_sort(T* vectorIS)
{
    int i, j;
    int actual;

    for (i = 1; i < 20; i++) {
        actual = vectorIS[i];
        for (j = i; j > 0 && vectorIS[j - 1] > actual; j--) {
            vectorIS[j] = vectorIS[j - 1];
        }
        vectorIS[j] = actual;
    }
}
*/
template <class T>
void InsertionSort<T>::Insertion_sort(ListaEnlazada<T>* listaEnlazada)
{
    int i, j;
    int actual;

    for (i = 1; i < listaEnlazada->getTam(); i++) {
        listaEnlazada->insertarPos(listaEnlazada->getPos(i)->getElemento(),actual);
        for (j = i; j > 0 /*&& listaEnlazada->getPos(j - 1) > actual*/; j--) {
            listaEnlazada->insertarPos(listaEnlazada->getPos(j - 1)->getElemento(),j);
        }
        listaEnlazada->insertarPos(listaEnlazada->getPos(actual)->getElemento(),j);
    }
}

template <class T>
InsertionSort<T>::~InsertionSort()
{

}
