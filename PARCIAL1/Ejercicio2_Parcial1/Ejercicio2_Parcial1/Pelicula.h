//
//  Pelicula.h
//  Ejercicio2_Parcial1
//
//  Created by Juan Cisneros on 10/19/21.
//

#ifndef Pelicula_h
#define Pelicula_h

#include <string>

class Pelicula {
    
public:
    
    Pelicula(std::string = "1.99");
    void setPrecio(std::string);

    std::string getPrecio()const;

   



    
private:

    std::string precio;
};


#endif /* Pelicula_h */
