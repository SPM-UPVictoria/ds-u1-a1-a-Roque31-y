#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <iostream>

template <typename T, int ALUMNO, int MATERIA>
class GradeBook{
    public:
    T cal[alumno][materia];
    
    //llenar el array
    void obtenerCalificaciones(int alumno, int materia, int calificacion){
        cal[alumno][materia] = calificacion;
    };

    //prom por alumno
    void promAlumno(int alumno){
        for (int i = 0; i < 5; i++){
            T suma = 0;
            for (int j = 0; j < 4; j++){
                suma += cal[i][j];
            }        
        }
    };
    //prom por materia
    void promMateria(int materia){
        for (int j = 0; j < 4; j++){
            T suma = 0;
            for (int i = 0; i < 5; i++){
                suma += cal[i][j];
            }        
        }
    };
    //buscar maximo
    void maximo(){
        T max = cal[0][0];
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 4; j++){
                if (cal[i][j] > max){
                    max = cal[i][j];
                }
            }        
        }
    };
    //buscar minimo
    void minimo(){
        T min = cal[0][0];
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 4; j++){
                if (cal[i][j] < min){
                    min = cal[i][j];
                }
            }        
        }
    };

};

#endif 