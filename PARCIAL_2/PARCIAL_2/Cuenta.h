//
//  Cuenta.h
//  PARCIAL_2
//
//  Created by Juan Cisneros on 11/24/21.
//

#ifndef Cuenta_h
#define Cuenta_h
#include "Cliente.h"


class Cuenta {
    
public:
    
    Cuenta(Cliente={0,"",""},float =0, float =4);
    
    ~Cuenta();
    
    
    
    
    void setCliente(Cliente);

    Cliente getCliente()const;

    void setSaldo(float);

    float getSaldo()const;
    
    void setInteresAnual(float);
    
    float getInteresAnual()const;
    
    
    
    static int cantCuentas();
    
    void infoCuenta()const;
    
    float interesGenerado()const;


    
    
private:

    Cliente cliente;
    static int numero;
    float saldo;
    float interesAnual;
    
    
    
};

#endif /* Cuenta_h */
