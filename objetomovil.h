#ifndef OBJETOMOVIL_H
#define OBJETOMOVIL_H


class ObjetoMovil
{
private:
    static int cantObjetos;
    int x;
    int y;
    int dato;
public:

    ObjetoMovil(int,int,int);
    ObjetoMovil();
    void mover(int,int);
    void setX(int);
    void setY(int);
    int getDato();
    int getCantObjetos();
    int getX();
    int getY();
};

#endif // OBJETOMOVIL_H
