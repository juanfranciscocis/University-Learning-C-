//Implementación clase Cliente

#include "Cliente.h"
#include <iostream>
#include <string>
using namespace std;

//Constructor
Cliente::Cliente(int ID1, string nombre1, string telefono1)
{
    setID(ID1);
    setNombre(nombre1);
    setTelefono(telefono1);
}

//Destructor
Cliente::~Cliente()
{}

//Funciones set
void Cliente::setID(int ID1)
{
    ID=ID1;
}
void Cliente::setNombre(string nombre1)
{
    nombre=nombre1;
}
void Cliente::setTelefono(string telefono1)
{
    telefono=telefono1;
}

//Funciones get
int Cliente::getID() const
{
    return ID;
}
string Cliente::getNombre()const
{
    return nombre;
}
string Cliente::getTelefono()const
{
    return telefono;
}


