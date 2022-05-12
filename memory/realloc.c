#include <stdio.h>
#include <stdlib.h>

int i, x;

/*Declaración e implementación de función*/
int Cantidad(){
    int valor;
    printf("Números que deseas guardar: ");
    scanf("%i", &valor); //valor = 5
    return valor; // return 5;
}

int leerNumeros(int inicio, int cantidad, int *numeros) { // 0, 2, int *numeros
    printf("Imprimiendo números\n");
    for (i = inicio; i < cantidad; i++) { // 2 < 2
	   printf("\nNúmero %d:",i + 1); // Número (1 + 1) --> Numero 2: 
        scanf("%d",&numeros[i]); //  &numeros[0] = 2, &numeros[1] = 10 
    }
    printf("El valor de i es %d", i); 
    return i; //2 //Regresando posición de arreglo
}

void imprimirNumeros(int inicio, int cantidad, int *numeros) {  //2, float * numeros
    for (i = inicio; i < cantidad; i++) { //2 < 2
        printf("\nNúmero %d : %d\tMemoria: %p", i+1, numeros[i], &numeros[i]); 
        // Número 1 : 10 ", 0+1, numeros[0]
        // Número 2 : 5 ", 1+1, numeros[1]
    }
}

int main(){

    int *ptr; //Declarado variables
    int inicio = 0;
    int n = Cantidad(); // n1 = 2

    ptr = (int*) malloc(n * sizeof(int));  //Alojando memoria
    //int *ptr = (int*) malloc(n * sizeof(int)); 
    // malloc(2 * 4) --> 8 bytes;
     
    printf("Dirección  de memoria reservada:\n");
    for(int i = 0; i < n; ++i){
         printf("%u\t%p\n", *ptr +i, &ptr + i); //Imprimiendo direcciones de memoria
    }
    x = leerNumeros(inicio, n, ptr); //Almacena los valores arreglo y guarda en x = 2 
    imprimirNumeros(inicio, n, ptr);

    printf("\nIngresa nuevo tamaño de arreglo\n");
    n = Cantidad(); // n1 = 
   
   //realloc(arreglo, nuevaCantidad * tipoDato) 
    ptr = realloc(ptr, n * sizeof(int));
    //realloc(ptr, 5 * 4) ---> realloc(ptr, 20 bytes)

    printf("Nueva Dirección de memoria reservada: \n");
    for(int i = 0; i < n; ++i){
         printf("%i\t%p\n", i + 1, &ptr[i]); //Imprimiendo direcciones de memoria
    }
    leerNumeros(x, n, ptr);
    imprimirNumeros(inicio, n, ptr);
    free(ptr);
    
    return 0;
}
