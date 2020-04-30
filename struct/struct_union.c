#include <stdio.h>
#include <string.h>

/*Creamos una union*/
union mensajesUnion 
{
	char bienvenida[25];
	char nombre[25];
} saludoUnion;

/*Creamos una estructura*/
struct mensajesStrc
{
	char bienvenida[25];
	char nombre[25];
}saludoStruct;


int main(){

	/*/////////////////UNION////////////////////////*/
	/* Las uniones usan el mismo espacio de memoria para todos los elementos 
	 * de la union, toma el tamaño del elemento de mayor tamaño, en este caso 25 bytes. 
	 * Los elementos dentro de la union comparten esos 25 bytes.
	 */
	/*Copiamos cadenas*/
	strcpy(saludoUnion.bienvenida, "Hola");
	strcpy(saludoUnion.nombre, "Juan");
	
	printf("\nUnion: ");
	
	/*Imprimimos mensajes de union*/
	printf("\n1.- %s", saludoUnion.bienvenida);
	printf("\n2.- %s", saludoUnion.nombre);
	
	/*/////////////////STRUCT////////////////////////*/
	/* En la estructura se reservan 75 bytes de memoria en total,
	 * en este caso cada uno es independiente en memoria,
	 * se puede inicializar cada uno o usar como un campo independiente.
	 */

	/*Copiamos cadenas*/
	strcpy(saludoStruct.bienvenida, "Hi");
	strcpy(saludoStruct.nombre, "Jhon\n");
	
	printf("\nStruct: ");
	
	/*Imprimimos mensajes de union*/
	printf("\n1.- %s", saludoStruct.bienvenida);
	printf("\n2.- %s", saludoStruct.nombre);
	return 0;
}
