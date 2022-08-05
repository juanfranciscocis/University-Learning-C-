//
//  VueloBusiness.h
//  EXAMEN_FINAL_JUAN_FRANCISCO_CISNEROS
//
//  Created by Juan Cisneros on 12/20/21.
//

#ifndef VueloBusiness_h
#define VueloBusiness_h
#include "Vuelo.h"

class VueloBusiness: public Vuelo {
    
public:
    //FUNCIONES MIEMBRO
    
    //CONSTRUCTOR(ORIGEN(),DESTINO(),FECHA(),CANTIDAD_MALETAS(0),PRECIO_TARIFA_BUSINESS(0))
    VueloBusiness(std::string = "",std::string = "",std::string = "",int = 0,float =0);
    
    //DESTRUCTOR
    ~VueloBusiness();
    
    //FUNCIONES SET Y GET
    
    void setPrecioTarifaBusiness(float);

    float getPrecioTarifaBusiness()const;

    //FUNCION CALCULAR PRECIO TOTAL
    
    virtual float calcularPrecioTotal()const override;
    
    //FUNCION INFORMACION VUELO
    
    virtual void informacionVuelo()const override;
    
    
private:
    //DATOS MIEMBRO
    float precioTarifaBusiness;
    
    
    
    
};


#endif /* VueloBusiness_h */
