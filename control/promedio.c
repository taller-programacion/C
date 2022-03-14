#include<stdio.h>
/*
Descripcion: Calcular promedio de un alumno o alumna
*/

char nomMateria; //Variable Global
double promedio = 0;

int main(){
    int cont;
    double calificaciones[]={10, 9, 9.5, 11, 9.6, 9, 10}; 
    //Declarando arreglo de flotantes

    for(cont = 0; cont < 7; cont++){
        printf("Calificacion: %0.2lf\n", calificaciones[cont]);

        promedio += calificaciones [cont];  
    }
    printf("Contador final %d\n", cont);
    printf("\tPromedio: %0.2f\n", promedio/cont);

    printf("Fin de programa");
    return 0;
}