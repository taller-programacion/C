#include <stdio.h>
/*
 * Description: Recorre el abecedario
 * Authors: Taller Extracurricular Programación
*/

//Declaración de funciones
//tipoDatoRetorno identificador(valoresEntrada);

 void funcionTutorA(char num);
 void funcionTutorB(char num);

//Función principal(main)
int main(void){
	printf("\nImprimiendo abecedario\n");
		funcionTutorA('A'); //invocación de función 
	printf("\nFin Programa\n\n");
	return 0;
}

//Implementación de funciones
void funcionTutorA(char num){ //char num = 'Z';  'Y'  'X' ....'B'  'A'
	//TODO
	if (num < 'Z'){ // if ('@' < 'Z'){ TODO }   --> 65 < 90 --> true
		funcionTutorB(num); //funB('Z');  funB('Y')  funB('X')  funB('B')
	}	
	printf("%c ,", num);  // 'A' ...'B', 'C'....'Z'
}
void funcionTutorB(char num){ // char num = 'A'
  	funcionTutorA(++num); // funA('@');   funA('X')   funA('W') ... funA('A')
}