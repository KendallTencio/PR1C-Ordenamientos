#ifndef MERGESORT_H
#define MERGESORT_H

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
};

#endif // MERGESORT_H
