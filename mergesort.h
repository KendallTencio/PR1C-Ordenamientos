#ifndef MERGESORT_H
#define MERGESORT_H
//#include<stdlib.h>
//#include<stdio.h>

class MergeSort
{
private:
    int x = 0;
    int vectorMS[20];
public:
    MergeSort();
    template <class T>
    void mergesorting(T *vectorMS, int l, int r);
    template <class T>
    void merge(T *vectorMS, int l, int m, int r);
    ~MergeSort();
};

#endif // MERGESORT_H
