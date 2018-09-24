#ifndef BINSORT_H
#define BINSORT_H

class BinSort
{
private:
    int vectorBinS[];
  //  float b[];
    int count;
public:
    BinSort();
    template<class T>
    void binSort(T *vectorBinS, int tam);
    ~BinSort();
};

#endif // BINSORT_H
