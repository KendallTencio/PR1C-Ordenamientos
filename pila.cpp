#include "pila.h"

Pila::Pila()
{
  cima = 0;
}
template <class T>
void Pila::push(T ch)
{
  if(cima==SIZE) {
    return;   //En caso de que la pila esté llena
  }
  registroPila[cima] = ch;
  cima++;
}

char Pila::pop()
{
  if(cima==0) {
    return 0; // retorna nulo porque la pila está vacía.
  }
  cima--;
  return registroPila[cima];
}
