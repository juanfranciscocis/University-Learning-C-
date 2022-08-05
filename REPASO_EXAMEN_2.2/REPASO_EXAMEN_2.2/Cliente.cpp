//
//  Cliente.cpp
//  REPASO_EXAMEN_2.2
//
//  Created by Juan Cisneros on 11/23/21.
//

#include "Cliente.h"


//CONSTRUCTOR
Cliente::Cliente(std::string nombre,std::string apellido,std::string cedula,std::string celular){
    
    setNombre(nombre);
    setApellido(apellido);
    setCedula(cedula);
    setCelular(celular);
    
    
}

//DESTRUCTOR
Cliente::~Cliente(){}


//SETTERS Y GETTERS
void Cliente::setNombre(std::string nombre){
    
    while (nombre.size() >20 or nombre.size()<=0) {
        std::cerr << "NOMBRE INVALIDO REEINGRESE: ";
        getline(std::cin,nombre);
    }
    
    
    this->nombre=nombre;
}

std::string Cliente::getNombre() const {
    return nombre;
}

void Cliente::setApellido(std::string apellido){
    
    while (apellido.size() >20 or apellido.size()<=0) {
        std::cerr << "APELLIDO INVALIDO REEINGRESE: ";
        getline(std::cin,apellido);
    }
    
    this->apellido=apellido;
}

std::string Cliente::getApellido() const {
    return apellido;
}

void Cliente::setCedula(std::string cedula){
    while (cedula.size() !=10 or std::stoi(cedula.substr(0,2)) >24 or std::stoi(cedula.substr(0,2)) < 0) {
        std::cerr << "CEDULA INVALIDA REEINGRESE: ";
        getline(std::cin,cedula);
    }
    
    
    this->cedula=cedula;
}

std::string Cliente::getCedula() const {
    return cedula;
}

void Cliente::setCelular(std::string celular){
    while (celular.size() !=10 or std::stoi(celular.substr(0,2)) != 9) {
        std::cerr << "CELULAR INVALIDO REEINGRESE: ";
        getline(std::cin,celular);
    }
    this->celular=celular;
}

std::string Cliente::getCelular() const {
    return celular;
}

