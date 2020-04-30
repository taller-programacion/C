#include <stdio.h>

void saludo(void) //Declarando e Implementando la función
{
 	printf("Hola Mundo\n"); /* imprime la cadena */
	return; /* sale de la función */
}
 
int main(void) /* Función principal del programa */
{
	saludo(); /* llamada a la función saludo*/
	saludo(); /* llamada a la función saludo*/
	saludo(); /* llamada a la función saludo*/
	saludo(); /* llamada a la función saludo*/
	return 0; /* sale del programa con código 0 (correcto) */
}
