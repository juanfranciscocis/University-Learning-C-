//
//  Punto.h
//  Punto
//
//  Created by Juan Cisneros on 10/11/21.
//

#ifndef Punto_h
#define Punto_h

class Punto {
    
    
public:
    //CONSTRUCTOR
    Punto(float x1 = 0, float x2=0);
    
    //DESTRUCTOR
    ~Punto();
    
    void setX(float);

    float getX()const;

    void setY(float);

    float getY()const;
    
    void infoPunto()const;

    



    
    
    
private:

    float x;
    float y;
};


#endif /* Punto_h */
