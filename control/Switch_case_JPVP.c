#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float suma (float a, float b){
    float c = 0;
    c = a + b;
    return c;
}

float resta (float a, float b){
    float c = 0;
    c = a - b;
    return c;
}

float multiplicacion (float a, float b){
    float c = 0;
    c = a * b;
    return c;
}

float division (float a, float b){
    float c = 0;
    c = a / b;
    return c;
}

float potencia (float a, float b){
    float c = 0;
    c = pow (a, b);
    return c;
}

float raiz_cuadrada (float a){
    float c = 0;
    c = sqrt (a);
    return c;
}

float factorial (float a){
    float c = 1, x;
     for (x = a; x > 1; x-- )
    {
        c *= x;
    }
    return c;
}





int main (){
    
    printf ("\n\nCALCULADORA BASICA\n");
    int opcion;
    float a, b, c;

    do{   
        printf ("---------------------------\n");
        printf ("Elige una opcion:\n");
        printf ("\t 1.- Suma:\n");
        printf ("\t 2.- Resta:\n");
        printf ("\t 3.- Multiplicacion:\n");
        printf ("\t 4.- Division:\n");
        printf ("\t 5.- Potencia\n");
        printf ("\t 6.- Raiz cuadrada\n");
        printf ("\t 7.- Factorial\n");
        printf ("\t 8.- Salir\n");
        printf ("---------------------------\n");
        scanf ("%d", &opcion);


        switch (opcion) {
            case 1: printf ("Ingrese el primer valor: ");
                    scanf ("%f", &a);
                    printf ("Ingrese el valor a sumar: ");
                    scanf ("%f", &b);
                        printf ("El resultado de sumar %.2f y %.2f es: %.2f\n", a, b, suma (a, b)); break;
            case 2: printf ("Ingrese el primer valor: ");
                    scanf ("%f", &a);
                    printf ("Ingrese el valor a restar: ");
                    scanf ("%f", &b);
                        printf ("El resultado de %.2f menos %.2f es: %.2f\n", a, b, resta (a, b)); break;
            case 3: printf ("Ingrese el primer valor: ");
                    scanf ("%f", &a);
                    printf ("Ingrese el valor multiplicador: ");
                    scanf ("%f", &b);
                        printf ("El resultado multiplicar %.2f por %.2f es: %.2f\n", a, b, multiplicacion (a, b)); break;
            case 4: printf ("Ingrese el dividendo: ");
                    scanf ("%f", &a);
                    printf ("Ingrese el divisor: ");
                    scanf ("%f", &b);
                if (b == 0) {
                    printf ("No esta determinada la division entre 0, intente nuevamente.\n"); break;
                }
                else {
                    printf ("El resultado de dividir %.2f entre %.2f es: %.2f\n", a, b, division (a, b)); break;
                }
            case 5: printf ("Ingrese la base: ");
                    scanf ("%f", &a);
                    printf ("Ingrese el exponente: ");
                    scanf ("%f", &b);
                    printf ("El resultado de %.2f elevado a la potencia %.2f es: %.2f\n", a, b, potencia (a, b)); break;
            case 6: printf ("Ingrese el radicando (numero del que se obtiene la raiz cuadrada): ");
                    scanf ("%f", &a);
                    printf ("El resultado de la raiz cuadrada de %.2f es: %.2f\n", a, raiz_cuadrada (a)); break;
            case 7: printf ("Ingrese el valor para obtener el factorial: ");
                    scanf ("%f", &a);
                    printf ("El factorial de %.2f es: %.2f\n", a, factorial (a)); break;
            case 8: printf ("Gracias por utilizar la Calculadora basica, hasta pronto.");
            exit (0);
            default: printf ("No esta indicada correctamente la unidad, intente nuevamente.");
            exit (0);
        }
            } while (opcion !=8);
            return (0);
    }