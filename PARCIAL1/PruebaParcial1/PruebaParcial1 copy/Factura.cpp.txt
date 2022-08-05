//
//  Factura.cpp
//  PruebaParcial1
//
//  Created by Juan Cisneros on 10/20/21.
//

#include <stdio.h>
#include "Factura.h"
#include <iostream>


Factura::Factura(std::string place, std::string number, std::string ruc1, std::string client, std::string date, int iva, double subtotal){
    
    setSurcursal(place);
    setNumero(number);
    setRuc(ruc1);
    setCliente(client);
    setFecha(date);
    setPorcentajeIva(iva);
    setSubtotal(subtotal);
    

    
}

Factura::~Factura(){};



void Factura::setSurcursal(std::string place){
    
    while (place != "Norte" and place != "Centro" and place!= "Sur") {
        std::cerr << "REINGRESE SURCURSAL" << std::endl;
        getline(std::cin, place);
    }
    
    
    surcursal=place;
}

std::string Factura::getSurcursal() const {
    return surcursal;
}

void Factura::setNumero(std::string number){
    
    std::string surcursalNumber = "1";
    
    if (getSurcursal() == "Norte") {
        surcursalNumber = "1";
    }else if (getSurcursal() == "Centro"){
        surcursalNumber = "2";
    }else if (getSurcursal() == "Sur"){
        surcursalNumber = "3";
    }else{
        surcursalNumber = "0";
    }
    
    while (number.size() != 8 ) {
        std::cerr << "ERROR LONGITUD DEL NUMERO MAX 8 CARACTERES" << std::endl;
        getline(std::cin, number);
        
    }
    
    
    while (number.substr(1,1) != "-") {
        std::cerr << "ERROR EN EL FORMATO DEL NUMERO" << std::endl;
        getline(std::cin, number);
    }
    
    
    while (number.substr(0,1) != "1" or number.substr(0,1) != "2" or number.substr() != "3") {
        if (number.substr(0,1) == surcursalNumber) {
            break;
        }else{
            std::cerr << "SURCURSAL NO ES IGUAL AL PRIMER DIGITO DEL NUMERO" << std::endl;
            getline(std::cin, number);
        }
    }
    
    
    
    
    numero=number;
}

std::string Factura::getNumero() const {
    return numero;
}

void Factura::setRuc(std::string ruc1){
    
    while (ruc1.size() != 13) {
        std::cerr << "RUC NO VALIDO, MENOR O MAYOR A 13 CARACTERES" << std::endl;
        getline(std::cin, ruc1);
    }
    

    while(!(std::stoi(ruc1.substr(0,2)) <= 24) ){
        std::cerr << "RUC INVALIDO" << std::endl;
        getline(std::cin, ruc1);
    }
    
    ruc=ruc1;
}

std::string Factura::getRuc() const {
    return ruc;
}

void Factura::setCliente(std::string client){
    
    while (client.size() > 20 or client.size() <= 0 ) {
        std::cerr << "CLIENTE NO VALIDO, MENOR A 20 CARACTERES O NULO" << std::endl;
        getline(std::cin, client);
    }
    
    
    cliente=client;
}

std::string Factura::getCliente() const {
    return cliente;
}

void Factura::setFecha(std::string date){
    
    

    while (date.substr(2,1) != "/") {
        std::cerr << "FORMATO NO VALIDO 1" << std::endl;
        std::cin.ignore();
        getline(std::cin, date);
    
        
    }
    
    while (date.substr(5,1) != "/") {
        std::cerr << "FORMATO NO VALIDO 2" << std::endl;
        getline(std::cin, date);
    }
    
    
    while (date.substr(date.size()-4, 4) != "2021") {
        std::cerr << "ANO NO VALIDO" << std::endl;
        getline(std::cin, date);
    }
    
    while(!(stoi(date.substr(0,2)) <=31) ){
        
        std::cerr << "DIA NO VALIDO" << std::endl;
        getline(std::cin, date);
    }
    
    while (!( (stoi(date.substr(3,5)) <=12))) {
        std::cerr << "MES NO VALIDO" << std::endl;
        getline(std::cin, date);
    }
    
    
    fecha=date;
}

std::string Factura::getFecha() const {
    return fecha;
}

void Factura::setPorcentajeIva(int iva){
    
    while (iva != 0 and iva!=12) {
        std::cerr << "IVA NO VALIDO" << std::endl;
        std::cin >> iva;
    }
    
    
    
    
    
    porcentajeIva=iva;
}

int Factura::getPorcentajeIva() const {
    return porcentajeIva;
}

void Factura::setSubtotal(double subt){
    
    while (subt < 0) {
        std::cerr << "SUBTOTAL NO VALIDO" << std::endl;
        std::cin >> subt;
    }
    subtotal=subt;
}

double Factura::getSubtotal() const {
    return subtotal;
}

void Factura::detalleFacrura()const{
    std::cout << "Surcursal: " <<getSurcursal() <<std::endl;
    std::cout << "Numero: " << getNumero()<<std::endl;
    std::cout << "RUC: " << getRuc()<<std::endl;
    std::cout << "Cliente: " << getCliente()<<std::endl;
    std::cout << "Fecha: " <<getFecha() <<std::endl;
    std::cout << "PorcentajeIva: " << getPorcentajeIva()<<std::endl;
    std::cout << "Subtotal: " << getSubtotal()<<std::endl;
}
