#include "pila.h"

//Basado en: http://www.java2s.com/Code/Cpp/Class/Stackclassusingastructure.htm

Pila::Pila()
{
  cima = 0;
}
template <class T>
void Pila::push(T ch)
{
  if(cima==SIZE) {
    cout << "Pila llena\n";
    return;
  }
  registroPila[cima] = ch;
  cima++;
}

char Pila::pop()
{
  if(cima==0) {
    cout << "Pila vacía\n";
    return 0; // retorna nulo a la pila
  }
  cima--;
  return registroPila[cima];
}
