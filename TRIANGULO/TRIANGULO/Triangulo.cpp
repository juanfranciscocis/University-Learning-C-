//
//  Triangulo.cpp
//  TRIANGULO
//
//  Created by Juan Cisneros on 11/15/21.
//

#include <stdio.h>
#include "Triangulo.h"
#include <iostream>

//CONSTRUCTOR
Triangulo::Triangulo(Punto2D vertice1,Punto2D vertice2,Punto2D vertice3){
    
    setVertice1(vertice1);
    setVertice2(vertice2);
    setVertice3(vertice3);
    cantidadTriangulos+=1;
    iD = cantidadTriangulos;
    
    
    
}

Triangulo::~Triangulo(){}

//SET Y GET
void Triangulo::setVertice1(Punto2D vertice1){
    this->vertice1 = vertice1;
}

Punto2D Triangulo::getVertice1() const {
    return vertice1;
}

void Triangulo::setVertice2(Punto2D vertice2){
    this->vertice2=vertice2;
}

Punto2D Triangulo::getVertice2() const {
    return vertice2;
}

void Triangulo::setVertice3(Punto2D vertice3){
    this->vertice3= vertice3;
}

Punto2D Triangulo::getVertice3() const {
    return vertice3;
}


int Triangulo::getID()const{
    return iD;
}
//FUNCION FRIEND, USO DATOS MIEMBRO DE PUNTO 2D
void Triangulo::verticesTriangulo()const{
    std::cout << "VERTICES TRIANGULO: " << std::endl;
    std::cout << "PUNTO 1 (x): " << vertice1.x << std::endl;
    std::cout << "PUNTO 1: (y)" << vertice1.y << std::endl;
    std::cout << "PUNTO 2 (x): " << vertice2.x << std::endl;
    std::cout << "PUNTO 2: (y)" << vertice2.y << std::endl;
    std::cout << "PUNTO 3 (x): " << vertice3.x << std::endl;
    std::cout << "PUNTO 3: (y)" << vertice3.y << std::endl;
}

//INICIALIZACION DEL DATO MIEMBRO STATIC
int Triangulo::cantidadTriangulos=0; //CUANDO INICIA LA CLASE TENGO 0 TRIANGULOS CREADOS

//FUNCION QUE PERMITE OBTENER EL DATO MIEMBRO STATIC, getCantidadTriangulos
int Triangulo::getCantidadTriangulos(){
    return cantidadTriangulos;
}

