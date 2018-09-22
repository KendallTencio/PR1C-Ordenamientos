#ifndef QUICKSORT_H
#define QUICKSORT_H
class QuickSort
{
  private:
    int x = 0;
    int vectorQS[20];
    int size;
  public:
    QuickSort();
    template <class T>
    void quickSort(T * vectorQS, int size);
    ~QuickSort();
};

#endif // QUICKSORT_H
