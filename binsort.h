#ifndef BINSORT_H
#define BINSORT_H

template<class T>
class BinSort
{
private:
    int vectorBinS[];
    int count;
public:
    BinSort();
    void binSort(T *vectorBinS, int tam);
    ~BinSort();
};

#endif // BINSORT_H
