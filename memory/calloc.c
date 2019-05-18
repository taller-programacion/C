#include <stdio.h>
#include <stdlib.h>

int Cantidad() {
    int cantidad;
    printf("Números que deseas guardar: ");
    scanf("%i", &cantidad);
    return cantidad;
}

void leerNumeros(int cantidad, float *numeros) {
    for (int i =0;i < cantidad; i++) {
	printf("Número %d:",i + 1);
        scanf("%f",&numeros[i]);
    }
}

void imprimirNumeros(int cantidad, float *numeros) {
    for (int i=0;i < cantidad; i++) {
        printf("Número %d : %f ", i+1, numeros[i]);
    }
}

int main(void) {
    int cantidad = Cantidad();
    /*(cast-type*)calloc(n, element-size);*/
    float *numeros = (float*) calloc(cantidad, sizeof(float));
    /*inicializa a 0 la memoria reservada*/
    leerNumeros(cantidad, numeros);
    imprimirNumeros(cantidad, numeros);

    free(numeros);
    return EXIT_SUCCESS;
}
