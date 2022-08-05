//
//  Cuadrado.h
//  COMPOSICON_AGREGACION_2_CUADRADO
//
//  Created by Juan Cisneros on 11/8/21.
//

#ifndef Cuadrado_h
#define Cuadrado_h
#include "Punto.h"

class Cuadrado{
    
    
public:
    
    Cuadrado(Punto2D = {0,0},Punto2D = {1,0}, Punto2D = {1,1} , Punto2D ={0,1});
    
    ~Cuadrado();
    
    
    void setPunto1(Punto2D in);

    Punto2D getPunto1()const;

    void setPunto2(Punto2D in);

    Punto2D getPunto2()const;

    void setPunto3(Punto2D in);

    Punto2D getPunto3()const;

    void setPunto4(Punto2D in);

    Punto2D getPunto4()const;
    
    void mostrarInfoCuadrado()const;
    
    void perimetroCuadrado()const;
    
    void areaCuadrado()const;

    



    
private:

    Punto2D punto1;
    Punto2D punto2;
    Punto2D punto3;
    Punto2D punto4;
    
    
    
    
    
    
    
};





#endif /* Cuadrado_h */
