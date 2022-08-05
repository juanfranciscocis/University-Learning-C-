//
//  Linea.cpp
//  ProyectoLineaComposicionYAgregacion
//
//  Created by Juan Cisneros on 10/27/21.
//

#include <stdio.h>
#include "Linea.h"
#include <string>
#include <iostream>
#include <cmath>

//Construtor
Linea::Linea(Punto2D p1_, Punto2D p2_){
    setPInicial(p1_);
    setPFinal(p2_);
    
}
//Destrucrtor
Linea::~Linea(){
   // std::cout << "DESTRUIDO EL OBJETO LINEA" << std::endl;
}

void Linea::setPInicial(Punto2D p1_){
    puntoIncial= p1_; //ASIGNACION DE LOS VALORES DEL OBJETO AL OBJETO MIEMBTO
}

Punto2D Linea::getPInicial() const {
    return puntoIncial; //SE RETORNA EL OBJETO, QUE ES DATO MIEMBRO DE LA CLASE
}

void Linea::setPFinal(Punto2D p2_){
    puntoFinal=p2_; //ASIGNACION DE LOS VALORES DEL OBJETO AL OBJETO MIEMBTO
}

Punto2D Linea::getPFinal() const {
    return puntoFinal; //SE RETORNA EL OBJETO, QUE ES DATO MIEMBRO DE LA CLASE
}

float Linea::longitudLinea()const{
    float longLinea=0; //variable local para almacenar la longitud de la linea
    //CALCULO DE LA LONGITUD DE LA LINEA
    longLinea = sqrt(pow(getPFinal().getX()-getPInicial().getX(),2)- pow(getPFinal().getY()-getPInicial().getY(), 2));
    
    return longLinea ;
}

void Linea::mostrarInformacionLinea()const{
    std::cout << "INFORMACIOM DE LA LINEA" << std::endl;
    std::cout << "PUNTO INICIAL: (" << getPInicial().getX() << "," << getPInicial().getY() << ")" << std::endl;
    std::cout << "PUNTO FINAL: (" << getPFinal().getX() << "," << getPFinal().getY() << ")" << std::endl;
    std::cout << "LONGITUD DE LA LINEA: " << longitudLinea() << std::endl;
    
}
