#include "shell.h"

template <class T>
ShellSort<T>::ShellSort(){
    x = 1;
}

template <class T>
void ShellSort<T>::auxShell(T* vector, int gap, int debut)
{
    int j,en_cours;
    for (int i = gap + debut; i < 20; i+=gap) {
        en_cours = vector[i];
        for (j = i; j >= gap && vector[j - gap] > en_cours; j-=gap) {
            vector[j] = vector[j - gap];
        }
        vector[j] = en_cours;
    }
}
template <class T>
void ShellSort<T>::shell(T* vector)
{
    int intervalles[5]={6,4,3,2,1};
    for (int ngap=0;ngap<5;ngap++) {
        for (int i=0;i<intervalles[ngap];i++)
            auxShell(vector,intervalles[ngap],i);
    }
}

template <class T>
ShellSort<T>::~ShellSort()
{

}
