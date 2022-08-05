//
//  Computador.h
//  Ejercicio_1_Parcial1
//
//  Created by Juan Cisneros on 10/19/21.
//

#ifndef Computador_h
#define Computador_h
#include <string>


class Computador {
public:
    
    Computador(std::string = "hola", std::string = "2021",std::string = "hola",int=16,int=20);
    
   ~Computador();
    
    
    void setMarca(std::string);

    std::string getMarca()const;

    void setAno(std::string);

    std::string getAno()const;

    void setProcesador(std::string);

    std::string getProcesador()const;

    void setMemoriaRAM(int);

    int getMemoriaRAM()const;

    void setPrecio(int);

    int getPrecio()const;
    
    void datosComputador()const;
    
    void setModelo(std::string);
    
    std::string getModelo()const;
    
    

    
private:
    

    std::string marca;
    std::string modelo;
    std::string ano;
    std::string procesador;
    int memoriaRAM;
    int precio;
};


#endif /* Computador_h */
