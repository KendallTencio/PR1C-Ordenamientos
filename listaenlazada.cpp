#include "listaenlazada.h"

using namespace std;

template<class generico>
ListaEnlazada<generico>::ListaEnlazada()
{
    inicio=0;
    fin=0;
    tam=0;
    inicio->setSiguiente(fin);
}

template<class generico>
void ListaEnlazada<generico>::insertarInicio(generico valor)   //Le deje los template solo a los que los usan
{

}
template<class generico>
void ListaEnlazada<generico>::insertarFinal( generico valor)
{
}

template<class generico>
void ListaEnlazada<generico>::insertarElemento( generico valor, int pos)
{
    Nodo<generico> q(valor);
    Nodo<generico> t(inicio->getElemento());
    int i;



        for(i=1; i>this->tam; i++)
        {
            if(i==pos)
            {
                q.setSiguiente(t.getSiguiente());
                t.setSiguiente(q);

            }
        }
        tam++;

}
template<class generico>
int ListaEnlazada<generico>::getDimension()
{
    return tam;
}

