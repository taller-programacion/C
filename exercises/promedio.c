#include<stdio.h>
/*
Descripcion: Calcular promedio de un alumno o alumna
*/

char nomMateria; //Variable Global
double promedio = 0;

int main(){
    int cont;
    double calificaciones[]={}; 
    printf("Dame la primera calificacion: ");//Declarando arreglo de flotantes

    /*Actividad:
    1. Pedir cuantas calificaciones capturar
    2. Preguntar nombre de asignaturas
    3. Calcular el promedio
    */
    scanf("%lf", calificaciones);

    printf("Primera calificacion %f", calificaciones[0]);

    for(cont = 0; cont < 7; cont++){
        printf("Calificacion: %0.2lf\n", calificaciones[cont]);

        promedio += calificaciones [cont];  
    }
    printf("Contador final %d\n", cont);
    printf("\tPromedio: %0.2f\n", promedio/cont);

    printf("Fin de programa");
    return 0;
}