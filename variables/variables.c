#include <stdio.h>
int main()
{
	int entero=32;
	short int entero_corto=32;
	long int entero_largo=32L;
	unsigned int entero_sin_signo=32U;
	float simple=12.8F;
	double doble=12.8;
	long double doble_extendido=12.8L;
	float notacion_cientifica=4.5e-4;
	char caracter='A';
	char cadena[10]="Lenguaje C";
	
	printf("int:%d\n", entero); 
	printf("Short int:%hd\n", entero_corto); 
	printf("Long int:%ld\n", entero_largo); 
	printf("Unsigned int:%u\n", entero_sin_signo); 
	printf("Float:%f\n", simple); 
	printf("Float NCientifica:%f\n", notacion_cientifica); 
	printf("Double:%f\n", doble); 
	printf("Double Double:%LF\n", doble_extendido); 
	printf("Char:%c\n", caracter); 
	printf("String:%s\n", cadena); 
// fin
return 0;
}
