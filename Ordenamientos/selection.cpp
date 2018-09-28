#include "selection.h"

template <class T>
SelectionSort<T>::SelectionSort(){
  x = 1;
}

template <class T>
void SelectionSort<T>::selection(T *vector, int taille)
{
     int en_cours, plus_petit, j, temp;

     for (en_cours = 0; en_cours < taille - 1; en_cours++)
     {
         plus_petit = en_cours;
         for (j = en_cours; j < taille; j++){
              if (vector[j] < vector[plus_petit])
                  plus_petit = j;
         }
          temp = vector[en_cours];
          vector[en_cours] = vector[plus_petit];
          vector[plus_petit] = temp;
     }
}

template <class T>
SelectionSort<T>::~SelectionSort()
{

}
