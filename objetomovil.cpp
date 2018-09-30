#include "objetomovil.h"
ObjetoMovil::ObjetoMovil()
{
    this->x =0;
    this->y =0;
    this->dato =0;
}

ObjetoMovil::ObjetoMovil(int _x,int _y,int _dato)
{
    this->x =_x;
    this->y =_y;
    this->dato =_dato;
}

void ObjetoMovil::setX(int _x)
{
    this->x=_x;
}

void ObjetoMovil::setY(int _y)
{
    this->y=_y;
}
void ObjetoMovil::mover(int _x,int _y)
{
    this->x =_x;
    this->y =_y;
}

int ObjetoMovil::getDato()
{
    return dato;
}

int ObjetoMovil::getX()
{
    return x;
}

int ObjetoMovil::getY()
{
    return y;
}
