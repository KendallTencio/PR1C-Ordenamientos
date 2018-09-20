#include "insertion.h"

InsertionSort::InsertionSort(){
    x = 1;
}

template <class T>
void InsertionSort::Insertion_sort(T* vectorIS)
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
