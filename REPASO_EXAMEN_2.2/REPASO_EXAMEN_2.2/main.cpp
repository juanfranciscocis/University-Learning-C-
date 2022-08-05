//
//  main.cpp
//  REPASO_EXAMEN_2.2
//
//  Created by Juan Cisneros on 11/23/21.
//

#include <iostream>
#include "Cliente.h"
#include "Factura.h"

int main() {
    Factura factura1;
    
    factura1.detalleFactura();
    
    Factura factura2({"MARIA","GUZMAN","1710229392", "0939683251"},"06010101",-100);
    factura2.detalleFactura();
    Factura factura3;
    factura3.detalleFactura();
    
    
    
    
    
    
    
    
    return 0;
}
