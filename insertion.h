#ifndef INSERTION_H
#define INSERTION_H
class InsertionSort
{
  private:
    int x = 0;
    int vectorIS[20];
  public:
    InsertionSort();
    template <class T>
    void Insertion_sort(T* vectorIS);
};
#endif // INSERTION_H
