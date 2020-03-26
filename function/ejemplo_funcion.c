#include <stdio.h>

int suma(int entero1, int entero2); //Declaración de función

int main() {
    printf("El resultado de la suma es:  %d\n", suma(200,15));
    return 0;
}

int suma(int entero1, int entero2){ //Implementación de función
    int resultado = 0;
    resultado = entero1 + entero2;
    return resultado;
}



