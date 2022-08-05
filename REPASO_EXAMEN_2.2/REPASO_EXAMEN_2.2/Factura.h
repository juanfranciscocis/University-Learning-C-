//
//  Factura.h
//  REPASO_EXAMEN_2.2
//
//  Created by Juan Cisneros on 11/23/21.
//

#ifndef Factura_h
#define Factura_h
#include "Cliente.h"
#include <iostream>

class Factura {
    
    
public:
    
    //CONSTRUCTOR Y DESTRUCTOR
    Factura(Cliente={"JUAN","CISNEROS","1725793804", "0939683251"},std::string = "06/01/2021", double = 100);
    ~Factura();
    
    //GETTERS Y SETTERS
    void setCliente(Cliente);

    Cliente getCliente()const;

    int getNumero()const;

    void setFecha(std::string);

    std::string getFecha()const;

    void setTotal(double);

    double getTotal()const;
    
    //DETALLE FACTURA
    void detalleFactura()const;
    
    
private:

    Cliente cliente;
    static int numero;
    std::string fecha;
    double total;
    
    
};


#endif /* Factura_h */
