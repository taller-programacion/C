#include <stdio.h>

//Declaración de variables globales
int entero1 = 3;
int entero2 = 30;
int resultado = 0;

int suma(){ //Declaración e implementación de función
    entero1 = 10;
    entero2 =5 ;
    resultado = entero1 + entero2;
    return resultado;
}

int main() {
    resultado = entero1 + entero2;
    printf("El resultado de la suma fuera de la funcion es:  %d\n", resultado);
    printf("El resultado de la suma en la funcion es:  %d\n", suma());
    return 0;
}
