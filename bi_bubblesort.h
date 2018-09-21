#ifndef BI_BUBBLESORT_H
#define BI_BUBBLESORT_H
class BIBubbleSort
{
  private:
    int x = 0;
    int vectorBIBS[20];
  public:
   // template <class T>
    BIBubbleSort();
    template <typename T>
    void bubbleBi_sort(T* vectorBIBS);
};
#endif // BI_BUBBLESORT_H
