// C++ program to sort an array using bucket sort
#include <iostream>
#include <algorithm>
#include <vector>
#include "binsort.h"
using namespace std;

BinSort::BinSort(){}

// Function to sort arr[] of size n using bucket sort
template<class T>
void BinSort::binSort(T* arr, int n)
{
    // 1) Create n empty buckets
    vector<int> b[n];

    // 2) Put array elements in different buckets
    for (int i=0; i<n; i++)
    {
       int bi = n*arr[i]; // Index in bucket
       b[bi].push_back(arr[i]);
    }

    // 3) Sort individual buckets
    for (int i=0; i<n; i++)
       sort(b[i].begin(), b[i].end());

    // 4) Concatenate all buckets into arr[]
    int index = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < b[i].size(); j++)
          arr[index++] = b[i][j];
}

BinSort::~BinSort(){}
