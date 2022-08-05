//
//  main.cpp
//  Punteros
//
//  Created by Juan Cisneros on 10/4/21.
//

#include <iostream>

int main() {
    int y=5;
    int *yPtr = &y;
    
    //*yPtr  = 5; entonces podria modificar mis varibales a travez de variables
    
    *yPtr = 7;
    std::cout << "Valor de la variable: " << y <<std::endl ;
    
    
    
    
    
    
    
    
    return 0;
}
