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
    
    virtual void info()const; //FUNCION QUE PUEDE SER SOBREESCRITA EN CLASES DERIVADAS (DECLARADA EN TODAS LAS CLASES), EL TIPO DE OBJETO DETERMINA QUE FUNCION SE INVOCA
     
    void infoNoPoli()const; //FUNCION SIN POLIMORFISMO NO ES VIRTUAL
    
    virtual void infoAbstracta()const = 0; //clase Abstracta , obliga a crear a sus hijos los objetos


private:
    std::string nombre;
    int edad;
};

#endif /* Cuidadano_h */
