#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr, sum = 0;

    printf("Número de elementos: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));
    
    if(ptr == NULL){
        printf("¡Error al reservar memoria! .");
        exit(0);
    }

    printf("Ingresa los elementos a sumar:\n");
    for(i = 0; i < n; ++i){
        scanf("%d", ptr + i);
        sum += *(ptr + i); //sum = 0 + *(ptr + i) 30 = 30 ---> sum = 30 + 2 = 32 
      //sum += sum; 
    }

    printf("La suma = %d", sum);
    free(ptr);
    return 0;
}
