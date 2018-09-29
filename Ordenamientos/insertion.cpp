#include "insertion.h"
<<<<<<< HEAD

<<<<<<< HEAD
<<<<<<< HEAD

#include "Estructuras/listaenlazada.cpp"

#include "listaenlazada.cpp"
=======
>>>>>>> parent of 67eef6d... Merge branch 'master' of https://github.com/KendallTencio/PR1C-Ordenamientos
=======
=======
#include "Estructuras/listaenlazada.cpp"
>>>>>>> acd01e3e5de85cf2db701ba6819529f24a784edb
>>>>>>> parent of 8b0dd65... vamo a ver

template <class T>
InsertionSort<T>::InsertionSort(){
    x = 1;
}

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

template <class T>
void InsertionSort<T>::Insertion_sort(ListaEnlazada<T>* listaEnlazada)
{
    int i, j;
    int actual;

    for (i = 1; i < 20; i++) {
        listaEnlazada->getPos(actual) = listaEnlazada->getPos(i);;
        for (j = i; j > 0 && listaEnlazada->getPos(j - 1) > actual; j--) {
            listaEnlazada->insertarPos(listaEnlazada->getPos(j - 1),j);
        }
        listaEnlazada->insertarPos(listaEnlazada->getPos(actual),j);
    }
}

template <class T>
InsertionSort<T>::~InsertionSort()
{

}
