#ifndef MERGESORT_H
#define MERGESORT_H

template <class T>
class MergeSort
{
private:
    int x = 0;
    int vectorMS[20];
public:
    MergeSort();
    void mergesorting(T *vectorMS, int l, int r);
    void merge(T *vectorMS, int l, int m, int r);
    ~MergeSort();
};

#endif // MERGESORT_H
