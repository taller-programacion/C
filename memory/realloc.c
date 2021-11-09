#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, i , n1, n2; //Declarado variables
    printf("Ingresa tamaño de arreglo: ");
    scanf("%d", &n1);

    ptr = (int*) malloc(n1 * sizeof(int));  //Alojando memoria

    printf("Dirección  de memoria reservada:\n");
    for(i = 0; i < n1; ++i)
         printf("%u\t%p\n", *ptr +i, &ptr + i);

    printf("\nIngresa nuevo tamño de arreglo: ");
    scanf("%d", &n2);
   //realloc(arreglo, nuevaCantidad * tipoDato) 
    ptr = realloc(ptr, n2 * sizeof(int));

    printf("Nuecva Dirección de memoria reservada: \n ");
    for(i = 0; i < n2; ++i)
         printf("%u\t%p\n", *ptr +i, &ptr + i);
    return 0;
}
