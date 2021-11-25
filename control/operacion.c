#include<stdio.h>
/*
 Autor: DanJ
 Descripción: División entre dos números enteros
 IF ELSE ELSE IF
 Estructura de Selección Simple
*/

/*Declaramos variables*/
int num1 = 0;
int num2 = 0;
int resultado = 0;

int main(){
    //Operación
    printf("\n\tDivisión entre dos números");
    printf("\n-------------------------------\n");
    printf("Dame el primer número:");
    scanf("%i", &num1);  //100
    printf("Dame el segundo número:");
    scanf("%i", &num2);  //5
    if(num2 == 0){ // ¿ 5 == 0 ?  => false
        printf("La división entre 0 no está definida");
        printf("\n\tFIN DEL IF\n");
    }else{
        resultado = num1 / num2;
        printf("\n\tEl resultado de dividir %i entre %i es %i\n", num1, num2, resultado);
        printf("\n\tFIN DEL ELSE\n");
    }
    printf("\n\tFIN DEL PROGRAMA\n");
    return 0;
}