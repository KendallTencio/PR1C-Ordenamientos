#ifndef SELECTION_H
#define SELECTION_H

template <class T>
class SelectionSort
{
  private:
    int x = 0;
    int vectorSS[20];
    int taille;
  public:
   // template <class T>
    SelectionSort();
    void selection(T* vectorSS, int tamanio);
    ~SelectionSort();
};
#endif // SELECTION_H
