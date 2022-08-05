//
//  VueloBusiness.cpp
//  EXAMEN_FINAL_JUAN_FRANCISCO_CISNEROS
//
//  Created by Juan Cisneros on 12/20/21.
//

#include <stdio.h>
#include "VueloBusiness.h"

//CONSTRUCTOR(ORIGEN(),DESTINO(),FECHA(),CANTIDAD_MALETAS(0),PRECIO_TARIFA_BUSINESS(0))

VueloBusiness::VueloBusiness(std::string origen ,std::string destino,std::string fecha,int cantidadMaletas,float precioTarifaBusiness):Vuelo(origen,destino,fecha,cantidadMaletas){
    
    
    setPrecioTarifaBusiness(precioTarifaBusiness);
};

//DESTRUCTOR
VueloBusiness::~VueloBusiness(){}


//FUNCIONES SET Y GET
void VueloBusiness::setPrecioTarifaBusiness(float precioTarifaBusiness){
    this->precioTarifaBusiness=precioTarifaBusiness;
}

float VueloBusiness::getPrecioTarifaBusiness() const {
    return precioTarifaBusiness;
}

//FUNCION CALCULAR PRECIO TOTAL

float VueloBusiness::calcularPrecioTotal()const{
    std::cout << "PRECIO A PAGAR: " << getPrecioTarifaBusiness() << std::endl;
    return getPrecioTarifaBusiness();
}

//FUNCION INFORMACION VUELO

void VueloBusiness::informacionVuelo()const{
    std::cout << "ORIGEN: " << getOrigen() << std::endl;
    std::cout << "DESTINO: " << getDestino() << std::endl;
    std::cout << "FECHA: " << getFecha() << std::endl;
    std::cout << "CANTIDAD DE MALETAS: " << getCantidadMaletas() << std::endl;
    std::cout << "PRECIO TARIFA BUSINESS: " << getPrecioTarifaBusiness() << std::endl;
}
