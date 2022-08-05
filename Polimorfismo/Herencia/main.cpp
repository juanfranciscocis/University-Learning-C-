//
//  main.cpp
//  Herencia
//
//  Created by Juan Cisneros on 12/1/21.
//

#include <iostream>
#include "Empleado.h"
#include <array>
#include <vector>

int main() {
    
    Ciudadano c1;
    
    
    Empleado emp1,e1;
    emp1.setSalario(1000);
    emp1.setNombre("JUAN");
    emp1.setEdad(19);
    //ENLACE ESTATICO: IMPRIME LO QUE SE LE PIDE
    std::cout << "-----ENLACE ESTATICO -----" <<std::endl;
    emp1.info();
    std::cout << std::endl;

    
    
    
    //ENLACE DINAMICO: DEPENDE DEL OBJETO A QUE SE APUNTA
    
    //PUNTERO  A CUIDADANO
    Ciudadano* c1Ptr = &c1; //DEFINO UN PUNTRO A UN CIUDADANO
    std::cout << "------NORMAL PUNTEROS------" << std::endl;
    c1Ptr->info();//IMPRIME CIUDADANO
    
    //PUNTERO A EMPLEADO
    Empleado* e1Ptr = &emp1;
    e1Ptr->info(); //IMPRIME EMPLEADO
    
    
    //PUNTERO DE LA CLASE BASE QUE APUNTA A UN OBJETO DE LA CLASE DERIVADA
    c1Ptr = &emp1;
    std::cout << std::endl;
    std::cout << "-------NO POLIMORFISMO-------" << std::endl;
    c1Ptr->infoNoPoli(); //IMPRIME CIUDADANO SIN POLIMORFISMO, AUNQUE HAGAMOS UN PUNTERO A EMPLEADO
    std::cout << std::endl;
    std::cout << "-------POLIMORFISMO-------" << std::endl;
    c1Ptr->info(); //CON POLIMORFISMO IMPRIME EMPLEADO
    
    //REFERENCIA DE LA CLASE BASE A UN OBJETO DE LA CLASE DERIVADA
    Ciudadano& c1Ref = emp1;
    std::cout << std::endl;
    std::cout << "-------NO POLIMORFISMO-------" << std::endl;
    c1Ref.infoNoPoli(); //IMPRIME CIUDADANO SIN POLIMORFISMO AUNQUE HAGAMOS UNA REFERENCIA A EMPLEADO
    std::cout << std::endl;
    std::cout << "-------POLIMORFISMO-------" << std::endl;
    c1Ref.info();//CON POLIMORFISMO IMPRIME EMPLEADO
    
    //***SIN IMPLEMENTAR POLIMORFISMO LA FUNCION INVOCADA ES AQUELLA DEL TIPO DE PUNTERO O REFERENCIA(ESTO NO QUIERO, QUIERO OBTENER LAS CLASES DERIVADAS NO LA BASE)
    
    //PUNTERO DE LA CLASE DERIVADA QUE APUNTE A LA CLASE BASE
    //e1Ptr = &c1; //NO FUNCIONA PORQUE NO TODO CUIDADANO ES UN EMPLEADO
    
    //IMPLEMENTO POLIMORFISMO!!! FUNCIONES VIRTUALES (CLASE BASE)
    
    
    
    
    
    //EJEMPLO -> INDEPENDIENTEMENTE AL OBJETO QUE APUNTE TODOS VIENEN DE LA CLASE BASE Y PUEDO USAR SUS FUNCIONES AL USAR PUNTEROS Y POLIMORFISMO
    std::cout << std::endl;
    std::cout << " ------ EJEMPLO CON VECTORES -------" << std::endl;
    //ARRAY DE PUNTEROS A CUIDADANO
    std::array <Ciudadano*,3> arr;
    
    //VECTOR DE PUNTEROS A CIUDADANO
    std::vector<Ciudadano*> vec(3);
    
    vec[0] = &c1;
    vec[1] = &e1;
    vec[2] = &c1;
    
    //NO SABE QUE FUNCION DEBE USAR, USA LA DE CUIDADANO SIEMPRE
    std::cout << "------- NO POLIMORFISMO-------" << std::endl;
    vec[0]->infoNoPoli();
    vec[1]->infoNoPoli();
    vec[2]->infoNoPoli();
    
    
    //USO LA MISMA FUNCION PARA TODOS PERO EL LENGUAJE RESUELVE AUTOMATICAMENTE QUE FUNCION TIENE QUE USAR
    std::cout << "-------POLIMORFISMO-------" << std::endl;
    vec[0]->info();
    vec[1]->info();
    vec[2]->info();
    
    

    
    
    
    
    
    
    
    

}
