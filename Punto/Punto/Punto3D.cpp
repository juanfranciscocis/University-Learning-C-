//
//  Punto3D.cpp
//  Punto
//
//  Created by Juan Cisneros on 10/13/21.
//

#include <stdio.h>
#include "Punto3D.h"
#include <iostream>

//CONSTRUCTOR
Punto3D::Punto3D(float cordX, float cordY, float cordZ){
    setY(cordY);
    setX(cordX);
    setZ(cordZ);
}

//DESTRUCTOR
Punto3D::~Punto3D(){
    //IMPRIMO PARA IDENTIFICAR DESTRUCCION
    std::cout << "DESTRUIDO EL OBJETO " << getX() << " , " << getY() << " , " << getZ() << std::endl;
}

//FUNCIONES SET Y GET
void Punto3D::setX(float cordX){
    x= cordX;
}

float Punto3D::getX() const {
    return x;
}

void Punto3D::setY(float cordY){
    y=cordY;
}

float Punto3D::getY() const {
    return y;
}

void Punto3D::setZ(float cordZ){
    z=cordZ;
}

float Punto3D::getZ() const {
    return z;
}

//FUNCION DE IMPRESION DE DATA
void Punto3D::datosPunto3D()const{
    std::cout << " DATOS PUNTO3D " << std::endl;
    std::cout << "X= " << getX() << std::endl;
    std::cout << "Y= " << getY() << std::endl;
    std::cout << "Z= " << getZ() << std::endl;
}
