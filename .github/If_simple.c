#include <stdio.h>
#define IVA 0.25

main (){
    float pvp, precio;
    char lujo;

    printf ("¿Es de lujo? (s/n)");
    scanf ("%c", &lujo);

    printf ("Dame el precio: ");
    scanf ("%f", &precio);

    if ((lujo == 's') || (lujo == 'S'))
        pvp = precio + IVA * precio;

    else {
        pvp = precio;
    }
        printf ("El pvp es: %f", pvp);
    }