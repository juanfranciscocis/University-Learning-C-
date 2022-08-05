//
//  Vuelo.cpp
//  EXAMEN_FINAL_JUAN_FRANCISCO_CISNEROS
//
//  Created by Juan Cisneros on 12/20/21.
//

#include <stdio.h>
#include "Vuelo.h"


//CONSTRUCTOR (ORIGEN(),DESTINO(),FECHA(),CANTIDAD_MALETAS(0))

Vuelo::Vuelo(std::string origen,std::string destino,std::string fecha,int cantidadMaletas){
    
    setOrigen(origen);
    setDestino(destino);
    setFecha(fecha);
    setCantidadMaletas(cantidadMaletas);
    
}


//DESTRUCTOR
Vuelo::~Vuelo(){};

//FUNCIONES SET Y GET
void Vuelo::setOrigen(std::string origen ){
    this->origen=origen;
}

std::string Vuelo::getOrigen() const {
    return origen;
}

void Vuelo::setDestino(std::string destino ){
    this->destino=destino;
}

std::string Vuelo::getDestino() const {
    return destino;
}

void Vuelo::setFecha(std::string fecha){
    this->fecha=fecha;
}

std::string Vuelo::getFecha() const {
    return fecha;
}

void Vuelo::setCantidadMaletas(int cantidadMaletas){
    this->cantidadMaletas=cantidadMaletas;
}

int Vuelo::getCantidadMaletas() const {
    return cantidadMaletas;
}


