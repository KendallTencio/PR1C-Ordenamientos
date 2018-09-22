#ifndef BINSORT_H
#define BINSORT_H


class BinSort
{
private:
    int* data;
    int count;
public:
    BinSort();
    void binsort(int* data, int count);
    ~BinSort();
};

#endif // BINSORT_H
