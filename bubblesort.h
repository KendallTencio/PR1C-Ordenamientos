#ifndef BUBBLESORT_H
#define BUBBLESORT_H
template <class T>
class BubbleSort
{
  private:
    int x = 0;
    int vectorBS[20];
  public:
    BubbleSort();
    void bubble_sort(T* vectorBS);
    ~BubbleSort();
};
#endif // BUBBLESORT_H
