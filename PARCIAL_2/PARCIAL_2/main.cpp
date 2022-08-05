//
//  main.cpp
//  PARCIAL_2
//
//  Created by Juan Cisneros on 11/24/21.
//

#include <iostream>
#include "Cuenta.h"
#include "Cliente.h"

int main() {
    //CREACION DE CUENTAS
    
    Cuenta cuenta1({1,"JUAN FRANCISCO CISNEROS","0939683251"},10000);
    cuenta1.infoCuenta();
    std::cout << "INTERES GENERADO: " << cuenta1.interesGenerado() << "$" << std::endl;
    std::cout << std::endl;
    
    Cuenta cuenta2({2,"PEDRO CISNEROS","0984438514"},200);
    cuenta2.infoCuenta();
    std::cout << "INTERES GENERADO: " << cuenta2.interesGenerado() << "$" << std::endl;
    std::cout << std::endl;
    
    Cuenta cuenta3({1,"MARIA CISNEROS","0998467715"},20);
    cuenta3.infoCuenta();
    std::cout << "INTERES GENERADO: " << cuenta3.interesGenerado() << "$" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    
    std::cout <<"//////CAMBIANDO EL INTERES AL 5%//////" << std::endl;
    cuenta1.setInteresAnual(5);
    cuenta2.setInteresAnual(5);
    cuenta3.setInteresAnual(5);
    
    
    std::cout << "INTERES GENERADO CUENTA 1: " << cuenta1.interesGenerado() << "$" << std::endl;
    std::cout << std::endl;
    
    std::cout << "INTERES GENERADO CUENTA 2: " << cuenta2.interesGenerado() << "$" << std::endl;
    std::cout << std::endl;
    
    std::cout << "INTERES GENERADO CUENTA 3: " << cuenta3.interesGenerado() << "$" << std::endl;
    std::cout << std::endl;
    
    
    
    
    
    
    
    return 0;
}
