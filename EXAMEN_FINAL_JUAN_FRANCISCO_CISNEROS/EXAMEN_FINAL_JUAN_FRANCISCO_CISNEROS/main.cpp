//
//  main.cpp
//  EXAMEN_FINAL_JUAN_FRANCISCO_CISNEROS
//
//  Created by Juan Cisneros on 12/20/21.
//

#include <iostream>
#include "Vuelo.h"
#include "VueloEconomy.h"
#include "VueloBusiness.h"

int main() {
    
    VueloEconomy vueloEconomico("UIO","MIA","20 DE ENERO 2022",2,200,10);
    VueloBusiness vueloPrimeraClase("UIO","MIA","6 DE FEBRERO 2022",4,1000);
    
    std::cout << "---------VUELO ECONOMICO---------" << std::endl;
    Vuelo* v1 = &vueloEconomico;
    
    v1->informacionVuelo();
    v1->calcularPrecioTotal();
    std::cout << std::endl;
    
    std::cout << "---------VUELO BUSINESS---------" << std::endl;
    v1 = &vueloPrimeraClase;
    
    v1->informacionVuelo();
    v1->calcularPrecioTotal();
    

    
    
    

    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
