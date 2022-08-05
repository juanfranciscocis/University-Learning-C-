/*
 Escriba una clase Linea que tenga dos datos miembro de una clase Punto2D que correspondan a coordenadas cartesianas de los puntos inicial y final de la línea.
 Incluya un constructor con parámetros por defecto que inicialice todos los datos miembro con los valores ((0,0),(1,0)). Escriba también el destructor de la clase.  Además, incluya las funciones set/get respectivas.
 Escriba una función longitudLinea para determinar dicho valor, debe retornar la longitud.
 Escriba también una función infoLinea para mostrar la información de la línea: punto inicial, punto final, y longitud.
 Separe la interfaz de la clase, de su implementación.
 Pruebe en un programa la funcionalidad de la clase creando varios objetos.
 */

#ifndef LINEA_H
#define LINEA_H

#include "Punto2D.h"

class Linea
{

private:
    //Datos miembro, puntos de la clase Punto2D
    Punto2D pInicial;
    Punto2D pFinal;
    
public:
    //Constructor
    Linea (Punto2D = {0,0},Punto2D = {1,0});
    //Destructor
    ~Linea();
    
    //Funciones set/get
    //Set
    void setPInicial (Punto2D);
    void setPFinal (Punto2D);
    //Get
    Punto2D getPInicial () const;
    Punto2D getPFinal () const;
    
    //Función longitudLinea
    float longitudLinea () const;
    
    //Función infoLinea
    void infoLinea () const;

};

#endif
