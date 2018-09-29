#include "insertion.h"
<<<<<<< HEAD

=======
#include "Estructuras/listaenlazada.cpp"
>>>>>>> acd01e3e5de85cf2db701ba6819529f24a784edb

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
    Nodo<int> *actual;

    for (i = 1; i < listaEnlazada->getTam(); i++) {
        actual = listaEnlazada->getPos(i);
        for (j = i; j > 0 /*&& listaEnlazada->getPos(j - 1) > actual*/; j--) {
            listaEnlazada->insertarPos(listaEnlazada->getPos(j - 1)->getElemento(),j);
        }
        listaEnlazada->insertarPos(listaEnlazada->getPos(actual->getElemento())->getElemento(),j);
    }
}

template <class T>
InsertionSort<T>::~InsertionSort()
{

}
