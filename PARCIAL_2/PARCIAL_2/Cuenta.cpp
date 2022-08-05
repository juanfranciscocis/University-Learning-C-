//
//  Cuenta.cpp
//  PARCIAL_2
//
//  Created by Juan Cisneros on 11/24/21.
//

#include <stdio.h>
#include "Cuenta.h"
#include <iostream>

//INICIALIZO VAR ESTATICA
int Cuenta::numero = 0;


//CONSTRUCTOR
Cuenta::Cuenta(Cliente cliente, float saldo, float interesAnual ){
    setCliente(cliente);
    setSaldo(saldo);
    setInteresAnual(interesAnual);
    numero++;
    this->cliente.ID = numero;
}

Cuenta::~Cuenta(){}



void Cuenta::setCliente(Cliente cliente){
    this->cliente=cliente;
}

Cliente Cuenta::getCliente() const {
    return cliente;
}



void Cuenta::setSaldo(float saldo){
    this->saldo=saldo;
}

float Cuenta::getSaldo() const {
    return saldo;
}


int Cuenta::cantCuentas(){
    return numero;
}

void Cuenta::setInteresAnual(float interesAnual){
    this->interesAnual = interesAnual;
}

float Cuenta::getInteresAnual()const{
    return interesAnual;
}

void Cuenta::infoCuenta()const{
    std::cout << "ID DEL CLIENTE: " << cliente.ID << std::endl;
    std::cout << "NOMBRE DEL CLIENTE: " << cliente.nombre << std::endl;
    std::cout << "TELEFONO DEL CLIENTE: " << cliente.telefono << std::endl;
    std::cout << "NUMERO DE CUENTA: " << cantCuentas() << std::endl;
    std::cout << "SALDO DE LA CUENTA: " << saldo <<"$"<< std::endl;
    std::cout << "INTERES ANUAL: " << interesAnual << "%" << std::endl;
}


float Cuenta::interesGenerado()const{
    float interesGenerado = (getInteresAnual()*getSaldo())/100;
    return interesGenerado;
}
