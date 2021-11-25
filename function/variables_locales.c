#include <stdio.h>

int suma(); //Declaración de función

int main() {
    printf("FUERA DE LA FUNCIÓN: El resultado de la suma es:  %d\n", suma());
   // printf("El resultado de %d + %d es:  %d\n", entero1, entero2, suma());
    return 0;
}

int suma(){ //Implementación de función
    int entero1 = 3; //Variables locales
    int entero2 = 30;
    int resultado = 0;
    resultado = entero1 + entero2;
    printf("Dentro de la FUNCIÓN: El resultado de %d + %d es:  %d\n", entero1, entero2, resultado);
    return resultado;
}



