#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main()
{ // Inicio
	int x,y,z; // A ser usadas en la condición y resultado de la expresión
	char t; // Guarda resultado de expresión
	//system("clear");
 	x=9; 
 	y=7;
 	//operador ternario
 	z=(x < y) ? x:y; // Carga menor entre x e y en z
 	printf("El menor entre %d y %d es %d\n",x,y,z); 
 	// Muestra resultado de la expresión condicional
 	t=(x % 2 == 0) ? 'p':'i'; // Carga 'p' en t, sino carga 'i'
 	printf("%d es %s\n",x,(t=='p') ? "par":"impar"); 
 	// De acuerdo a que t sea 'p o 'i', muestra "par" o "impar"
 	x=10; // Carga x para analizar si es par o impar
 	printf("%d es %s\n",x,(x % 2 == 0) ? "par":"impar"); 
 	// Si x % 2 == 0 retorna 1(verdadero) muestra "par", sino "impar"
 return 0;
} // Fin de programa









