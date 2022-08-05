//
//  Usuario.cpp
//  DEBER1
//
//  Created by Juan Cisneros on 10/6/21.
//

#include <stdio.h>
#include <iostream>
#include "Usuario.h"
#include <array>

//CONSTRUCTOR CON FUNCIONES SET
Usuario::Usuario(std::string name,std::string lastName,std::string domain,std::string email,std::string phoneNumber){
    setNombre(name);
    setApellido(lastName);
    setDominio(domain);
    setCorreo(email);
    setTelefono(phoneNumber);
}

//DESTRUCTOR
Usuario::~Usuario(){
    std::cout << "DESTRUIDO EL OBJETO" << std::endl;
};

//FUNCIONES SET Y GET

void Usuario::setNombre(std::string name){
    
    while (name.size()>20 or name.size() <= 0) { //NOMBRE TIENE QUE SER MENOR A 20 Y NO VACIO PARA SALTARSE EL WHILE
        std::cerr << "NOMBRE INFRESADO ERRONEO, MAYOR A 20 CARACTERES O VACIO" << std::endl;
        getline(std::cin,name);
    }
    
    
    
    nombre=name;
}

std::string Usuario::getNombre() const {
    return nombre;
}

void Usuario::setApellido(std::string lastName){
    
    while (lastName.size()>20 or lastName.size() <= 0) { //APELLIDO TIENE QUE SER MENOR A 20 Y NO VACIO PARA SALTARSE EL WHILE
        std::cerr << "APELLIDO INFRESADO ERRONEO, MAYOR A 20 CARACTERES O VACIO" << std::endl;
        getline(std::cin,lastName);
    }
    
    
    apellido=lastName;
}

std::string Usuario::getApellido() const {
    return apellido;
}


void Usuario::setDominio(std::string domain){

    while (chequeoDominio(domain)!= true) { //SI LA FUNCION iterateDomain ES FALSA SE PIDE REINGRESO DE DATOS AL USUARIO
        std::cerr << "REINGRESE EL DOMINIO: NO TERMINA EN EDU O EDU.EC" << std::endl;
        getline(std::cin,domain);
    }
    
    dominio=domain;
}


//FUNCION QUE CHEQUEA SI EL DOMINIO ES VALIDO O NO
bool Usuario::chequeoDominio (std::string dominio) const{
    //DECLARO VARIABLES LOCALES
    std::string dominioUsr; //VARIBALE QUE OBTIENE CADA LETRA DEL STRING INGRESADO POR EL USUARIO
    std::string dominioString; //VARIABLE QUE OBTIENE PALABRAS SIN PUNTO EJ: EDU, USFQ, EC...
    std::array<std::string,200> dominioArray = {}; //ARRAY PARA ALMACENAR CADA PALABRA (dominioString)
    int arrayContador = 0; //CUANTOS ELEMENTOS HAY EN EL ARRAY (CONTADOR)
    bool dominioValidado = false; //VARIBALE DE RETORNO DE LA FUNCION (VERDADERA = DOMINIO VALIDO, FALSA = DOMINIO INVALIDO)
    
    //LOOP QUE SEPARA UN STRING POR LETRAS Y LAS CONCATENA EN LA VARIABLE dominioString, SI ENCUENTRA UN PUNTO GUARDA LA PALABRA EN EL ARRAY
    for (int i =0; i <= dominio.size(); i++) {
        dominioUsr = dominio[i];
        
        if (dominioUsr == "." or dominio.size()== i) { //SI HAY UN PUNTO GUARDO LA PALABRA EN UN ARRAY
            ;
            dominioArray[arrayContador] = dominioString;
            
            arrayContador+=1;
            dominioString = "";
            
            
        }else{
            dominioString += dominio[i]; //SI NO HAY UN PUNTO CONCATENO ESA LETRA PARA FORMAR UNA PALABRA
        }
    }
        


    for (int i = 0; i <= arrayContador; i+=1) { //FOR LOOP QUE VA DESDE i HASTA LAS PALABRAS QUE SE ENCUENTRAN EN EL ARRAY
        int arrayContadorNew = arrayContador-1; //VARIBALE QUE DISMINUYE EN 1 EL TAMANO DEL ARRAY DEBIDO A QUE EL FOR LOOP COMIENZA A CONTAR DESDE 0 MAS NO 1.

        if (dominioArray[i] == "edu" and dominioArray[i+=1] == "ec" and i == arrayContadorNew) { //SI LA PALABRA DEL ARRAY ES edu Y LA PALABRA SIGUIENTE DEL ARRAY ES ec Y SI edu ES LA PENULTIMA PALABRA ALMACENADA EN EL ARRAY
                dominioValidado = true; //VARIABLE DE CONTROL FINAL ES VERDADERA, SE ACABA EL FOR LOOP
                break;
        }
            dominioValidado = false; //VARIABLE DE CONTROL FALSA CONTINUA EL LOOP HASTA LLEGAR A LA ULTIMA PALABRA ALMACENADA EN EL ARRAY
        
    }
    
    if (dominioValidado == false) { //EN EL CASO DE EL DOMINIO NO TERMINE EN edu.ec
        for (int i = 0; i <= arrayContador; i+=1) { //VOLVEMOS A ENTRAR EN UN LOOP PARA CHEQUEAR CADA PALABRA DEL ARRAY
            int arrayContadorNew2 = i +1; //VARIBALE DE  CONTROL PARA SABER SI NOS ENCONTRAMOS EN LA ULTIMA PALABRA DEL ARRAY
            if (dominioArray[i] == "edu" and arrayContadorNew2== arrayContador) { //SI LA PALABRA DEL ARRAY ES edu Y NOS ENCONTRAMOS EN AL UTLTIMA PALABRA DEL ARRAY (OSEA EL DOMINIO TERMINA EN EDU)
            dominioValidado = true; //DOMINIO VALIDO TERMINA EL LOOP
            break;
                
            }else{
                dominioValidado = false; //DOMINIO ES FALSO Y SE REPITE EL LOOP HASTA LLEGAR A LA ULTIMA PALABRA DEL ARRAY
            }
        }
    }
    
    return dominioValidado; //RETORNO DE VALIDACION DE DOMINIO
}

 
std::string Usuario::getDominio() const {
    return dominio;
}

void Usuario::setCorreo(std::string email){
    std::string emailString; //VARIABLE LOCAL DE ALMACENAMIENTO DEL MAIL A COMPARAR
    emailString += getNombre()[0]; //ASIGNO LA PRIMERA LETRA DEL PRIMER NOMBRE
    emailString += "." + getApellido() + "@" + getDominio(); //CONCATENO UN PUNTO, EL APELLIDO DEL USUARIO , UNA ARROBA Y EL DOMINIO
    while (email != emailString) { //SI EL EMAIL INGRESADO NO COINCIDE CON LA CONCATENACION PIDO REINGRESO
        std::cerr << "EMAIL NO COINCIDE, FAVOR REINGRESE" << std::endl;
        getline(std::cin,email);
    }
    correo=email;
}

std::string Usuario::getCorreo() const {
    return correo;
}



void Usuario::setTelefono(std::string phoneNumber){
    std::string phoneNumberIteration;
    for (int i =0; i <=1; i++) {
        phoneNumberIteration += phoneNumber[i]; //ITERO EL NUMERO DE TELEFONO DADO POR EL USUARIO PARA OBTENER LOS DOS PRIMEROS DIGITOS DEL NUMERO
    }
    
    while (phoneNumber.size() != 10 or phoneNumberIteration != "09") { //SI EL TAMANO DEL STRING NO ES 10 Y LA ITERACION NO ES IGUAL A 09, PIDO REINGRESO DE DATOS
        std::cerr << "NUMERO DE TELEFONO NO TIENE 10 DIGITOS O NO COMIENZA CON 09, FAVOR REINGRESE " <<std::endl;
        getline(std::cin,phoneNumber);
    }
    telefono=phoneNumber;
}

std::string Usuario::getTelefono() const {
    return telefono;
}


//FUNCION PARA MOSTRAR LA INFORMACION DEL OBJETO
void Usuario::informacionUsuario()const{
    std::cout << "NOMBRE: " << getNombre() <<std::endl;
    std::cout << "APELLIDO: " << getApellido() <<std::endl;
    std::cout << "DOMINIO: " <<getDominio() <<std::endl;
    std::cout << "CORREO: " << getCorreo() <<std::endl;
    std::cout << "TELEFONO: " << getTelefono() <<std::endl;
    
}
