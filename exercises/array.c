#include<stdio.h>
/*
Descripcion: Calcular promedio de un alumno o alumna
*/

char nomMateria; //Variable Global
double promedio = 0;

int main(){
    int cont, opt;
    double calificaciones[10] ={ 9, 5, 5, 10};
    char nombres[20][20];
    printf("\nCuantas calificaciones deseas ingresar: "); 
    scanf("%i", &opt);

    //Guardar Calificaciones   
    for(cont = 0; cont < opt; cont++){ // 
        printf("\n-----------------------------");
        printf("\nDame la asignatura : ");
        scanf("%s", nombres[cont]); //nombres = ['I', 'n', 'g', 'l', 'e', 's', '\0', '\0']

        printf("\nDame la calificacion : ");
        scanf("%lf", &calificaciones[cont]);  //calificaciones[0] = 10, calificaciones[1] = 9

        printf("Calificacion: %0.2lf\n", calificaciones[cont]);   //calificaciones[0] = 10  calificaciones[1] = 9
        promedio += calificaciones[cont];  
    }
    printf("\tPromedio: %0.2f\n", promedio/opt);

    //Consultar Calificaciones
        printf("\nDame una posición: ");
        scanf("%i", &opt); // 1
    
        printf("Asignatura: %s\n", nombres[opt-1]);   //calificaciones[0] = 10  calificaciones[1] = 9
        printf("Calificación: %0.2lf\n", calificaciones[opt-1]);   //calificaciones[0] = 10  calificaciones[1] = 9

    printf("Fin de programa");
    
    return 0;
}