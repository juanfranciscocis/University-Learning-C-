#include <iostream>
#include "Punto2D.h"
using namespace std;

//Constructor
Punto2D::Punto2D (float x1, float y1)
{
    setX(x1);
    setY(y1);
}

//Destructor
Punto2D::~Punto2D ()
{
    //cout << "Objeto destruido. Punto2D: x="<< getX() << " y=" << getY() << endl;
}

//Funciones set

void Punto2D::setX(float x)
{
    this->x=x; //Asignación
}

void Punto2D::setY(float y1)
{
    y=y1; //Asignación
}

//Funciones get
float Punto2D::getX() const
{
    return x;
}
float Punto2D::getY() const
{
    return y;
}

//Función infoPunto2D
void Punto2D::infoPunto2D()const
{
    cout << "x=" << x << " y=" << y << endl;
}
