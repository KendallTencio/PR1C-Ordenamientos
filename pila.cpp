#include "pila.h"

Pila::Pila()
{
  topOfStack = 0;
}

void Pila::push(char ch)
{
  if(topOfStack==SIZE) {
    cout << "Pila llena\n";
    return;
  }
  stackData[topOfStack] = ch;
  topOfStack++;
}

char Pila::pop()
{
  if(topOfStack==0) {
    cout << "Pila vacía\n";
    return 0; // retorna nulo a la pila
  }
  topOfStack--;
  return stackData[topOfStack];
}
