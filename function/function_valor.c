/*El paso por valor envía una copia de los parámetros a la función por lo tanto los cambios que se hagan en ella no son tomados en cuenta dentro de la función main()*/
#include <stdio.h>

//Declarando e Implementando Función

int numero = 57; // Asignación de valor

void sumar_valor(int num){ //57 --> num  --> int num = 57;
	num++; /* 58    num = num +1; -> num = 57 + 1 -> num= 58; */
	printf("2.- Valor de numero dentro sumar_valor() es: %d\n", num);  //58
	return;
}

int main(){
	printf("1.- El valor original de numero: %d\n", numero);
	sumar_valor(numero); /* enviamos numero a la función */
	/*sumar_valor(57);*/
	printf("3.- Valor de numero dentro de main() es: %d\n", numero); // 57
	/* podemos notar que el valor de numero se modifica
	 * sólo dentro de la función sumar_valor pero en la principal
	 */
	return 0;
}

