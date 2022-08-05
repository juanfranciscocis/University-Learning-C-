//
//  Usuario.h
//  DEBER1
//
//  Created by Juan Cisneros on 10/6/21.
//

#ifndef Usuario_h
#define Usuario_h

class Usuario {
    
public:
    
    //CONSTRUCTOR
    Usuario(std::string nombre = "N", std::string apellido = "N", std::string dominio = "usfq.edu.ec",std::string correo = "N.N@usfq.edu.ec", std::string telefono = "0939683251");//CONSTRUCTOR CON PARAMETROS POR DEFECTO
    
    //DESTRUCTOR
    ~Usuario();
    
    
    //FUNCIONES MIEMBRO
    
    void setNombre(std::string);

    std::string getNombre()const;

    void setApellido(std::string);

    std::string getApellido()const;

    void setDominio(std::string);

    std::string getDominio()const;

    void setCorreo(std::string);

    std::string getCorreo() const;

    void setTelefono(std::string);

    std::string getTelefono() const;
    
    void informacionUsuario()const;
    
    bool chequeoDominio(std::string) const; //FUNCION QUE VA A VALIDAR EL DOMINIO NO MODIFICA EL OBJETO
    
    
    
private:
    //DATOS MIEMBRO
    std::string nombre;
    std::string apellido;
    std::string dominio;
    std::string correo;
    std::string telefono;

    
    
    
    
};

#endif /* Usuario_h */
