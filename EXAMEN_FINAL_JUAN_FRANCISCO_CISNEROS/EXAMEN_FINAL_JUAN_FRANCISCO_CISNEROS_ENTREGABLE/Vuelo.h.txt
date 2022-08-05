//
//  Vuelo.h
//  EXAMEN_FINAL_JUAN_FRANCISCO_CISNEROS
//
//  Created by Juan Cisneros on 12/20/21.
//

#ifndef Vuelo_h
#define Vuelo_h
#include <iostream>


class Vuelo {
    
public:
    //FUNCIONES MIEMBRO
    
    //CONSTRUCTOR(ORIGEN(),DESTINO(),FECHA(),CANTIDAD_MALETAS(0))
    Vuelo(std::string = "",std::string = "",std::string = "",int = 0);
    
    //DESTRUCTOR
    ~Vuelo();
    
    //FUNCIONES GET Y SET
    
    void setOrigen(std::string);

    std::string getOrigen()const;

    void setDestino(std::string);

    std::string getDestino()const;

    void setFecha(std::string);

    std::string getFecha()const;

    void setCantidadMaletas(int);

    int getCantidadMaletas()const;
    
    //FUNCION CALCULAR PRECIO TOTAL
    
    virtual float calcularPrecioTotal()const = 0;
    
    //FUNCION INFORMACION VUELO
    
    virtual void informacionVuelo()const = 0;

 



    
    
private:
    //DATOS MIEMBRO
    std::string origen;
    std::string destino;
    std::string fecha;
    int cantidadMaletas;
    
    
};

#endif /* Vuelo_h */
