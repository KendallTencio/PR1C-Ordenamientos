#include "quicksort.h"

QuickSort::QuickSort(){
    x = 1;
}

template <class T>
void QuickSort::quickSort( T * vector , int tamanio ) {
    int muro , actual , pivote , tmp ;
    if ( tamanio < 2 ) return ;
    // Tomamos como pivote el elemento más correcto
    pivote = vector [ tamanio - 1 ] ;
    muro   = actual = 0 ;
    while ( actual < tamanio ) {
        if ( vector [ actual ] <= pivote ) {
            if (muro != actual) {
                tmp = vector [ actual ] ;
                vector [ actual ] = vector [ muro ] ;
                vector [ muro] = tmp ;
            }
            muro ++;
        }
        actual ++;
    }
    quickSort( vector , muro - 1 ) ;
    quickSort( vector + muro - 1 , tamanio- muro + 1 ) ;
}
