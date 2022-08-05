//
//  Cuadrado.cpp
//  COMPOSICON_AGREGACION_2_CUADRADO
//
//  Created by Juan Cisneros on 11/8/21.
//

#include "Cuadrado.h"
#include <iostream>


Cuadrado::Cuadrado(Punto2D p1,Punto2D p2,Punto2D p3,Punto2D p4 ){
    if (p1.getX() == p4.getX() and p2.getX() == p3.getX() and p1.getY() == p2.getY() and p4.getY() == p3.getY() and (p2.getX()-p1.getX()) == (p3.getX()-p4.getX())) {
        setPunto1(p1);
        setPunto2(p2);
        setPunto3(p3);
        setPunto4(p4);
    }else{
        std::cout << "ERROR SE ASIGNA CUADRADO POR DEFECTO" << std::endl;
        Punto2D pA (0,0);
        Punto2D pB (1,0);
        Punto2D pC (1,1);
        Punto2D pD (0,1);
        
        setPunto1(pA);
        setPunto2(pB);
        setPunto3(pC);
        setPunto4(pD);
    }
}
//and p1.getY() == p2.getY() and p4.getY() == p3.getY()and p2.getX() == p3.getX() and p1.getY() == p2.getY() and p4.getY() == p3.getY() and (p2.getX()-p1.getX()) == (p3.getX()-p4.getX())
Cuadrado::~Cuadrado(){
    
}

void Cuadrado::setPunto1(Punto2D p1){
    punto1=p1;
}

Punto2D Cuadrado::getPunto1() const {
    return punto1;
}

void Cuadrado::setPunto2(Punto2D p2){
    punto2=p2;
}

Punto2D Cuadrado::getPunto2() const {
    return punto2;
}

void Cuadrado::setPunto3(Punto2D p3){
    punto3=p3;
}

Punto2D Cuadrado::getPunto3() const {
    return punto3;
}

void Cuadrado::setPunto4(Punto2D p4){
    punto4=p4;
}

Punto2D Cuadrado::getPunto4() const {
    return punto4;
}


void Cuadrado::mostrarInfoCuadrado()const{
    std::cout << "(" << getPunto1().getX() << "," << getPunto1().getY()<< ")" << std::endl;
    std::cout << "(" << getPunto2().getX() << "," << getPunto2().getY()<< ")" << std::endl;
    std::cout << "(" << getPunto3().getX() << "," << getPunto3().getY()<< ")" << std::endl;
    std::cout << "(" << getPunto4().getX() << "," << getPunto4().getY()<< ")" << std::endl;
}

void Cuadrado::perimetroCuadrado()const{
    int lado1 = punto2.getX()- punto1.getX() ;
    int perimetro = lado1 * 4;
    std::cout << "PERIMETRO: " <<  perimetro << std::endl;

}

void Cuadrado::areaCuadrado()const{
    int lado1 = punto2.getX() - punto1.getX();
    int lado2 = punto3.getY() - punto2.getY();
    int area = lado1 * lado2;
    std::cout << "AREA: " << area << std::endl;
}

