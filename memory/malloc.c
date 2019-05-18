#include <stdio.h>
#include <stdlib.h>

int Cantidad() {
    int cantidad;
    printf("Números que deseas guardar: ");
    scanf("%i", &cantidad);
    return cantidad;
}

void leerNumeros(int cantidad, int *numeros) {
    for (int i =0;i < cantidad; i++) {
	printf("Número %d:",i + 1);
        scanf("%i",&numeros[i]);
    }
}

void imprimirNumeros(int cantidad, int *numeros) {
    for (int i=0;i < cantidad; i++) {
        printf("Número %d : %i ", i+1, numeros[i]);
    }
}

int main(void) {
    int cantidad = Cantidad();
    		   /*(cast-type*) malloc(byte-size)*/
    int *numeros = (int*) malloc(cantidad * sizeof(int));

    leerNumeros(cantidad, numeros);
    imprimirNumeros(cantidad, numeros);

    free(numeros);
    return 0;
}
