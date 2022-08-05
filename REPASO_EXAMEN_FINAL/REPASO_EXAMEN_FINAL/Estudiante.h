//
//  Estudiante.h
//  REPASO_EXAMEN_FINAL
//
//  Created by Juan Cisneros on 12/19/21.
//

#ifndef Estudiante_h
#define Estudiante_h
#include <iostream>

class Estudiante {

public:
    //FUNCIONES MIEMBRO
    //CONSTRUCTOR (NOMBRE(N), APELLIDO(N), EDAD(5))
    Estudiante(std::string = "N" , std::string = "N", int = 5 );
    
    //DESTRUCTOR
    ~Estudiante();
    
    //GETTERS Y SETTERS
    
    void setNombre(std::string);

    std::string getNombre()const;

    void setApellido(std::string);

    std::string getApellido()const;

    void setEdad(int);

    int getEdad()const;
    
    //INFORMACION ESTUDIANTE
    virtual void informacionEstudiante() const = 0;



    
    
    
private:
    //DATOS MIEMBRO
    std::string nombre;
    std::string apellido;
    int edad;
    
    
    
};



#endif /* Estudiante_h */
