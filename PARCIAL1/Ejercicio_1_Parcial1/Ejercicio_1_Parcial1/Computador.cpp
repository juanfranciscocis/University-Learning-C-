//
//  Computador.cpp
//  Ejercicio_1_Parcial1
//
//  Created by Juan Cisneros on 10/19/21.
//

#include <stdio.h>
#include "Computador.h"
#include <string>
#include <iostream>

Computador::Computador(std::string brand,std::string year,std::string cpu, int ram, int price){
    setAno(year);
    setMarca(brand);
    setProcesador(cpu);
    setMemoriaRAM(ram);
    setPrecio(price);
};

Computador::~Computador(){
    std::cout << "DESTRUIDO EL OBJETO" << std::endl;
}

void Computador::setMarca(std::string brand){
    marca=brand;
}

std::string Computador::getMarca() const {
    return marca;
}

void Computador::setAno(std::string year){
    while (stoi(year) <2020 or stoi(year) >2021) { //funcion para convertir strings en int
        std::cerr << "ANO MENOR A 2020, REINGRESE" << std::endl;
        getline(std::cin, year);
    }
    
    ano=year;
}

std::string Computador::getAno() const {
    return ano;
}

void Computador::setProcesador(std::string cpu){
    procesador=cpu;
}

std::string Computador::getProcesador() const {
    return procesador;
}

void Computador::setMemoriaRAM(int ram){
    
    
    while (ram != 8 and ram != 16 and ram != 32 ) {
        std::cerr << "RAM ERROR, REINGRESE" << std::endl;
        std::cin >> ram;
        std::cin.ignore();
        
    }
    
    memoriaRAM=ram;
}

int Computador::getMemoriaRAM() const {
    return memoriaRAM;
}

void Computador::setPrecio(int price){
    precio=price;
}

int Computador::getPrecio() const {
    return precio;
}

void Computador::setModelo(std::string model){
    modelo = model;
}

std::string Computador::getModelo()const{
    return modelo;
}


void Computador::datosComputador()const{
    
    std::cout << "MARCA: " << getMarca() << std::endl;
    std::cout << "MODELO: " << getModelo()<< std::endl;
    std::cout << "ANO: " <<getAno() << std::endl;
    std::cout << "PROCESADOR: " << getProcesador() << std::endl;
    std::cout << "RAM: " << getMemoriaRAM()<< std::endl;
    std::cout << "PRECIO: " << getPrecio()<< std::endl;
    
}
