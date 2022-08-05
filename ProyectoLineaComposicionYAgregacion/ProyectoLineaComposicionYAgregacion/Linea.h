//
//  Linea.h
//  ProyectoLineaComposicionYAgregacion
//
//  Created by Juan Cisneros on 10/27/21.
//

#ifndef Linea_h
#define Linea_h

#include "Punto2D.h"

class Linea {
    
public:
    //Constructor
    
    Linea(Punto2D = {0,0} ,Punto2D = {1,0});
    
    //Destructor
    ~Linea();
    
    //SET/GET
    
    void setPInicial(Punto2D);

    Punto2D getPInicial()const;

    void setPFinal(Punto2D);

    Punto2D getPFinal()const;
    
    //MOSTRAR DATOS
    
    void mostrarInformacionLinea()const;
    
    //LONGITUD LINEA
    
    float longitudLinea() const;





    
private:
    Punto2D puntoIncial;
    Punto2D puntoFinal;
};


#endif /* Linea_h */
