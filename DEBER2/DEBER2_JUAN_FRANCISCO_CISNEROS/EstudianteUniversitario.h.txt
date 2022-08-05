//
//  EstudianteUniversitario.h
//  DEBER2
//
//  Created by Juan Cisneros on 12/1/21.
//

#ifndef EstudianteUniversitario_h
#define EstudianteUniversitario_h
#include "Estudiante.h"
#include <iostream>

//CLASE DERIVADA
class EstudianteUniversitario: public Estudiante {
public:
    //FUNCIONES MIEMBRO:
    
    //CONSTRUCTOR
    EstudianteUniversitario(std::string = "",std::string = "", int = 17, std::string = "",std::string = "", float =0.00); //nombre, apellido, edad, universidad, carrera, GPA
    
    //DESTRUCTOR
    ~EstudianteUniversitario();
    
    //GETTERS Y SETTERS
    
    void setUniversidad(std::string);

    std::string getUniversidad()const;

    void setCarrera(std::string);

    std::string getCarrera()const;

    void setGPA(float );

    float getGPA()const;
    
    //FUNCION INFORMACION ESTUDIANTE UNIVERSITARIO
    void informacionEstudianteUniv()const;

    


    
    
    
    
private:
    //DATOS MIEMBRO:
    
    std::string universidad;
    std::string carrera;
    float GPA;
    
};

#endif /* EstudianteUniversitario_h */
