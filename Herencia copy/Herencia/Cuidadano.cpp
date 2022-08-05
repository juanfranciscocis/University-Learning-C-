//
//  Cuidadano.cpp
//  Herencia
//
//  Created by Juan Cisneros on 12/1/21.
//

#include <stdio.h>
#include "Cuidadano.h"


Ciudadano::Ciudadano(std::string nombre, int edad){
    setNombre(nombre);
    setEdad(edad);
}

Ciudadano::~Ciudadano(){}


void Ciudadano::setNombre(std::string nombre){
    this->nombre=nombre;
}

std::string Ciudadano::getNombre() const {
    return nombre;
}

void Ciudadano::setEdad(int edad){
    this->edad = edad;
}

int Ciudadano::getEdad() const {
    return edad;
}

void Ciudadano::infoCiudadano()const{
    std::cout << "NOMBRE: " << getNombre() << std::endl;
    std::cout << "EDAD: " << getEdad() << std::endl;
}


