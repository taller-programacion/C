#include<stdio.h>
#define PI 3.141516

int main(){ //Funcion principal
      //Variables
      //tipoDato identificador;

	float area;    //3.14, 0.10, 0.0000001 10.0
	float radio; //Declaracion variables
	//float PI = 3.1416;
	
	radio = 5; //Asignacion de valores
	area = PI * (radio * radio);  //Operacion
      //area = 3.1416 * (5 * 5);	
	
	printf("Area\n"); //Impresion
	printf("%s%f\n\n", "Area de Circulo con radio 5:", area);  //Impresion
	return 0;
}
