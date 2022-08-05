//
//  main.cpp
//  REPASO_EXAMEN_FINAL
//
//  Created by Juan Cisneros on 12/19/21.
//

#include <iostream>
#include "Estudiante.h"
#include "Estudiante_Universitario.h"
#include "Estudiante_Universitario_Postgrado.h"
#include <array>

int main() {
    //OBJERO DE LA CLASE ESTUDIANTE UNIVERSITARIO
    EstudianteUniversitario eu1("CRISTINA", "GUZMAN", 40,"NO","ARQUITECTURA",3.4);
    //OBJETO DE LA CLASE ESTUDIANTE UNIVERSITARIO POSTGRADO
    EstudianteUniversitarioPostgrado eup1("JUAN", "CISNEROS", 20,"USFQ","COMPUTACION",3,"NO");
    
    //CREO UN ARRAY DE ESTUDIANTES QUE APUNTE A 3 OBJETOS DE CLASES DERIVADAS (NO PUEDO CREAR OBJETOS ESTUDIANTE PORQUE ES UNA CLASE ABSTRACTA)
    
    std::array <Estudiante*, 3> objetosClasesDerivadasEstudiante;
    objetosClasesDerivadasEstudiante[1]=&eu1;//APUNTO A UN OBJETO DE LA CLASE ESTUDIANTE UNIVERSITARIO
    objetosClasesDerivadasEstudiante[2]=&eup1; //APUNTO A UN OBJETO DE LA CLASE ESTUDIANTE UNIVERSITARIO POSTGRADO
    
    
    for (int i = 1; i <=2; i++) {
        std::cout<<std::endl;
        std::cout << i << std::endl;
        objetosClasesDerivadasEstudiante[i]->informacionEstudiante();
        std::cout<<std::endl;
    }
    
    
    
    
    return 0;
  
}
