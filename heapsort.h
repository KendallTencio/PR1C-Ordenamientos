#ifndef HEAPSORT_H
#define HEAPSORT_H

class HeapSort
{
  private:
    int x = 0;
    int vectorHS[20];
    int n;
    int i;
  public:
    HeapSort();
    template <class T>
    void heapsort(T vectorHS, int n, int i);
};

#endif // HEAPSORT_H
