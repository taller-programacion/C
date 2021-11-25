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
        printf("\nNúmero %d : %i ", i+1, numeros[i]);
    }
}


int main(void) {
    //Declaración de variable*/
    int cantidad = Cantidad(); //int cantidad = 300;
    		   /*(cast-type*) malloc(byte-size)*/
    /* Manejo Dinámico de Memoria */
    //                    malloc(30 * 4 bytes)
    int *numeros = (int*) malloc(cantidad * sizeof(int)); //Aparto el espacio en memoria de forma dinámica

    imprimirNumeros(cantidad, numeros); /*Mostrando los valores*/


    leerNumeros(cantidad, numeros); /*Asignando valor a los espacios de memoria */
    imprimirNumeros(cantidad, numeros); /*Mostrando los valores*/

    free(numeros); //Liberar la memoria

    printf("\n\n\tMemoria Liberada\n------------------------------");
    imprimirNumeros(cantidad, numeros); // imprimirNumeros(5, numeros[])
    return 0;
}
