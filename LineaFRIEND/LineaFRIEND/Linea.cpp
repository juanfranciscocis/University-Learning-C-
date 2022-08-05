#include <iostream>
#include "Linea.h"
#include <cmath>
using namespace std;

//Constructor
Linea::Linea (Punto2D p1, Punto2D p2)
{
    setPInicial(p1);
    setPFinal(p2);
}

//Destructor
Linea::~Linea()
{
    
}

//Funciones set
void Linea::setPInicial(Punto2D p1)
{
    pInicial=p1; //Asignación de los valores del objeto al objeto dato miembro
}

void Linea::setPFinal(Punto2D p2)
{
    pFinal=p2;
}

//Funciones get
Punto2D Linea::getPInicial() const
{
    return pInicial; //Se retorna el objeto pInicial que es dato miembro de la clase
}
Punto2D Linea::getPFinal() const
{
    return pFinal; //Se retorna el objeto pFinal que es dato miembro de la clase
}

//Función longitudLinea
float Linea::longitudLinea() const
{
    float longLinea=0; //Variable local para almacenar la longitud de la línea
    //Cálculo de la longitud de la línea
    longLinea=sqrt(pow(getPFinal().getX()-getPInicial().getX(),2)+pow(getPFinal().getY()-getPInicial().getY(),2));
    return longLinea; //Retorna el valor de la longitud
}

//Función infoLinea
//Mostrar la información de la línea: punto inicial, punto final, y longitud.
void Linea::infoLinea() const
{
    cout << "Información de la línea: " << endl;
    cout << "Punto inicial: " << endl; //getPInicial().getX() << "," << getPInicial().getY() << endl;
    getPInicial().infoPunto2D(); //Se obtiene el punto inicial y para él se utiliza la función infoPunto2D()
    cout << "Punto final: " << endl;
    getPFinal().infoPunto2D(); //Se obtiene el punto final y para él se utiliza la función infoPunto2D()
    cout << "Longitud: " << longitudLinea() << endl;
}
