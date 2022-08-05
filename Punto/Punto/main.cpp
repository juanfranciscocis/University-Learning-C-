//
//  main.cpp
//  Punto
//
//  Created by Juan Cisneros on 10/11/21.
//

#include <iostream>
#include "Punto3D.h"
#include <cmath>

//DECLARACION
void distanciaEntrePuntos (Punto3D&, Punto3D&);

int main(int argc, const char * argv[]) {
   /*
    Punto p1(3,4);
    p1.infoPunto();
    
    {
    Punto p2 (0,0);
    }
    
    Punto p3(5,6);
    
    Punto& p1Referencia = p1;
    std::cout << "DATOS DESDE REFERENCIA" << std::endl;
    p1Referencia.infoPunto();
    
    
    Punto* p1Ptr = &p1;
    std::cout << "DATOS DESDE PUNTERO" << std::endl;
    p1Ptr->infoPunto();

    */
    
    
    
    //CREACCION DE OBJETOS
    //CREACION CON EL ORIGEN DE COORDENADAS
    const Punto3D pOrigen;
    pOrigen.datosPunto3D();
    
    //CREACIION DE PUNTOS PARA DETERMINAR DISTANCIA
    Punto3D p1 (300,200,-150);
    Punto3D p2 (0,-0,100);
    
    //USO DE FUNCION DISTANCIA ENTRE PUNTOS
    distanciaEntrePuntos(p1, p2);
    
    
    return 0;
}

void distanciaEntrePuntos (Punto3D& pA, Punto3D& pB){
    //CALCULO DE LA RESTA ENTRE COORDENADAS DE LOS PUNTOS
    float restaX = pB.getX() - pA.getX();
    float restaY = pB.getY() - pA.getY();
    float restaZ = pB.getZ() - pA.getZ();
    
    //CALCULO DE LA POTENCIA
    float powX = pow(restaX, 2);
    float powY = pow(restaY, 2);
    float powZ = pow(restaZ, 2);
    
    //CALCULO DE LA RAIZ PARA CALCULAR DISTANCIA
    float distancia = sqrt(powX+powY+powZ);
    std::cout << "LA DISTANCIA ENTRE PUNTOS ES: " << distancia << std::endl;
    
    
}

