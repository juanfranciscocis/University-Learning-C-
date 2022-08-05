//
//  Factura.cpp
//  REPASO_EXAMEN_2.2
//
//  Created by Juan Cisneros on 11/23/21.
//

#include <stdio.h>
#include "Factura.h"

//VARIABLES ESTATICAS
int Factura::numero = 0;

//CONSTRUCTOR Y DESTRUCTOR

Factura::Factura(Cliente cliente, std::string fecha, double total){
    
    setCliente(cliente);
    numero++;
    setFecha(fecha);
    setTotal(total);
    
    
}



Factura::~Factura(){}


//GETTERS Y SETTERS
void Factura::setCliente(Cliente cliente){
    this->cliente=cliente;
}

Cliente Factura::getCliente() const {
    return cliente;
}

int Factura::getNumero() const {
    return numero;
}

void Factura::setFecha(std::string fecha){
    while (stoi(fecha.substr(0,2))>31 or stoi(fecha.substr(3,5))>12 or stoi(fecha.substr(6,10))!=2021 or fecha.substr(2,2-1) != "/" or  fecha.substr(5,5-4) != "/"){
        std::cerr << "FECHA INVALIDA REEINGRESE CON EL FORMATO DD/MM/2021" << std::endl;
        getline(std::cin,fecha);
    }
    
    
    
    this->fecha=fecha;
}

std::string Factura::getFecha() const {
    return fecha;
}

void Factura::setTotal(double total){
    while (total < 0) {
        std::cerr << "TOTAL MENOR A 0" << std::endl;
        std::cin >> total;
    }
    this->total=total;
}

double Factura::getTotal() const {
    return total;
}


void Factura::detalleFactura()const{
    std::cout << "NOMBRE DEL CLIENTE: " << cliente.nombre << std::endl;
    std::cout << "APELLIDO DEL CLIENTE: " << cliente.apellido << std::endl;
    std::cout << "CEDULA DEL CLIENTE: " << cliente.cedula << std::endl;
    std::cout << "NUMERO DE CELULAR DEL CLIENTE: " << cliente.celular << std::endl;
    std::cout << "FECHA DE VENTA: " << fecha << std::endl;
    std::cout << "TOTAL: " << total << std::endl;
    std::cout << "NUMERO DE FACTURA: " << numero << std::endl;
}
