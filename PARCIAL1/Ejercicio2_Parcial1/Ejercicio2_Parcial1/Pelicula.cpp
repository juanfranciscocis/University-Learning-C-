//
//  Pelicula.cpp
//  Ejercicio2_Parcial1
//
//  Created by Juan Cisneros on 10/19/21.
//

#include <stdio.h>
#include "Pelicula.h"
#include <string>
#include <iostream>


Pelicula::Pelicula(std::string price){
    setPrecio(price);
}


void Pelicula::setPrecio(std::string price){
//    double priceFinal = price - int(price);
//    std::cout << priceFinal << std::endl; ;
//
//    if (priceFinal != 0.99) {
//        std::cerr << "ERROR PRECIO FINAL" << std::endl;
//        std::cin >> price;
//    }
//
//    std::cout << "OK" << std::endl;
    
    long calculo = price.size()-2 ;
    while (price.substr(price.size()-2,2) != "99") {
        std::cerr << "ERROR PRECIO FINAL" <<std::endl;
        std::cout << calculo << std::endl;
        getline(std::cin, price);
    }
    
    std::cout << price.substr(price.size()-2,2) << std :: endl;
    
    
    
    
    
    precio=price;
}

std::string Pelicula::getPrecio() const {
    return precio;
}
