//
//  Cuidadano.h
//  Herencia
//
//  Created by Juan Cisneros on 12/1/21.
//

#ifndef Cuidadano_h
#define Cuidadano_h
#include <iostream>



//CLASE BASE
class Ciudadano {
    
public:
    
    Ciudadano(std::string = "", int = 0);
    
    ~Ciudadano();
    
    void setNombre(std::string in);

    std::string getNombre()const;

    void setEdad(int in);

    int getEdad()const;
    
    void infoCiudadano()const;


private:
    std::string nombre;
    int edad;
};

#endif /* Cuidadano_h */
