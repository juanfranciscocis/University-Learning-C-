//
//  main.cpp
//  DEBER1
//
//  Created by Juan Cisneros on 10/6/21.
//

#include <iostream>
#include "Usuario.h"

int main() {
    
    //DECLARO FUNCIONES
    std::string name, lastName, domain, email, phoneNum;
    
    //CREO UN OBJETO DE LA CALSE USUARIO
    Usuario usr1;
    
    usr1.informacionUsuario();
    std::cout << std::endl;
    
    //PIDO INGRESO DE DATOS AL USUARIO Y LOS ASIGNO A MI OBJETO
    std::cout << "INGRESE SU NOMBRE " << std::endl;
    getline(std::cin,name);
    usr1.setNombre(name);
    
    std::cout << "INGRESE SU APELLIDO " << std::endl;
    getline(std::cin,lastName);
    usr1.setApellido(lastName);
    
    std::cout << "INGRESE UN DOMIMIO " << std::endl;
    getline(std::cin,domain);
    usr1.setDominio(domain);

    
    std::cout << "INGRESE UN CORREO " << std::endl;
    getline(std::cin,email);
    usr1.setCorreo(email);

    
    std::cout << "INGRESE UN NUMERO DE TELEFONO " << std::endl;
    getline(std::cin,phoneNum);
    usr1.setTelefono(phoneNum);
    
    //IMPRESION DE INFORMACION DEL OBJETO USR1
    std::cout << std::endl;
    usr1.informacionUsuario();
    
    

    

    
    
    
    

    
    
    
    
    return 0;
}
