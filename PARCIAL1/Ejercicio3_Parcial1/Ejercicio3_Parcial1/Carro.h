//
//  Carro.h
//  Ejercicio3_Parcial1
//
//  Created by Juan Cisneros on 10/19/21.
//

#ifndef Carro_h
#define Carro_h


class Carro {
    
public:
    
    Carro(int = 1, int = 1);
    
    ~Carro();
    
    void setLlantas(int);

    int getLlantas()const;

    void setVentanas(int);

    int getVentanas()const;

    



    
    
private:

    int llantas;
    int ventanas;
};


#endif /* Carro_h */
