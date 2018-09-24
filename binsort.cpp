#include "binsort.h"

BinSort::BinSort(){

}

template<class T>
void BinSort::binSort(T arr, T b, int tam)
{
    // 1) Create n empty buckets
   // b[tam];

    // 2) Put array elements in different buckets
    for (int i=0; i<tam; i++)
    {
       int bi = tam*arr[i]; // Index in bucket
       b[bi].push_back(arr[i]);
    }

    // 3) Sort individual buckets
    for (int i=0; i<tam; i++)
       sort(b[i].begin(), b[i].end());

    // 4) Concatenate all buckets into arr[]
    int index = 0;
    for (int i = 0; i < tam; i++)
        for (int j = 0; j < b[i].size(); j++)
          arr[index++] = b[i][j];
}

