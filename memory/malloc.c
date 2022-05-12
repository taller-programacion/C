#include <stdio.h>
#include <stdlib.h>

/*Funciones*/

int Cantidad() {
    int cantidad;
    printf("\nNúmeros que deseas guardar: ");
    scanf("%i", &cantidad); //3  cantidad = 3
    return cantidad;  // return 3
}

void leerNumeros(int cantidad, int *numeros) {  // 3, 
    for (int i =0;i < cantidad; i++) {
	    printf("\nNúmero %d:",i + 1);  // 5, 10, 3
        scanf("%i",&numeros[i]); //numeros[0] = 5  numeros[1] = 10  numeros[2] = 3
    }
}

void imprimirNumeros(int cantidad, int *numeros) {
    for (int i=0;i < cantidad; i++) {
        printf("\nNúmero %d : %i \tDirección Memoria: %p", i+1, numeros[i], &numeros[i]);
    }
}


int main(void) {
    //Declaración de variable*/
    int cantidad = Cantidad(); //int cantidad = 3;
    		   /*(cast-type*) malloc(byte-size)*/
    /* Manejo Dinámico de Memoria */
    //                    malloc(30 * 4 bytes)

    int *numeros = (int*) malloc(cantidad * sizeof(int)); //Aparto el espacio en memoria de forma dinámica
  //(int*) malloc(3 * 4 bytes);

    //imprimirNumeros(cantidad, numeros); /*Mostrando los valores*/
    // 3, numeros


    leerNumeros(cantidad, numeros); /*Asignando valor a los espacios de memoria */
    imprimirNumeros(cantidad, numeros); /*Mostrando los valores*/

    free(numeros); //Liberar la memoria

    printf("\n\n\tMemoria Liberada\n------------------------------");
    imprimirNumeros(cantidad, numeros); // imprimirNumeros(5, numeros[])
    return 0;
}
