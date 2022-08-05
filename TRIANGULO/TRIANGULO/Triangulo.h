//
//  Triangulo.h
//  TRIANGULO
//
//  Created by Juan Cisneros on 11/15/21.
//

#ifndef Triangulo_h
#define Triangulo_h

#include "Punto2D.h"

class Triangulo {
    

    
public:
    //CONSTRUCTOR Y DESTRUCTOR
    Triangulo(Punto2D = {0,0},Punto2D = {2,0},Punto2D = {0,2});
    
    ~Triangulo();
    
    //FUNCIONES SET Y GET
    void setVertice1(Punto2D);

    Punto2D getVertice1()const;

    void setVertice2(Punto2D);

    Punto2D getVertice2()const;

    void setVertice3(Punto2D);

    Punto2D getVertice3()const;
    
    void verticesTriangulo()const;
    
    //FUNCION GET CANTIDAD DE TRIANGULOS, ESTA FUNCION PODRA SER ACCEDIDA SIN LA NECESIDAD DE UN OBJETO (NO PUEDE SER CONST)
    static int getCantidadTriangulos();
    
    int getID()const;

    
    
    


 


    
    

    
    
    
    
private:
    //DATOS MIEMBRO
    Punto2D vertice1;
    Punto2D vertice2;
    Punto2D vertice3;
    //DATOS MIEMBRO STATIC
    static int cantidadTriangulos; //CANTIDAD DE OBJETOS CREADOS DE LA CLASE TRIANGULOS
    
    int iD; //ID PARA EL TRIANGULO
    
};


#endif /* Triangulo_h */
