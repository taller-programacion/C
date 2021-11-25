#include <stdio.h>
#include <stdlib.h>

/*Declaración e implementación de función*/
int Cantidad(){
    int valor;
    printf("Números que deseas guardar: ");
    scanf("%i", &valor); //valor = 5
    return valor; // return 5;
}

void leerNumeros(int cantidad, float *numeros) { // 2, float *numeros
    for (int i =0;i < cantidad; i++) { // 2 < 2
	    printf("\nNúmero %d:",i + 1); // Número 1 + 1 = 2 --> Número 2 
        scanf("%f",&numeros[i]); //  &numeros[1] = 5
    }
}

void imprimirNumeros(int cantidad, float *numeros) {  //2, float * numeros
    for (int i=0;i < cantidad; i++) { //2 < 2
        printf("\nNúmero %d : %0.2f ", i+1, numeros[i]); 
        // Número 1 : 10 ", 0+1, numeros[0]
        // Número 2 : 5 ", 1+1, numeros[1]
    }
}

int main(void) {
    //Declaración y asignación de variable
    int cantidad = Cantidad(); // int cantidad = 2;

    /*(cast-type*)*/ 
    /* calloc(n, element-size); */
    /* calloc(5, 4) = 20 bytes */

    float *numeros = (float*) calloc(cantidad, sizeof(float));
    
    imprimirNumeros(cantidad, numeros); // imprimirNumeros(5, numeros[])

    /*inicializa a 0 la memoria reservada*/
    leerNumeros(cantidad, numeros); // leerNumero(5, numeros[]);
    imprimirNumeros(cantidad, numeros); // imprimirNumero(5, numeros[]);

    free(numeros); //Liberar la memoria
    printf("\n\n\tMemoria Liberada\n------------------------------");
    imprimirNumeros(cantidad, numeros); // imprimirNumeros(5, numeros[])
    return 0;
}
