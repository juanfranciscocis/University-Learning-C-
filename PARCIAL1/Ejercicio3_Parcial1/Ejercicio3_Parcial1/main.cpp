//
//  main.cpp
//  Ejercicio3_Parcial1
//
//  Created by Juan Cisneros on 10/19/21.
//

#include <iostream>
#include <array>
#include "Carro.h"



void xl (std::array<Carro,3>);
int main() {
    
    std::array<Carro, 3> arrayCars;
    
    Carro car1, car2, car3;
    
    car1.setLlantas(1);
    car2.setLlantas(20);
    car3.setLlantas(0);
    
   
    arrayCars[0] = car1;
    
    arrayCars[1] = car2;
    arrayCars[2] = car3;
    
    xl(arrayCars);
    
    
    
    
    


        
        
    
    
    
    
    
    
    
    
    return 0;
}


void xl (std::array<Carro,3> arrayOfCarsLocal ){
    
    int mayorLlantas = 0;
    
    for (int i = 0 ; i ==0; i++) {
        
        
        if (arrayOfCarsLocal[i].getLlantas() > arrayOfCarsLocal[i+1].getLlantas() ) {
            mayorLlantas = 1;
        }else if (arrayOfCarsLocal[i+1].getLlantas() > arrayOfCarsLocal[i].getLlantas()){
            mayorLlantas =2;
        }
        
        if (mayorLlantas < arrayOfCarsLocal[i+2].getLlantas()) {
            mayorLlantas =3;
        }
        
        
    }
    
    std::cout << mayorLlantas << std::endl;
    
    
}
