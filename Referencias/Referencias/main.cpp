//REFERENCIAS - otro nombre, alias, nickname para una variable
#include <iostream>

void f1(int&); //DECLARO LA FUNCION
//REFERENCIA A TIPO DICHO DE DATO

    

int main() {
    
    //DECLARACION E INICIALIZACION DE UNA VARIABLE ENTERA
    int a =10;
    
    //CREANDO UNA REFERENCIA A UN ENTERO QUE SE VA A LLAMAR "B"
    //B ES UNA REFERENCIA, OTRO NOMBRE, ALIAS , NICKNAME PARA "A"
    //NO ES LO MISMO QUE DECIR B=A, B ES OTRO NOMBRE PARA A
    int &b = a;
    b+=50;

    std::cout << b << std::endl;
    //imprime 60
    std::cout << a << std::endl;
    //imprime 60 porque B modifico a A
    
    //TODA OPERACION QUE SE EJECUTA SOBRE B SE EJECUTA EN REALIDAD SOBRE A PORQUE B ES OTRO NOMBRE PARA A
    
    
    //USO DE LA FUNCION
    f1(a);
    std::cout << "VARIABLE A = " << a << std::endl;
    
    
    
    
    return 0;
}

void f1(int& x){ //X ES OTRO NOMBRE PARA UN ENTERO, PARA EL ENTERO QUE SE PASE COMO ARGUMENTO
    x= x* 2; //a= a*2
    std::cout << x << std::endl; //valor de x es 120 (local) pero el valor de "A" sigue siendo 120!
}
