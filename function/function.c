#include <stdio.h>

//tipodato identificador(parametros){

//}
void saludo(void){ //Declarando e Implementando la función
 	printf("\tHola Mundo\n"); /* imprime la cadena */
	return; /* sale de la función */
}

void despedida(){ //Declarando e Implementando la función
 	printf("\tAdios\n"); /* imprime la cadena */
	return; /* sale de la función */
}

int main(){ /* Función principal del programa */
	printf("Printf antes de la función\n");
	for(int x=0; x <10; x++){
		saludo(); /* llamada a la función saludo*/
		despedida();
	}
	saludo();
	printf("Printf después de la función\n");
	despedida();
	return 0; /* sale del programa con código 0 (correcto) */
}