//
//  Estudiante_Universitario.cpp
//  REPASO_EXAMEN_FINAL
//
//  Created by Juan Cisneros on 12/19/21.
//

#include <stdio.h>
#include "Estudiante_Universitario.h"

//CONSTRUCTOR
//CONSTRUCTOR (NOMBRE(),APELLIDO(),EDAD(17),UNIVERSIDAD(),CARRERA(), GPA(0.00))
EstudianteUniversitario::EstudianteUniversitario(std::string nombre, std::string apellido, int edad, std::string universidad, std::string carrera, float gpa){
    
    setNombre(nombre);
    setApellido(apellido);
    setEdad(edad);
    setUniversidad(universidad);
    setCarrera(carrera);
    setGpa(gpa);
}

//DESTRUCTOR
EstudianteUniversitario::~EstudianteUniversitario(){}



//GETTERS Y SETTERS
void EstudianteUniversitario::setUniversidad(std::string universidad){
    this->universidad=universidad;
}

std::string EstudianteUniversitario::getUniversidad() const {
    return universidad;
}

void EstudianteUniversitario::setCarrera(std::string carrera){
    this->carrera=carrera;
}

std::string EstudianteUniversitario::getCarrera() const {
    return carrera;
}

void EstudianteUniversitario::setGpa(float gpa){
    this->gpa=gpa;
}

float EstudianteUniversitario::getGpa() const {
    return gpa;
}

//OVERRIDE DE LA FUNCION INFORMACION ESTUDIANTE

void EstudianteUniversitario::informacionEstudiante()const{
    //Estudiante::informacionEstudiante(); //YA NO SE PUEDE HACER PORQUE ES UN CLASE ABSTRACTA
    std::cout << "NOMBRE: " << getNombre() << std::endl;
    std::cout << "APELLIDO: " << getApellido() << std::endl;
    std::cout << "EDAD: " << getEdad() << std::endl;
    std::cout << "UNIVERSIDAD: " << getUniversidad() << std::endl;
    std::cout << "CARRERA: " << getCarrera() << std::endl;
    std::cout << "GPA: " << getGpa() << std::endl;
    
}

