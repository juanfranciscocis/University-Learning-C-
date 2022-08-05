#ifndef Cliente_h
#define Cliente_h
#include <string>
#include "Cuenta.h"

//Definición clase Cliente
class Cliente
{
    friend class Cuenta;
    
private:
    //Datos miembro
    int ID;
    std::string nombre;
    std::string telefono;
public:
    //Funciones miembro
    //Constructor
    Cliente(int=0,std::string="",std::string="");
    //Destructor
    ~Cliente();
    //Funciones set y get
    void setID (int);
    void setNombre (std::string);
    void setTelefono (std::string);
    int getID () const;
    std::string getNombre () const;
    std::string getTelefono () const;
};

#endif

