#include <stdio.h>
#include <stdlib.h>

/*Funciones*/

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
/* Fin de funciones*/

/* Main */

int main(void) {
    //Declaración de variable*/
    int cantidad = Cantidad(); //int cantidad = 300;
    		   /*(cast-type*) malloc(byte-size)*/
    /* Manejo Dinámico de Memoria */
    //                    malloc(300 * 4 bytes)
    int *numeros = (int*) malloc(cantidad * sizeof(int)); //Aparto el espacio en memoria de forma dinámica

    leerNumeros(cantidad, numeros); /*Asignando valor a los espacios de memoria */
    imprimirNumeros(cantidad, numeros); /*Mostrando los valores*/

    free(numeros); /*Liberar la memoria*/
    return 0;
}
