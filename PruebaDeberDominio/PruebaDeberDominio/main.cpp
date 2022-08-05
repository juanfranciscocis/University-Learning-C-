//
//  main.cpp
//  PruebaDeberDominio
//
//  Created by Juan Cisneros on 10/7/21.
//

#include <iostream>
#include <array>
bool checkDomain (std::string);

int main() {
    std::string dominio = "edu.jh.ec";
    checkDomain(dominio);
    

    return 0;
}

//FUNCION QUE CHEQUEA SI EL DOMINIO ES VALIDO O NO
bool checkDomain (std::string dominio){
    //DECLARO VARIABLES LOCALES
    std::string dominioUsr; //VARIBALE QUE OBTIENE CADA LETRA DEL STRING INGRESADO POR EL USUARIO
    std::string domainString; //VARIABLE QUE OBTIENE PALABRAS SIN PUNTO EJ: EDU, USFQ, EC...
    std::array<std::string,200> domainArray = {}; //ARRAY PARA ALMACENAR CADA PALABRA (domainString)
    int arrayIndex = 0; //CUANTOS ELEMENTOS HAY EN EL ARRAY (CONTADOR)
    bool domainValid = false; //VARIBALE DE RETORNO DE LA FUNCION (VERDADERA = DOMINIO VALIDO, FALSA = DOMINIO INVALIDO)
    
    //LOOP QUE SEPARA UN STRING POR LETRAS Y LAS CONCATENA EN LA VARIABLE domainString, SI ENCUENTRA UN PUNTO GUARDA LA PALABRA EN EL ARRAY
    for (int i =0; i <= dominio.size(); i++) {
        dominioUsr = dominio[i];
        
        if (dominioUsr == "." or dominio.size()== i) { //SI HAY UN PUNTO GUARDO LA PALABRA EN UN ARRAY
            ;
            domainArray[arrayIndex] = domainString;
            
            arrayIndex+=1;
            domainString = "";
            
            
        }else{
            domainString += dominio[i]; //SI NO HAY UN PUNTO CONCATENO ESA LETRA PARA FORMAR UNA PALABRA
        }
    }
        


    for (int i = 0; i <= arrayIndex; i+=1) { //FOR LOOP QUE VA DESDE i HASTA LAS PALABRAS QUE SE ENCUENTRAN EN EL ARRAY
        int arrayIndexNew = arrayIndex-1; //VARIBALE QUE DISMINUYE EN 1 EL TAMANO DEL ARRAY DEBIDO A QUE EL FOR LOOP COMIENZA A CONTAR DESDE 0 MAS NO 1.

        if (domainArray[i] == "edu" and domainArray[i+=1] == "ec" and i == arrayIndexNew) { //SI LA PALABRA DEL ARRAY ES edu Y LA PALABRA SIGUIENTE DEL ARRAY ES ec Y SI edu ES LA PENULTIMA PALABRA ALMACENADA EN EL ARRAY
                domainValid = true; //VARIABLE DE CONTROL FINAL ES VERDADERA, SE ACABA EL FOR LOOP
                break;
        }
            domainValid = false; //VARIABLE DE CONTROL FALSA CONTINUA EL LOOP HASTA LLEGAR A LA ULTIMA PALABRA ALMACENADA EN EL ARRAY
        
    }
    
    if (domainValid == false) { //EN EL CASO DE EL DOMINIO NO TERMINE EN edu.ec
        for (int i = 0; i <= arrayIndex; i+=1) { //VOLVEMOS A ENTRAR EN UN LOOP PARA CHEQUEAR CADA PALABRA DEL ARRAY
            int arrayIndexNew2 = i +1; //VARIBALE DE  CONTROL PARA SABER SI NOS ENCONTRAMOS EN LA ULTIMA PALABRA DEL ARRAY
            if (domainArray[i] == "edu" and arrayIndexNew2== arrayIndex) { //SI LA PALABRA DEL ARRAY ES edu Y NOS ENCONTRAMOS EN AL UTLTIMA PALABRA DEL ARRAY (OSEA EL DOMINIO TERMINA EN EDU)
            domainValid = true; //DOMINIO VALIDO TERMINA EL LOOP
            break;
                
            }else{
                domainValid = false; //DOMINIO ES FALSO Y SE REPITE EL LOOP HASTA LLEGAR A LA ULTIMA PALABRA DEL ARRAY
            }
        }
    }
    
    return domainValid; //RETORNO DE VALIDACION DE DOMINIO
}
