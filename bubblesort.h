#ifndef BUBBLESORT_H
#define BUBBLESORT_H
//template <class T>
class BubbleSort
{
  private:
    int x = 0;
    int vectorBS[20];
  public:
   // template <class T>
    BubbleSort();
    template <typename T>
    void bubble_sort(T* vectorBS);
};
#endif // BUBBLESORT_H
