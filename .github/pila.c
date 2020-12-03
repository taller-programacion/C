#include <stdio.h>
#include <stdlib.h>

int main () {
    int x, numero, factorial = 1;
    printf ("Ingrese un numero: \n");
    scanf ("%d", &numero);

    for (x = numero; x > 1; x-- )
    {
        factorial *= x;
    }
    printf ("Factorial: %d\n", factorial);
}