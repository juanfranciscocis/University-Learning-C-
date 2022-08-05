//
//  Punto3D.h
//  Punto
//
//  Created by Juan Cisneros on 10/13/21.
//

#ifndef Punto3D_h
#define Punto3D_h

class Punto3D {
    
public:
    
    //CONSTRUCTOR
    Punto3D(float=0, float=0,float=0);
    
    //DESTRUCTOR
    ~Punto3D();
    
    
    void setX(float);

    float getX()const;

    void setY(float);

    float getY()const;

    void setZ(float);

    float getZ()const;
    
    //FUNCION PARA MOSTRAR DATOS
    void datosPunto3D()const;
    
    

   



    
private:

    float x;
    float y;
    float z;
    
    
    
    
    
};






#endif /* Punto3D_h */
