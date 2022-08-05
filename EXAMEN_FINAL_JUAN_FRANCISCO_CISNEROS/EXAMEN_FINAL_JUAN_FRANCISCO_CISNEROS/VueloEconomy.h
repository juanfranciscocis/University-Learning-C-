//
//  VueloEconomy.h
//  EXAMEN_FINAL_JUAN_FRANCISCO_CISNEROS
//
//  Created by Juan Cisneros on 12/20/21.
//

#ifndef VueloEconomy_h
#define VueloEconomy_h
#include "Vuelo.h"

class VueloEconomy: public Vuelo {
    
public:
    //FUNCIONES MIEMBRO
    
    //CONSTRUCTOR(ORIGEN(),DESTINO(),FECHA(),CANTIDAD_MALETAS(0),PRECIO_TARIFA_ECONOMY(0),PRECIOMALETA(0))
    VueloEconomy(std::string = "",std::string = "",std::string = "",int = 0,float = 0, float = 0);
    
    //DESTRUCTOR
    ~VueloEconomy();
    //FUNCIONES SET Y GET
    
    void setPrecioTarifaEconomy(float);

    float getPrecioTarifaEconomy()const;

    void setPrecioMaleta(float);

    float getPrecioMaleta()const;
    
    //FUNCION CALCULAR PRECIO TOTAL
    
    virtual float calcularPrecioTotal()const override;
    
    //FUNCION INFORMACION VUELO
    
    virtual void informacionVuelo()const override;
    
    
private:
    //DATOS MIEMBRO
    float precioTarifaEconomy;
    float precioMaleta;
    
    
    
    
    
};

#endif /* VueloEconomy_h */
