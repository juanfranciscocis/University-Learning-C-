//
//  Estudiante.h
//  DEBER2
//
//  Created by Juan Cisneros on 12/1/21.
//

#ifndef Estudiante_h
#define Estudiante_h
#include <iostream>

//CLASE BASE
class Estudiante {
public:
    //FUNCIONES MIEMBRO:
    
    //CONSTRUCTOR
    Estudiante(std::string = "N",std::string = "N", int = 5);
    
    //DESTRUCTOR
    ~Estudiante();
    
    
    //SETTERS Y GETTERS
    void setNombre(std::string);

    std::string getNombre()const;

    void setApellido(std::string);

    std::string getApellido()const;

    void setEdad(int);

    int getEdad()const;
    
    
    //INFORMACION DE LA CLASE ESTUDIANTE
    void informacionEstudiante()const;
    
    
    

    


    
private:
    
    //DATOS MIEMBRO:
    std::string nombre;
    std::string apellido;
    int edad;
    
};

#endif /* Estudiante_h */
