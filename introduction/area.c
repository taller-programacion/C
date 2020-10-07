#include<stdio.h> //Librería de entrada y salida
#include<math.h> //Librería de matemática
#define PI 3.1416 //Definiendo una constante

int main(){ //Se indica el int para que espere un entero
	float area, radio; //Usando la palabra reservada de un flotante con las variables
	radio = 5; //Se indica el valor de radio
	area = PI * pow(5,2);
	printf("Area\n");
	printf("%s%f\n\n", "Area de Circulo con radio 5:", area);
	return 0;
}
