#ifndef HEAPSORT_H
#define HEAPSORT_H

template <class T>
class HeapSort
{
  private:
    int x = 0;
    int vectorHS[20];
    int n;
    int i;
  public:
    HeapSort();
    void heapsort(T *vectorHS, int n, int i);
    ~HeapSort();
};

#endif // HEAPSORT_H
