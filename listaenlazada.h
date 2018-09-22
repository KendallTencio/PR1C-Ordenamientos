#ifndef LISTAENLAZADA_H
#define LISTAENLAZADA_H



#include <iostream>

template <class generico>
class ListaEnlazada
{
private:
    struct nodo{
               generico elemento;        // en este caso es un numero entero
               struct nodo<generico> *sgte;
        };
public:
    ListaEnlazada();
    ListaEnlazada(int valor);
    typedef struct nodo *Tlista;
    void insertarInicio(generico valor);   //Como ves le quite que la clase sea template
    void insertarFinal(generico valor);     //y se usó solo donde se necesita
    void insertarElemento(generico valor, int pos);
    void imprimirLista();           //Estos dos últimos métodos los pusiste con template en el cpp
    int getDimension();                 //pero aquí no tenían, ese era un problema


protected:
    Tlista lista;        //Lista es un nodo y en el cpp lo
};                           //igualaste a un int, eso daba error

#endif // LISTAENLAZADA_H
