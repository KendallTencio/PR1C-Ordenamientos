#ifndef RADIXSORT_H
#define RADIXSORT_H

class RadixSort
{
private:
    int x = 0;
    int vectorRS[20];
public:
    RadixSort();
    template <class T>
    void radixsort(T *vectorRS, int n);
    template <class T>
    void countSort(T *arr[], int n, int exp);
     template <class T>
    int getMax(T *arr[], int n);
    ~RadixSort();
};

#endif // RADIXSORT_H

