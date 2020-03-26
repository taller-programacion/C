#include <stdio.h>
char letra; // Carácter de una posición
int main()
{
	letra='s'; // Asigna valor
	//letra='\''; // Asigna valor
	// El caracter blackslash \ es un caracter de escape
	printf("La letra es %c. Su valor ASCII es %d\n",letra,letra);
return 0;
} 
