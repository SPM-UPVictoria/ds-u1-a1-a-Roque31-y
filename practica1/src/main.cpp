#include <iostream>
#include "gradebook.h"

int main(){

    GradeBook <float, 5, 4> cali;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            float calificacion;
            std::cout << "Ingrese la calificacion del alumno " << i + 1 << " en la materia " << j + 1 << ": ";
            std::cin >> calificacion;
            cali.obtenerCalificaciones(i, j, calificacion);
        }
    }

    for(int i = 0;i < 5;i++){
        std::cout << "El promedio del alumno " << i + 1 << " es: ";
        cali.promAlumno(i); std::cout << std::endl;
    }

    for(int j = 0;j < 4;j++){
        std::cout << "El promedio de la materia " << j + 1 << " es: ";
        cali.promMateria(j); std::cout << std::endl;
    }

    std::cout << "La calificacion maxima es: ";
    cali.maximo(); std::cout << std::endl;

    std::cout << "La calificacion minima es: ";
    cali.minimo(); std::cout << std::endl;

    return 0;
}