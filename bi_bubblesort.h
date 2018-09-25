#ifndef BI_BUBBLESORT_H
#define BI_BUBBLESORT_H
template <class T>
class BIBubbleSort
{
  private:
    int x = 0;
    int vectorBIBS[20];
  public:
   // template <class T>
    BIBubbleSort();
    void bubbleBi_sort(T* vectorBIBS);
    ~BIBubbleSort();
};
#endif // BI_BUBBLESORT_H
