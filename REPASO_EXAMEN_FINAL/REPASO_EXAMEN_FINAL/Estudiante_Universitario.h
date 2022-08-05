//
//  Estudiante_Universitario.h
//  REPASO_EXAMEN_FINAL
//
//  Created by Juan Cisneros on 12/19/21.
//

#ifndef Estudiante_Universitario_h
#define Estudiante_Universitario_h
#include "Estudiante.h"
#include <iostream>

class EstudianteUniversitario: public Estudiante {
    
public:
    //FUNCIONES MIEMBRO
    //CONSTRUCTOR (NOMBRE(),APELLIDO(),EDAD(17),UNIVERSIDAD(),CARRERA(), GPA(0.00))
    EstudianteUniversitario(std::string = "", std::string = "", int = 17, std::string = "", std::string = "", float = 0.00);
    
    //DESTRUCTOR
    ~EstudianteUniversitario();
    
    //GETTERS Y SETTERS
    
    void setUniversidad(std::string);

    std::string getUniversidad()const;

    void setCarrera(std::string);

    std::string getCarrera()const;

    void setGpa(float);

    float getGpa()const;
    
    //INFORMACION ESTUDIANTE
    virtual void informacionEstudiante() const override;

   


    
    
    
    
    
    
private:
    //DATOS MIEMBRO
    std::string universidad;
    std::string carrera;
    float gpa;
    
    
    
    
    
};

#endif /* Estudiante_Universitario_h */
