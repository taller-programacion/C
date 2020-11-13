#include <stdio.h>

main () {
    int a, b, i, res;

    printf ("Dame dos enteros positivos: ");
    scanf ("%d %d", &a, &b);

    res = 0;
    
    for (i = 1; i <= a; i ++)
        res = res + b;
    
    printf ("El resultado es %d\n", res);
}