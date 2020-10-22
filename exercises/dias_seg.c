#include <stdio.h>

int main(){
    //Declaración de variables
    int dias;
    float resultado;

    //Intrucciones para el usuario
    printf("Ingresa un número de días para calcular los segundos que tiene: ");
    //Leemos la variable dias
    scanf("%d", &dias);
    resultado = dias * (24 * 60 * 60);
    printf("\tEn %d días hay %0.2f segundos.\n", dias, resultado);
    
    return 0;
}
