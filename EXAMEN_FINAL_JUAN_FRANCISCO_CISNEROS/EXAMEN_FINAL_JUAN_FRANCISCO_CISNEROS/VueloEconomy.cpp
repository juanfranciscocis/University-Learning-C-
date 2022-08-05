//
//  VueloEconomy.cpp
//  EXAMEN_FINAL_JUAN_FRANCISCO_CISNEROS
//
//  Created by Juan Cisneros on 12/20/21.
//

#include <stdio.h>
#include "VueloEconomy.h"

//CONSTRUCTOR(ORIGEN(),DESTINO(),FECHA(),CANTIDAD_MALETAS(0),PRECIO_TARIFA_ECONOMY(0),PRECIOMALETA(0))

VueloEconomy::VueloEconomy(std::string origen ,std::string destino,std::string fecha,int cantidadMaletas,float precioTarifaEconomy, float precioMaleta):Vuelo(origen,destino,fecha,cantidadMaletas){
    
    setPrecioTarifaEconomy(precioTarifaEconomy);
    setPrecioMaleta(precioMaleta);
}

//DESTRUCTOR
VueloEconomy::~VueloEconomy(){};


//FUNCIONES SET Y GET
void VueloEconomy::setPrecioTarifaEconomy(float precioTarifaEconomy){
    this->precioTarifaEconomy=precioTarifaEconomy;
}

float VueloEconomy::getPrecioTarifaEconomy() const {
    return precioTarifaEconomy;
}

void VueloEconomy::setPrecioMaleta(float precioMaleta){
    this->precioMaleta=precioMaleta;
}

float VueloEconomy::getPrecioMaleta() const {
    return precioMaleta;
}




//FUNCION CALCULAR PRECIO TOTAL
float VueloEconomy::calcularPrecioTotal()const{
    float precioVuelo;
    
    precioVuelo = getPrecioTarifaEconomy() + (getPrecioMaleta()*getCantidadMaletas());
    
    std::cout << "PRECIO A PAGAR: " << precioVuelo << std::endl;
    
    
    return precioVuelo;
}

//FUNCION INFORMACION VUELO
void VueloEconomy::informacionVuelo()const{
    std::cout << "ORIGEN: " << getOrigen() << std::endl;
    std::cout << "DESTINO: " << getDestino() << std::endl;
    std::cout << "FECHA: " << getFecha() << std::endl;
    std::cout << "CANTIDAD DE MALETAS: " << getCantidadMaletas() << std::endl;
    std::cout << "PRECIO TARIFA ECONOMY: " << getPrecioTarifaEconomy() << std::endl;
    std::cout << "PRECIO POR MALETA: " << getPrecioMaleta()<< std::endl;
    
}
