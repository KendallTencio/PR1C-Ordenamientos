#include "pila.h"

Pila::Pila()
{
  cout << "Constructing a stack\n";
  topOfStack = 0;
}

void Pila::push(char ch)
{
  if(topOfStack==SIZE) {
    cout << "Stack is full\n";
    return;
  }
  stackData[topOfStack] = ch;
  topOfStack++;
}

char Pila::pop()
{
  if(topOfStack==0) {
    cout << "Stack is empty\n";
    return 0; // return null on empty stack
  }
  topOfStack--;
  return stackData[topOfStack];
}
