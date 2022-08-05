#include <iostream>
#include "Linea.h"
#include "Punto2D.h"
#include <cmath>
using namespace std;

void obtenerXPunto(Punto2D);
void setYFromOutSide(Punto2D &);
int main ()
{
    //Creación de puntos para la línea
    Punto2D pA (1,1);
    Punto2D pB (0,0);
    
    //Creación de la línea a partir de los dos puntos creados
    Linea l1 (pA,pB);
    
    //Creación de una línea con valores de parámetros por defecto
    Linea l2;
    
    //Mostrar información de la línea
    l1.infoLinea();
    l2.infoLinea();
    l2.setPFinal(pA);
    l2.infoLinea();
    
    obtenerXPunto(pA);
    setYFromOutSide(pA);
    pA.infoPunto2D();

    

}

void obtenerXPunto(Punto2D pp){
    cout << "FUNCION AMIGA IMPRIME DATO MIEMBRO: X =  " << pp.x << endl;
    cout << "FUNCION AMIGA IMPRIME DATO MIEMBRO: Y =  " << pp.y << endl;
}

void setYFromOutSide(Punto2D & pp2){
    pp2.y = 0; //Asigno 0 al dato Y de Punto2D
    std::cout << "IMPRIMO EL NUEVO DATO ASIGNADO AMIGO: " << pp2.getY() << std::endl;

}
