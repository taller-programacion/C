#include <stdio.h>

int main (){
    int dias;
    float resultado;

    printf("Ingresa un numero de dias para calcular los segundos que tiene: ");
    scanf("%d",&dias);

    resultado = dias * (24* 60 *60);

    printf ("\tEn %d dias hay %0.2f segundos.\n", dias, resultado);

    return 0;

}