//
//  Factura.h
//  PruebaParcial1
//
//  Created by Juan Cisneros on 10/20/21.
//

#ifndef Factura_h
#define Factura_h
#include <string>

class Factura {
    
public:
    
    Factura(std::string,std::string,std::string,std::string,std::string,int, double);
    
    ~Factura();
    
    
    void setSurcursal(std::string);

    std::string getSurcursal() const;

    void setNumero(std::string);

    std::string getNumero()const;

    void setRuc(std::string);

    std::string getRuc()const;

    void setCliente(std::string);

    std::string getCliente() const;

    void setFecha(std::string);

    std::string getFecha()const;

    void setPorcentajeIva(int);

    int getPorcentajeIva()const;

    void setSubtotal(double);

    double getSubtotal()const;
    
    void detalleFacrura() const;
    


    


    
    
    
    
    
    
    
    
private:
    

    std::string surcursal;
    std::string numero;
    std::string ruc;
    std::string cliente;
    std::string fecha;
    int porcentajeIva;
    double subtotal;
};









#endif /* Factura_h */
