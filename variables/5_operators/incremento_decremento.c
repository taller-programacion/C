#include <stdio.h> // Archivo de cabecera para subrutinas de e/s
#include <stdlib.h> // Archivo de cabecera para subrutinas de utilidades
//++ incremento
//-- decremento
int main(){ // Inicio
 float a,b; //Reservando espacio en memoria principal

 printf("Dame el primer número\n"); //Impresión en pantalla
 scanf("%f",&a);
/* printf("Valor inicial de a = %f\n",a); //20.50
 b=++a; // b = 21.50;
 // a = a +1;   a = 20.50 + 1 = 21.50
 // b = a;      b= 21.50
 
 printf("Valor de b en el momento de hacer la operacion ++a = %f\n",b); //21
 printf("Valor de a después de hacer ++a = %f\n",a); //21
 */
 
 printf("Valor inicial de a = %f\n",a);
 b=a++; // b = 20.50; a =21.50;
 // b = a;   a = 21.50   b= 21.50;
 // a++ = 21.50 + 1;     a= 22.50;
 printf("Valor de b en el momento de hacer la operación a++ = %f\n",b);
 printf("Valor de a después de hacer a++ = %f\n",a);
 /*
 printf("Valor inicial de a = %f\n",a);
 b=--a;
 printf("Valor de b en el momento de hacer la operación --a = %f\n",b);
 printf("Valor de a después de hacer --a = %f\n",a);
 printf("Valor inicial de a = %f\n",a);
 b=a--;
 printf("Valor de b en el momento de hacer la operación a-- = %f\n",b);
 printf("Valor de a después de hacer a-- = %f\n",a);
 */
 return 0;
} // Fin de programa
