//
//  Punto2D.cpp
//  ProyectoLineaComposicionYAgregacion
//
//  Created by Juan Cisneros on 10/27/21.
//

#include <stdio.h>


#include <stdio.h>
#include "Punto2D.h"
#include <iostream>

//CONSTRUCTOR
Punto2D::Punto2D(float cordX, float cordY){
    setY(cordY);
    setX(cordX);

}

//DESTRUCTOR
Punto2D::~Punto2D(){
    //IMPRIMO PARA IDENTIFICAR DESTRUCCION
    //std::cout << "DESTRUIDO EL OBJETO " << getX() << " , " << getY() << std::endl;
}

//FUNCIONES SET Y GET
void Punto2D::setX(float cordX){
    x= cordX;
}

float Punto2D::getX() const {
    return x;
}

void Punto2D::setY(float cordY){
    y=cordY;
}

float Punto2D::getY() const {
    return y;
}



//FUNCION DE IMPRESION DE DATA
void Punto2D::infoPunto2D()const{
    std::cout << " DATOS Punto2D " << std::endl;
    std::cout << "X= " << getX() << std::endl;
    std::cout << "Y= " << getY() << std::endl;
    
}
