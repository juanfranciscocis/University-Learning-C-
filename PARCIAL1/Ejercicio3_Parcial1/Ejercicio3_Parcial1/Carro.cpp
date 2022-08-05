//
//  Carro.cpp
//  Ejercicio3_Parcial1
//
//  Created by Juan Cisneros on 10/19/21.
//

#include <stdio.h>
#include "Carro.h"
#include <iostream>

Carro::Carro(int llantas, int ventanas){
    
    setLlantas(llantas);
    setVentanas(ventanas);

}

Carro::~Carro(){
}


void Carro::setLlantas(int wheels){
    llantas=wheels;
}

int Carro::getLlantas() const {
    return llantas;
}

void Carro::setVentanas(int windows){
    ventanas=windows;
}

int Carro::getVentanas() const {
    return ventanas;
}
