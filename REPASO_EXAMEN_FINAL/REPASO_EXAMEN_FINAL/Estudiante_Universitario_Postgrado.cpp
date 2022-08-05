//
//  Estudiante_Universitario_Postgrado.cpp
//  REPASO_EXAMEN_FINAL
//
//  Created by Juan Cisneros on 12/19/21.
//

#include <stdio.h>
#include "Estudiante_Universitario_Postgrado.h"

//CONSTRUCTOR(NOMBRE(),APELLIDO(),EDAD(17),UNIVERSIDAD(),CARRERA(), GPA(0.00),POSTGRADO())
EstudianteUniversitarioPostgrado::EstudianteUniversitarioPostgrado(std::string nombre, std::string apellido, int edad, std::string universidad, std::string carrera, float gpa, std::string postgrado){
    
    setNombre(nombre);
    setApellido(apellido);
    setEdad(edad);
    setUniversidad(universidad);
    setCarrera(carrera);
    setGpa(gpa);
    setPostgrado(postgrado);
    
}

//DESTRUCTOR
EstudianteUniversitarioPostgrado::~EstudianteUniversitarioPostgrado(){}


//GETTERS Y SETTERS
void EstudianteUniversitarioPostgrado::setPostgrado(std::string postgrado){
    this->postgrado = postgrado;
}

std::string EstudianteUniversitarioPostgrado::getPostgrado()const{
    return postgrado;
}

//INFORMACION ESTUDIANTE
void EstudianteUniversitarioPostgrado::informacionEstudiante()const{
    //Estudiante::informacionEstudiante();
    EstudianteUniversitario::informacionEstudiante();
    std::cout << "POSTGRADO: " << getPostgrado() << std::endl;
}
