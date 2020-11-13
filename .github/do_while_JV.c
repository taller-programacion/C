#include <stdio.h>

main (){
    int a, b, i, res;

    printf ("Dame dos enteros positivos: ");
    scanf ("%d %d", &a, &b);
    res = 0;
    i = 1;

    do {
        res = res + b;
        i ++;
    } while (i<=a);
printf ("El resultado es %d\n", res);
}