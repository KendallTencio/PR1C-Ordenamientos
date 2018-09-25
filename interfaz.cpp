#include "interfaz.h"
#include "ui_interfaz.h"
#include <cstdlib>
#include <ctime>
#include "bubblesort.cpp"
#include "insertion.cpp"
#include "bi_bubblesort.cpp"
#include "selection.cpp"
#include "shell.cpp"
#include "quicksort.cpp"
#include "heapsort.cpp"
#include "binsort.cpp"
#include "mergesort.cpp"
#include "objetoprueba.cpp"
#include "radixsort.cpp"
#include "pila.h"
#include "pila.cpp"
#include <iostream>

using namespace std;

Interfaz::Interfaz(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Interfaz)
{
    ui->setupUi(this);
}

Interfaz::~Interfaz()
{
    delete ui;
}

void Interfaz::on_pushButton_clicked()
{

      srand(time(0));
      int i;
      int vector[20];
      int vectorOBJ[20];

      //char vectorC[] = {'q','t','s','u','c','k','s'};

      //------------------------Bubble Bidireccional--------------------------------------------

      BubbleSort<int> burbujaPrueba;
      for (i = 0; i<19; i++){
          vector[i] = (1 + rand() % 100);
      }
      cout<<"Lista desordenada con el Bubble: "<<endl;
      cout<<"\n";
      for (i = 0; i<19; i++){
          cout<<vector[i];
          cout<<", ";
      }
      cout<<"\n"<<endl;
      burbujaPrueba.bubble_sort(vector);
      cout<<"Lista ordenada con el Bubble: "<<endl;
      cout<<"\n";
      for (i = 0; i<19; i++){
          cout<<vector[i];
          cout<<", ";
      }
      cout<<"\n"<<endl;

      //------------------------Bubble Bidireccional--------------------------------------------
      BIBubbleSort<int> burbujaBIPrueba;
      for (i = 0; i<19; i++){
          vector[i] = (1 + rand() % 100);
      }
      cout<<"Lista desordenada con el Bubble Bidireccional: "<<endl;
      cout<<"\n";
      for (i = 0; i<19; i++){
          cout<<vector[i];
          cout<<", ";
      }
      cout<<"\n"<<endl;

      burbujaBIPrueba.bubbleBi_sort(vector);
      cout<<"Lista ordenada con el Bubble Bidireccional: "<<endl;

      cout<<"\n";
      for (i = 0; i<19; i++){
          cout<<vector[i];
          cout<<", ";
      }
      cout<<"\n"<<endl;

      //------------------------BinSort--------------------------------------------
      //BinSort<int> binPrueba;
      for (i = 0; i<19; i++){
          vector[i] = (1 + rand() % 100);
      }
      cout<<"Lista desordenada con el BinSort: "<<endl;
      cout<<"\n";
      for (i = 0; i<19; i++){
          cout<<vector[i];
          cout<<", ";
      }
      cout<<"\n"<<endl;

      //binPrueba.binSort(vector, 19);
      cout<<"Lista ordenada con el BinSort: "<<endl;

      cout<<"\n";
      for (i = 0; i<19; i++){
          cout<<vector[i];
          cout<<", ";
      }
      cout<<"\n"<<endl;

      //---------------------------Insertion-------------------------------------------------------
          InsertionSort<int> insertionPrueba;
          for (i = 0; i<19; i++)
          {
              vector[i] = (1 + rand() % 100);
          }

          cout<<"\n\nLista desordenada con el Insertion: "<<endl;
          cout<<"\n";
          for (i = 0; i<19; i++){
              cout<<vector[i];
              cout<<", ";
          }
          cout<<"\n"<<endl;
          insertionPrueba.Insertion_sort(vector);
          cout<<"Lista ordenada con el Insertion: "<<endl;
          cout<<"\n";
          for (i = 0; i<19; i++){
              cout<<vector[i];
              cout<<", ";
          }
          cout<<"\n"<<endl;

          //-----------------------Selection-----------------------------------------------------------
          SelectionSort<int> selectionPrueba;
          for (i = 0; i<19; i++)
          {
              vector[i] = (1 + rand() % 100);
          }

          cout<<"\n\nLista desordenada con el Selection: "<<endl;
          cout<<"\n";
          for (i = 0; i<19; i++){
              cout<<vector[i];
              cout<<", ";
          }
          cout<<"\n"<<endl;
      //	int tamanioVector = vector.size();         //AquÃ­ lo mejor serÃ­a que se meta el tamaÃ±o del vector y no el 20 directamente
          selectionPrueba.selection(vector, 20);
          cout<<"Lista ordenada con el Selection: "<<endl;
          cout<<"\n";
          for (i = 0; i<19; i++){
              cout<<vector[i];
              cout<<", ";
          }
          cout<<"\n"<<endl;

          //------------------Shell-------------------------------------------------------------------
          ShellSort<int> shellPrueba;
          for (i = 0; i<19; i++)
          {
              vector[i] = (1 + rand() % 100);
          }

          cout<<"\n\nLista desordenada con el Shell: "<<endl;
          cout<<"\n";
          for (i = 0; i<19; i++){
              cout<<vector[i];
              cout<<", ";
          }
          cout<<"\n"<<endl;
          shellPrueba.shell(vector);
          cout<<"Lista ordenada con el Shell: "<<endl;
          cout<<"\n";
          for (i = 0; i<19; i++){
              cout<<vector[i];
              cout<<", ";
          }
          cout<<"\n"<<endl;

          //------------------QuickSort-------------------------------------------------------------------
          QuickSort<int> quicksortPrueba;
          for (i = 0; i<19; i++)
          {
              vector[i] = (1 + rand() % 100);
          }

          cout<<"\n\nLista desordenada con el QuickSort: "<<endl;
          cout<<"\n";
          for (i = 0; i<19; i++){
              cout<<vector[i];
              cout<<", ";
          }
          cout<<"\n"<<endl;
          quicksortPrueba.quickSort( vector , 20);          //AquÃ­ lo mejor serÃ­a que se meta el tamaÃ±o del vector y no el 20 directamente
          cout<<"Lista ordenada con el QuickSort: "<<endl;
          cout<<"\n";
          for (i = 0; i<19; i++){
              cout<<vector[i];
              cout<<", ";
          }
          cout<<"\n"<<endl;

          //------------------HeapSort-------------------------------------------------------------------
          HeapSort<int> heapsortPrueba;
          for (i = 0; i<19; i++)
          {
              vector[i] = (1 + rand() % 100);
          }

          cout<<"\n\nLista desordenada con el HeapSort: "<<endl;
          cout<<"\n";
          for (i = 0; i<19; i++){
              cout<<vector[i];
              cout<<", ";
          }
          cout<<"\n"<<endl;
          //NO IMPLEMENTADO AÃšN
          //heapsortPrueba.heapsort(vector, 20, 0);
          cout<<"Lista ordenada con el HeapSort: "<<endl;
          cout<<"\n";
          for (i = 0; i<19; i++){
              cout<<vector[i];
              cout<<", ";
          }
          cout<<"\n"<<endl;


          //------------------MergeSort-------------------------------------------------------------------
          MergeSort<int> mergesortPrueba;
          for (i = 0; i<19; i++)
          {
              vector[i] = (1 + rand() % 100);
          }

          cout<<"\n\nLista desordenada con el MergeSort: "<<endl;
          cout<<"\n";
          for (i = 0; i<19; i++){
              cout<<vector[i];
              cout<<", ";
          }
          cout<<"\n"<<endl;
          //NO IMPLEMENTADO AÃšN
          mergesortPrueba.mergesorting(vector, 0, 19);
          cout<<"Lista ordenada con el MergeSort: "<<endl;
          cout<<"\n";
          for (i = 0; i<19; i++){
              cout<<vector[i];
              cout<<", ";
          }
          cout<<"\n"<<endl;

          //------------------RadixSort-------------------------------------------------------------------
          RadixSort<int> radixsortPrueba;
          for (i = 0; i<19; i++)
          {
              vector[i] = (1 + rand() % 100);
          }

          cout<<"\n\nLista desordenada con el MergeSort: "<<endl;
          cout<<"\n";
          for (i = 0; i<19; i++){
              cout<<vector[i];
              cout<<", ";
          }
          cout<<"\n"<<endl;
          //NO IMPLEMENTADO AÃšN
          radixsortPrueba.radixsort(vector, 19);
          cout<<"Lista ordenada con el MergeSort: "<<endl;
          cout<<"\n";
          for (i = 0; i<19; i++){
              cout<<vector[i];
              cout<<", ";
          }
          cout<<"\n"<<endl;
}


