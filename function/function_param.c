#include <stdio.h>

int resultadoResta = 0; //Variable Global

int sumar(int n1, int n2){
	//int resultado = n1 + n2;
	return n1 + n2; // return 20 + 230; --> return 250;
}

int restar(int numero1, int numero2){
	resultadoResta = numero1 - numero2;
	printf("\nResultado RESTA desde dentro de la función %d", resultadoResta);
	return resultadoResta;
}

int main(void){

	int suma = sumar(20, 230); /* Se ejecuta correctamente*/
	/*printf("La suma de %d + %d es: %d\n ",n1, n2, suma);*/
	printf("La suma es: %d\n ", suma);
	int resta = restar(100, 50); // 50
	printf("\nResultado RESTA desde fuera de la función: %d\n ", resta);
	printf("\nVariable resutadoResta: %d\n ", resultadoResta);
	//int resta = restar(1150, 230);
    /*printf("La resta de %d - %d es: %d ", numero2, numero1, suma);*/
	//printf("La resta es: %d\n ", resta);
	int resultadoFinal =  suma - resta;
	printf("\nBalance final suma - resta = %d", resultadoFinal);
	return 0;
}
