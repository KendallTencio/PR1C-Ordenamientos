#include "bi_bubblesort.h"

BIBubbleSort::BIBubbleSort(){
    x = 1;
}

template <class T>
void BIBubbleSort::bubbleBi_sort(T vectorBIBS[])
{
    bool permutation;
    int actual=0, siguiente=1;
    int comienzo=1, fin=19;
    do {
        permutation=false;
        while (((siguiente==1) && (actual<fin)) || ((siguiente==-1) && (actual>comienzo))) {
            actual += siguiente;
            if (vectorBIBS[actual]<vectorBIBS[actual-1]) {
                int temp = vectorBIBS[actual];
                vectorBIBS[actual]=vectorBIBS[actual-1];
                vectorBIBS[actual-1]=temp;
                permutation=true;
            }
        }
        if (siguiente==1) fin--; else comienzo++;
        siguiente = -siguiente;
    } while (permutation);
}
