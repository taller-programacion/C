#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a,b,c;
int a1, b1;
int main()
{
	system("clear");
	printf("Dame el primer número\n");
	scanf("%f",&a);
	a1 = a;
	printf("Dame el segundo número\n");
	scanf("%f",&b);
	b1 = b;

	printf("Suma\n");
		c=a+b; // Suma o adición
		printf("\t%f + %f = %f\n",a,b,c);
	printf("Resta\n");
		c=a-b; // Resta o diferencia
		printf("\t%f - %f = %f\n",a,b,c);
	printf("Multiplicación\n");
		c=a*b; // Multiplicación o producto
		printf("\t%f * %f = %f\n",a,b,c);
	printf("División\n");
		c=a/b; // División o cociente tipo real
		printf("\t%f / %f = %f\n",a,b,c);
	printf("Módulo\n");
		c=a1%b1; // Resto o módulo
		printf("\tEl módulo de %d/%d es %f\n",a1,b1,c);
	printf("Raíz cuadrada\n");
		c=sqrt(a); // Raíz cuadrada
		printf("\tLa Raíz cuadrada de %f es %f\n",a,c);
	printf("Potencia\n");
		c = pow(a, b); //Potencia
	printf("\tEl número %f elevado a la potencia %f en %f\n",a,b,c);
return 0;
}
