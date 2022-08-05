
//ClasePunto2D
//Datos miembro: x,y
//Funciones: constructor, set/get, infoPunto
#ifndef PUNTO2D_H
#define PUNTO2D_H




class Punto2D
{
    friend class Rectangulo;
public:
    
    //Constructor
    Punto2D (float=0,float=0);
    //Destructor: si no se tiene definido, el lenguaje lo provee por defecto
    ~Punto2D();
    
    //Funciones set y get
    void setX (float);
    void setY (float);
    float getX () const;
    float getY () const;
    //Función mostrar info del punto
    void infoPunto2D () const;
private:
    float x; //Coordenada en x
    float y; //Coordenada en y

};

#endif
