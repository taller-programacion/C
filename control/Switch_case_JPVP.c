#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main (int argc, char *argv[]){
    setlocale (LC_ALL, "");

    printf ("\n\nCALCULADORA BASICA\n");
    int opcion;
    float a, b, c;
        
    printf ("Elige una opcion:\n");
    printf ("\t 1.- Suma:\n");
    printf ("\t 2.- Resta:\n");
    printf ("\t 3.- Multiplicacion:\n");
    printf ("\t 4.- Division:\n");
    printf ("\t 5.- Potencia\n");
    printf ("\t 6.- Raiz cuadrada\n");
    printf ("\t 7.- Salir\n");
    scanf ("%d", &opcion);


    switch (opcion) {
        case 1: printf ("Ingrese el primer valor: ");
                scanf ("%f", &a);
                printf ("Ingrese el valor a sumar: ");
                scanf ("%f", &b);
                c = a + b;
                    printf ("El resultado de sumar %.2f y %.2f es: %.2f", a, b, c); break;
        case 2: printf ("Ingrese el primer valor: ");
                scanf ("%f", &a);
                printf ("Ingrese el valor a restar: ");
                scanf ("%f", &b);
                c = a - b;
                    printf ("El resultado de %.2f menos %.2f es: %.2f", a, b, c); break;
        case 3: printf ("Ingrese el primer valor: ");
                scanf ("%f", &a);
                printf ("Ingrese el valor multiplicador: ");
                scanf ("%f", &b);
                c = a * b;
                    printf ("El resultado multiplicar %.2f y %.2f es: %.2f", a, b, c); break;
        case 4: printf ("Ingrese el dividendo: ");
                scanf ("%f", &a);
                printf ("Ingrese el divisor: ");
                scanf ("%f", &b);
            if (b == 0) {
                printf ("No esta determinada la division entre 0, intente nuevamente.\n"); break;
            }
            else {
                c = a / b;
                printf ("El resultado de dividir %.2f entre %.2f es: %.2f", a, b, c); break;
            }
        case 5: printf ("Ingrese la base: ");
                scanf ("%f", &a);
                printf ("Ingrese el exponente: ");
                scanf ("%f", &b);
                c = pow (a, b);
                printf ("El resultado de %.2f elevado a la potencia %.2f es: %.2f", a, b, c); break;
        case 6: printf ("Ingrese el radicando (numero del que se obtiene la raiz cuadrada): ");
                scanf ("%f", &a);
                c = sqrt (a);
                printf ("El resultado de la raiz cuadrada de %.2f es: %.2f", a, c); break;
        case 7: printf ("Gracias por utilizar la Calculadora basica, hasta pronto.");
                exit (0);
        default: printf ("No esta indicada correctamente la unidad, intente nuevamente.");
        return (0);
    }
}