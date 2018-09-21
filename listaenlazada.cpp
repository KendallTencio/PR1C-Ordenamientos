#include "listaenlazada.h"

using namespace std;

ListaEnlazada::ListaEnlazada()
{
    this->lista->elemento=0;
}

ListaEnlazada::ListaEnlazada(int valor)
{
    this->lista->elemento=valor;   //Aquí tenías lista igualado al valor y eso era Nodo = int, es decir, error
}
template<class generico>
void ListaEnlazada::insertarInicio(generico valor)   //Le deje los template solo a los que los usan
{
    Tlista q;
    q = new(struct nodo);
    q->elemento = valor;
    q->sgte = this->lista;
    this->lista  = q;
}
template<class generico>
void ListaEnlazada::insertarFinal( generico valor)
{
    Tlista t, q = new(struct nodo);

    q->elemento  = valor;
    q->sgte = 0;

    if(this->lista==0)
    {
        this->lista = q;
    }
    else
    {
        t = this->lista;
        while(t->sgte!=0)
        {
            t = t->sgte;
        }
        t->sgte = q;
    }

}

template<class generico>
void ListaEnlazada::insertarElemento( generico valor, int pos)
{
    Tlista q, t;
    int i;
    q = new(struct nodo);
    q->elemento = valor;

    if(pos==0)
    {
        this->insertarInicio(valor);
    }
    else
    {
        int x = 0;
        t = this->lista;

        for(i=1; t!=NULL; i++)
        {
            if(i==pos+x)
            {
                q->sgte = t->sgte;
                t->sgte = q;
                return;
            }
            t = t->sgte;
        }
    }

}
int ListaEnlazada::getDimension()
{   int i=0;
    while(lista != NULL)
    {
         this->lista = this->lista->sgte;
         i++;
    }
    return i;
}

void ListaEnlazada::imprimirLista( )
{
     int i = -1;

     while(lista != NULL)
     {
          cout <<' '<< i+1 <<") " << this->lista->elemento << endl;
          this->lista = this->lista->sgte;
          i++;
     }
}

