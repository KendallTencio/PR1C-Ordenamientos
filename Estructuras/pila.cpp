#include "pila.h"
template<typename T>
Pila<T>::Pila()
{
    cima=0;
    tam=0;
}
template<typename T>
Pila<T>::~Pila(){}
template<typename T>
NodoPila<T>* Pila<T>::pop()
{
    NodoPila<T> *temp = this->getCima();
    this->EliminarPos(tam-1);
    return temp;
}
template<typename T>
void Pila<T>::push(T elem)
{
    NodoPila<T>  *nuevo = new NodoPila<T> (elem);
    NodoPila<T>  *temp = cima;
    if(!temp)
    {
        cima=nuevo;
    }else
    {
        while(temp->getSiguiente())
            temp=temp->getSiguiente();
        temp->setSiguiente(nuevo);
    }

    tam++;
    temp->~NodoPila();
}
template<typename T>
NodoPila<T>* Pila<T>::getCima()
{
    if (tam!=0)
        return this->getPos(tam-1);
}
template<typename T>
int Pila<T>::getTam()
{
    return tam;
}
template<typename T>
NodoPila<T>* Pila<T>::getPos(int pos)
{
    NodoPila<T> *temp = this->cima;
    int i=0;
    while (pos!=i) {
        temp=temp->getSiguiente();
        i++;

    }
    return temp;
}
template<typename T>
void Pila<T>::EliminarPos(int pos)
{
    NodoPila<T> *temp = cima;
    NodoPila<T> *eliminar;
    int i=0;
    if (pos==0)
    {
        if(!cima->getSiguiente())
        {
            cima->~NodoPila();
            cima=0;
        }else{
            cima=cima->getSiguiente();
        }


    }else{


    while (pos-1!=i) {
        temp=temp->getSiguiente();
        i++;
    }
    eliminar = temp->getSiguiente();
    temp->setSiguiente(eliminar->getSiguiente());
    eliminar->~NodoPila();
    tam--;
    }

}

template<typename T>
int Pila<T>::isvacia(){
   if(tam==0)
       return 0;
   return 1;
}
