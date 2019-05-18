/* Programa de empleo de printf() y scanf() */
#include <stdio.h>
int main()
{
	int edad;
	char nombre[20];
	printf("Introduce nombre: \n");
	scanf("%s", nombre);
	printf("Introduce edad: \n");
	scanf("%d",&edad);
	printf("Tu nombre es %s y tienes %d años. \n", nombre, edad);
}
