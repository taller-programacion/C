#include<stdio.h> 

int main(){
	// Caracteres
	char c = 'A';
	printf("Caracter: %c \n", c);
	printf("Caracter en decimal: %d \n", c);
	printf("Caracter en decimal: %i \n", c);
	printf("Caracter en octal: %o \n", c);
	printf("Caracter en hexadecimal: %x\n", c);
	
	//Números enteros
	short ec= 10;
	printf("Entero corto: %i \n", ec);
	printf("Entero corto: %d \n", ec);
	printf("Entero corto en octal: %o \n", ec);
	printf("Entero corto en hexadecimal: %x \n", ec);
	
	int ec2= -10000;
	printf("Numero entero corto: %i \n", ec2);
	
	//Números enteros largos
	signed long el= 9999999;
	printf("Entero largo: %ld \n", el);
	printf("Entero largo: %li \n", el);
	
	//Números reales cortos
	float rc= 25.244696;
	printf("Numero reales cortos: %f \n", rc);
	printf("Numero reales cortos: %e \n", rc); //formato científico
	printf("Numero reales cortos: %g \n", rc); // redondeo
	
	//Numeros reales largos
	double rl= 22.1635423423455423233553;
	printf("Numero reales largo: %lf \n", rl);
	printf("Numero reales largo: %.10lf \n", rl);
	
	return 0;
}
