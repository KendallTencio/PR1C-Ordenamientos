#ifndef RADIXSORT_H
#define RADIXSORT_H

template <class T>
class RadixSort
{
private:
    int x = 0;
    int vectorRS[20];
public:
    RadixSort();
    void radixsort(T *vectorRS, int n);
    void countSort(T *vectorRS, int n, int exp);
    int getMax(T *vectorRS, int n);
    ~RadixSort();
};

#endif // RADIXSORT_H

