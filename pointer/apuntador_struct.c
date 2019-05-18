#include <stdio.h>
#include <string.h>
struct datos{
 char nombre[20]; /* nombre */
 char apellido[20]; /* apellido */
 int edad; /* edad */
 float salario; /* salario */
 };
struct datos mis_datos; /* definimos mis_datos del tipo |:%estructura datos */
void show_name (struct datos *p); /* prototipo de la función */

int main(void)
{
	struct datos *st_ptr; /* un apuntador a una estructura del tipo datos */
	st_ptr = &mis_datos; /* apuntamos el apuntador a mis_datos */
	strcpy(mis_datos.apellido,"Jensen");
	strcpy(mis_datos.nombre,"Ted");
	printf("\n%s ",mis_datos.nombre);
	printf("%s\n",mis_datos.apellido);
	mis_datos.edad = 63;
	show_name (st_ptr); /* Llamamos a la función pasándole el puntero */
	return 0;
}

void show_name(struct tag *p)
{
	printf("\n%s ", p --> nombre); /* p apunta a una estructura */
	printf("%s ", p --> apellido);
	printf("%d\n", p --> edad);
}
