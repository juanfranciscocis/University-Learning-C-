//
//  main.cpp
//  DEBER2
//
//  Created by Juan Cisneros on 12/1/21.
//

#include <iostream>
#include "Estudiante.h"
#include "EstudianteUniversitario.h"

int main() {
    Estudiante est1;
    std::cout << " ESTUDIANTE NORMAL "<< std::endl;
    est1.informacionEstudiante();
    std::cout << std::endl;
    
    Estudiante est2;
    std::cout << " ESTUDIANTE NORMAL "<< std::endl;
    est2.setNombre("JUAN FRANCISCO");
    est2.setApellido("CISNEROS");
    est2.setEdad(19);
    est2.informacionEstudiante();
    std::cout << std::endl;
    
    EstudianteUniversitario estUni1;
    std::cout << " ESTUDIANTE UNIVERSITARIO "<< std::endl;
    estUni1.informacionEstudianteUniv();
    std::cout << std::endl;
    
    EstudianteUniversitario
    estUni2(est2.getNombre(),est2.getApellido(),est2.getEdad());
    std::cout << " ESTUDIANTE UNIVERSITARIO "<< std::endl;
    estUni2.setUniversidad("USFQ");
    estUni2.setCarrera("CIENCIAS COMPUTACIONALES");
    estUni2.setGPA(4);
    estUni2.informacionEstudianteUniv();
    
    
    
    

    return 0;
}
