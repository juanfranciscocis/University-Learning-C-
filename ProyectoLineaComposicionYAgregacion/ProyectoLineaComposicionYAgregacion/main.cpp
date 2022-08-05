//
//  main.cpp
//  ProyectoLineaComposicionYAgregacion
//
//  Created by Juan Cisneros on 10/27/21.
//

#include <iostream>
#include "Linea.h"
#include "Punto2D.h"

int main() {
    
    //CREACION DE PUNTOS PARA LA LINEA
    Punto2D p1 (1,1);
    Punto2D p2 (0,0);
    
    //CREACION DE LA LINEA
    Linea linea1 (p1,p2);
    std::cout << linea1.longitudLinea();
    
    //MUESTRO INFORMACION DE LA LINEA
    linea1.mostrarInformacionLinea();
    
    
    
    
    
    
    
    

    return 0;
}
