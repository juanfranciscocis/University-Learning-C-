//
//  Punto2D.h
//  ProyectoLineaComposicionYAgregacion
//
//  Created by Juan Cisneros on 10/27/21.
//

#ifndef Punto2D_h
#define Punto2D_h

class Punto2D {

public:
    //Constructor
    Punto2D(float = 0, float = 0);
    
//    Destructor
    ~Punto2D();
    
//    SET Y GET
    void setX(float);

    float getX()const;

    void setY(float);

    float getY()const;

    
    //FUNCION PARA MOSTRAR DATOS
    void infoPunto2D()const;
    
private:
    float x;
    float y;
    
    
    
    
};








#endif /* Punto2D_h */
