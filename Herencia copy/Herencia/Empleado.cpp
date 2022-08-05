//
//  Empleado.cpp
//  Herencia
//
//  Created by Juan Cisneros on 12/1/21.
//

#include <stdio.h>
#include "Empleado.h"\

Empleado::Empleado(std::string nombre, int edad, float salario):Ciudadano(nombre, edad){
    
    //PUEDO USAR EL CONSTRUCTOR DE LA CLASE BASE!!!
    setSalario(salario);
}

Empleado::~Empleado(){};


void Empleado::setSalario(float salario){
    this->salario=salario;
}

float Empleado::getSalario() const {
    return salario;
}

void Empleado::infoEmpleado()const{
    infoCiudadano();
    std::cout << "SALARIO: " << getSalario() << std::endl;
}
