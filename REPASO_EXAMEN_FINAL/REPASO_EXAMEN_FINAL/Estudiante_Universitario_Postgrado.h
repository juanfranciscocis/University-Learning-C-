//
//  Estudiante_Universitario_Postgrado.h
//  REPASO_EXAMEN_FINAL
//
//  Created by Juan Cisneros on 12/19/21.
//

#ifndef Estudiante_Universitario_Postgrado_h
#define Estudiante_Universitario_Postgrado_h

#include "Estudiante_Universitario.h"

class EstudianteUniversitarioPostgrado : public EstudianteUniversitario {
public:
    
    //CONSTRUCTOR(NOMBRE(),APELLIDO(),EDAD(17),UNIVERSIDAD(),CARRERA(), GPA(0.00),POSTGRADO())
    
    EstudianteUniversitarioPostgrado(std::string = "", std::string = "", int = 17, std::string = "", std::string = "", float = 0.00, std::string = "");
    
    //DESTRUCTOR
    ~EstudianteUniversitarioPostgrado();
    
    
    //GETTERS Y SETTERS
    
    void setPostgrado(std::string);
    
    std::string getPostgrado()const;
    
    //OVERRIDE INFORMACION ESTUDIANTE
    virtual void informacionEstudiante()const override;
    
    
    
private:
    std::string postgrado;

    
};




#endif /* Estudiante_Universitario_Postgrado_h */
