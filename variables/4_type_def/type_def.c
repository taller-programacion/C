#include <stdio.h> // Archivo de cabecera para subrutinas de e/s
#include <stdlib.h> // Archivo de cabecera para subrutinas de utilidades

// Definición de nuevos tipos de datos
typedef short int entero_corto; // Crea tipo de dato entero corto
typedef float real; // Crea tipo de dato punto flotante de simple precisión
typedef char jaimito; // Crea tipo de dato caracter
// Uso de de nuevos tipos de datos

//Declarar mis variables con el tipo de dato que definí
//short int x;
entero_corto x;
//float y;
real y;
//char jaimito;
jaimito letra;

int main(){
	x=32;
	y=22.2;
	letra='@';
	printf("Entero Corto: %d Real: %0.2f Letra: %c\n",x,y,letra);
 return 0;
} // Fin de programa
