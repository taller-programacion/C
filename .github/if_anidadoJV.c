#include <stdio.h>

main (){
    int a, b, c;

    printf ("Dame tres enteros ");
    scanf ("%d %d %d", &a, &b, &c);

    if (a>b)
        if (a>c)
            printf ("El valor mayor es: %d\n", a);
                else 
            printf ("El valor mayor es: %d\n", c);
    
    else 
        if (b>c)
            printf ("El valor mayor es: %d\n", b);
                else 
            printf ("El valor mayor es: %d\n", c);
    
    return 0;
}