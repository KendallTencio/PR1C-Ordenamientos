#ifndef INSERTION_H
#define INSERTION_H

template <class T>
class InsertionSort
{
  private:
    int x = 0;
    int vectorIS[20];
  public:
    InsertionSort();
    void Insertion_sort(T* vectorIS);
    ~InsertionSort();
};
#endif // INSERTION_H
