#ifndef LISTAENLAZADA_H
#define LISTAENLAZADA_H



#include <iostream>


class ListaEnlazada
{
private:
    struct nodo{
               int elemento;        // en este caso es un numero entero
               struct nodo *sgte;
        };
public:
    ListaEnlazada();
    ListaEnlazada(int valor);
    typedef struct nodo *Tlista;
    template<class generico>
    void insertarInicio(generico valor);   //Como ves le quite que la clase sea template
    template<class generico>                     //y se usó solo donde se necesita
    void insertarFinal(generico valor);
    template<class generico>
    void insertarElemento(generico valor, int pos);
    void imprimirLista();           //Estos dos últimos métodos los pusiste con template en el cpp
    int getDimension();                 //pero aquí no tenían, ese era un problema


protected:
    Tlista lista;        //Lista es un nodo y en el cpp lo
};                           //igualaste a un int, eso daba error

#endif // LISTAENLAZADA_H
