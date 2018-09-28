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
    //void binSort(T* cola, int tam);
    //void binSort(T* pila, int tam);
    //void binSort(T* listaEnlazada, int tam);
    //void binSort(T* listaEnlazadaDoble, int tam);
    ~BinSort();
};

#endif // BINSORT_H
