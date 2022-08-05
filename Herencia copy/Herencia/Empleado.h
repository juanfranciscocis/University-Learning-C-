//
//  Empleado.h
//  Herencia
//
//  Created by Juan Cisneros on 12/1/21.
//

#ifndef Empleado_h
#define Empleado_h
#include "Cuidadano.h"
#include <iostream>

class Empleado : public Ciudadano {
    
public:
    
    Empleado(std::string= "NOMBRE" , int = 18 , float = 0); //INICIALIZO CON EL NOMBRE, EDAD Y EL DATO MIEMBRO NUEVO SALARIO
    
    ~Empleado();
    
    void setSalario(float);
    float getSalario()const;
    
    void infoEmpleado()const;
    
private:
    //YA NO NECESITO DECLARAR DATOS MIEMBRO IGUALES A LOS DE LA CLASE BASE, SOLO NUEVOS
    float salario;

};







#endif /* Empleado_h */
