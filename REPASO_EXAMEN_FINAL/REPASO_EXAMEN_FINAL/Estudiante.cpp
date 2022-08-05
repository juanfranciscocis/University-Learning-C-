//
//  Estudiante.cpp
//  REPASO_EXAMEN_FINAL
//
//  Created by Juan Cisneros on 12/19/21.
//

#include <stdio.h>
#include "Estudiante.h"


//CONSTRUCTOR (NOMBRE(N), APELLIDO(N), EDAD(5))
Estudiante::Estudiante(std::string nombre, std::string apellido, int edad){
    
    setNombre(nombre);
    setApellido(apellido);
    setEdad(edad);
    
}

//DESTRUCTOR
Estudiante::~Estudiante(){}




//GETTERS Y SETTERS
void Estudiante::setNombre(std::string nombre){
    this->nombre = nombre;
}

std::string Estudiante::getNombre() const {
    return nombre;
}

void Estudiante::setApellido(std::string apellido){
    this->apellido=apellido;
}

std::string Estudiante::getApellido() const {
    return apellido;
}

void Estudiante::setEdad(int edad){
    this->edad=edad;
}

int Estudiante::getEdad() const {
    return edad;
}


/*
void Estudiante::informacionEstudiante() const{
    std::cout << "NOMBRE: " << getNombre() << std::endl;
    std::cout << "APELLIDO: " << getApellido() << std::endl;
    std::cout << "EDAD: " << getEdad() << std::endl;
}
*/

