//
//  EstudianteUniversitario.cpp
//  DEBER2
//
//  Created by Juan Cisneros on 12/1/21.
//

#include <stdio.h>
#include "EstudianteUniversitario.h"

//CONSTRUCTOR
EstudianteUniversitario::EstudianteUniversitario(std::string nombre,std::string apellido, int edad, std::string universidad,std::string carrera, float GPA):Estudiante(nombre,apellido,edad){
    setUniversidad(universidad);
    setCarrera(carrera);
    setGPA(GPA);
    
}

EstudianteUniversitario::~EstudianteUniversitario(){};

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

void EstudianteUniversitario::setGPA(float GPA){
    this->GPA=GPA;
}

float EstudianteUniversitario::getGPA() const {
    return GPA;
}

//FUNCION INFORMACION ESTUDIANTE UNIVERSITARIO
void EstudianteUniversitario::informacionEstudianteUniv()const{
    informacionEstudiante();
    std::cout << "UNIVERSIDAD: " << getUniversidad() << std::endl;
    std::cout << "CARRERA: " << getCarrera() << std::endl;
    std::cout << "GPA: " << getGPA() << std::endl;
}
