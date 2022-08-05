//
//  main.cpp
//  TRIANGULO
//
//  Created by Juan Cisneros on 11/15/21.
//

#include <iostream>
#include "Punto2D.h"
#include "Triangulo.h"

void f1();

int main() {
    
    //DECLARO E INICIALIZO 3 OBJETOS DE LA CLASE PUNTO
    Punto2D punto1;
    Punto2D punto2(0,4);
    Punto2D punto3(9,8);

    //DECLARO UN OBJETO TRIANGULO
    Triangulo triangulo(punto1,punto2,punto3);
    Triangulo triangulo2;
    
    triangulo.verticesTriangulo();
    

    f1(); //SE INICIALIZA LA VARIABLE ESTATICA Y LE SUMA 5, X=5
    f1();//UNA VEZ YA INICIALIZADA LA VARIABLE EN LA ANTERIOR LINEA, SOLO LE SUMO 5 , X=10
    f1();//UNA VEZ YA INICIALIZADA LA VARIABLE, SOLO LE SUMO 5 , X=15
    
    std::cout << "CANTIDAD DE OBJETOS CREADOS: " << Triangulo::getCantidadTriangulos() << std::endl; //1
    
    std::cout << "ID DEL TRIANGULO 1: " << triangulo.getID() << std::endl;
    std::cout << "ID DEL TRIANGULO 2: " << triangulo2.getID() << std::endl;

    
    return 0;
}

void f1(){
    //VARIABLE ESTATICA EXISTE DESDE QUE SE DEFINE HASTA QUE TERMINA EL PROGRAMA
    //ESTA VARIBALE ESTA DENTRO DE UNA FUNCION POR LO QUE SIGUE SIENDO LOCAL -> PUEDE SER USADA SOLAMENTE EN DICHA FUNCION
    static int x =0; //VARIABLE ESTATICA - STATIC
    x+=5; //ACTUALIZAR EL VALOR DE LA VARIABLE
    std::cout << "VALOR VARIABLE ESTATICA DE X: " << x << std::endl;
}
