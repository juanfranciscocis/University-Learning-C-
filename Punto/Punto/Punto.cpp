//
//  Punto.cpp
//  Punto
//
//  Created by Juan Cisneros on 10/11/21.
//

#include <stdio.h>
#include "Punto.h"
#include <iostream>

Punto::Punto(float x1, float x2){
    setX(x1);
    setY(x2);
}

//Destructor .cpp
Punto::~Punto(){
    std::cout << "OBJETO DESTRUIDO" << std::endl;
    infoPunto();
}

void Punto::setX(float x1){
    x=x1;
}

float Punto::getX() const {
    return x;
}

void Punto::setY(float y1){
    y=y1;
}

float Punto::getY() const {
    return y;
}

void Punto::infoPunto()const{
    std::cout << "X = " << x << " Y = " << y << std::endl;
}
