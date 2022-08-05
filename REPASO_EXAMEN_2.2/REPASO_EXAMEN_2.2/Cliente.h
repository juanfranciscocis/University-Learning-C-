//
//  Cliente.h
//  REPASO_EXAMEN_2.2
//
//  Created by Juan Cisneros on 11/23/21.
//

#ifndef Cliente_h
#define Cliente_h
#include <iostream>

class Cliente {
public:
    
    friend class Factura;
    
    
    //CONSTRUCTOR
    Cliente(std::string= "N",std::string = "N", std::string = "1712345678", std::string = "0912345678" );
    
    //DESTRUCTOR
    ~Cliente();
    
    
    //GETTERS Y SETTERS
    void setNombre(std::string);

    std::string getNombre()const;

    void setApellido(std::string);

    std::string getApellido() const;

    void setCedula(std::string);

    std::string getCedula()const;

    void setCelular(std::string);

    std::string getCelular()const;

    


    
    
    
    
    
private:
    
    std::string nombre;
    std::string apellido;
    std::string cedula;
    std::string celular;
    
    
    
    
    
};


#endif /* Cliente_h */
