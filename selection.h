#ifndef SELECTION_H
#define SELECTION_H
class SelectionSort
{
  private:
    int x = 0;
    int vectorSS[20];
    int taille;
  public:
   // template <class T>
    SelectionSort();
    template <class T>
    void selection(T* vectorSS, int tamanio);
    ~SelectionSort();
};
#endif // SELECTION_H
