#include <stdio.h> // Archivo de cabecera para subrutinas de e/s
#include <stdlib.h> // Archivo de cabecera para subrutinas de utilidades
float a,b;
int main()
{ // Inicio
 system("clear"); // Limpia pantallpa
	printf("Dame el primer número\n");
	scanf("%f",&a);
 printf("Valor inicial de a = %f\n",a);
 b=++a;
 printf("Valor de b en el momento de hacer la operacion ++a = %f\n",b);
 printf("Valor de a después de hacer ++a = %f\n",a);
 printf("Valor inicial de a = %f\n",a);
 b=a++;
 printf("Valor de b en el momento de hacer la operación a++ = %f\n",b);
 printf("Valor de a después de hacer a++ = %f\n",a);
 printf("Valor inicial de a = %f\n",a);
 b=--a;
 printf("Valor de b en el momento de hacer la operación --a = %f\n",b);
 printf("Valor de a después de hacer --a = %f\n",a);
 printf("Valor inicial de a = %f\n",a);
 b=a--;
 printf("Valor de b en el momento de hacer la operación a-- = %f\n",b);
 printf("Valor de a después de hacer a-- = %f\n",a);
 return 0;
} // Fin de programa
