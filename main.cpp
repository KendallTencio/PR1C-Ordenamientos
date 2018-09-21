#include <QCoreApplication>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "bubblesort.cpp"
#include "insertion.cpp"
#include "bi_bubblesort.cpp"
#include "selection.cpp"
#include "shell.cpp"
#include "quicksort.cpp"
#include "heapsort.cpp"
//#include "binsort.cpp"
#include "objetoprueba.cpp"
using namespace std;

//Este código es una modificación del original en lwh.free.fr

/*
• Selección *
• Inserción *
• Burbuja *
• Burbuja bidireccional *
• Shell *
• QuickSort *
• HeapSort
• MergeSort
• RadixSort
• BinSort
• FlashSort (pts Extras)
*/

//Prototipos
template <class T>
void imprimir(T* vector);

//Este main se encarga de imprimir en consola
int main(){
    srand(time(0));
    int i;
    int vector[20];
    int vectorOBJ[20];

    //char vectorC[] = {'q','t','s','u','c','k','s'};

    //------------------------Bubble Bidireccional--------------------------------------------
    BIBubbleSort burbujaBiPrueba;
    for (i = 0; i<19; i++){
        vector[i] = (1 + rand() % 100);
    }
    cout<<"Lista desordenada con el Bubble Bidireccional: "<<endl;
    imprimir(vector);
    burbujaBiPrueba.bubbleBi_sort(vector);
    cout<<"Lista ordenada con el Bubble Bidireccional: "<<endl;
    imprimir (vector);

    //--------------------------Bubble----------------------------------------------------------
    BubbleSort burbujaPrueba;
    for (i = 0; i<19; i++)
    {
        vector[i] = (1 + rand() % 100);
    }

    for (i = 0; i < 19; i++){
       ObjPrueba objElemento(1 + rand() % 10000);
       vectorOBJ[i] = objElemento.getPlaca();
    }
    cout<<"\n\nLista desordenada con el Bubble: "<<endl;
    imprimir(vectorOBJ);
    burbujaPrueba.bubble_sort(vectorOBJ);
    cout<<"Lista ordenada con el Bubble: "<<endl;
    imprimir (vectorOBJ);

    //---------------------------Insertion-------------------------------------------------------
    InsertionSort insertionPrueba;
    for (i = 0; i<19; i++)
    {
        vector[i] = (1 + rand() % 100);
    }

    cout<<"\n\nLista desordenada con el Insertion: "<<endl;
    imprimir(vector);
    insertionPrueba.Insertion_sort(vector);
    cout<<"Lista ordenada con el Insertion: "<<endl;
    imprimir (vector);

    //-----------------------Selection-----------------------------------------------------------
    SelectionSort selectionPrueba;
    for (i = 0; i<19; i++)
    {
        vector[i] = (1 + rand() % 100);
    }

    cout<<"\n\nLista desordenada con el Selection: "<<endl;
    imprimir(vector);
//	int tamanioVector = vector.size();         //Aquí lo mejor sería que se meta el tamaño del vector y no el 20 directamente
    selectionPrueba.selection(vector, 20);
    cout<<"Lista ordenada con el Selection: "<<endl;
    imprimir (vector);

    //------------------Shell-------------------------------------------------------------------
    ShellSort shellPrueba;
    for (i = 0; i<19; i++)
    {
        vector[i] = (1 + rand() % 100);
    }

    cout<<"\n\nLista desordenada con el Shell: "<<endl;
    imprimir(vector);
    shellPrueba.shell(vector);
    cout<<"Lista ordenada con el Shell: "<<endl;
    imprimir (vector);

    //------------------QuickSort-------------------------------------------------------------------
    QuickSort quicksortPrueba;
    for (i = 0; i<19; i++)
    {
        vector[i] = (1 + rand() % 100);
    }

    cout<<"\n\nLista desordenada con el QuickSort: "<<endl;
    imprimir(vector);
    quicksortPrueba.quickSort( vector , 20);          //Aquí lo mejor sería que se meta el tamaño del vector y no el 20 directamente
    cout<<"Lista ordenada con el QuickSort: "<<endl;
    imprimir (vector);

    //------------------HeapSort-------------------------------------------------------------------
    HeapSort heapsortPrueba;
    for (i = 0; i<19; i++)
    {
        vector[i] = (1 + rand() % 100);
    }

    cout<<"\n\nLista desordenada con el HeapSort: "<<endl;
    imprimir(vector);
    //NO IMPLEMENTADO AÚN
   // heapsortPrueba.heapsort(vector, 20, 0);
    cout<<"Lista ordenada con el HeapSort: "<<endl;
    imprimir (vector);

    //------------------BinSort-------------------------------------------------------------------
    //BinSort binsortPrueba;
    for (i = 0; i<19; i++)
    {
        vector[i] = (1 + rand() % 100);
    }

    cout<<"\n\nLista desordenada con el BinSort: "<<endl;
    imprimir(vector);
    //NO IMPLEMENTADO AÚN
   // binsortPrueba.binsort(vector, 20);
    cout<<"Lista ordenada con el BinSort: "<<endl;
    imprimir (vector);

    return 0;
}

template <class T>
void imprimir(T vector[])
{
    int i;
    cout<<"\n";
    for (i = 0; i<19; i++){
        cout<<vector[i];
        cout<<", ";
    }
    cout<<"\n"<<endl;
}

 //Este código es una modificación de códigos originales de lwh.free.fr





