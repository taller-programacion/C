/*Operador de dirección: &
Para poder obtener la dirección de una variable
Para poder almacenar la direccion hará falta una variable puntero con el mismo tipo
sintáxis)
*/

/*
Operador de indirección: *
Para de acceder al dato almacenado en una dirección
Realiza la función opuesta del operador &


Tipo_dato  *nombre de apuntador;
*/
#include <stdio.h>

//Declaración variables
int num1, num2; //Entero
int *apuntador; // Apuntador de tipo entero
//tipo_dato *identificado;

char valor;  
char *apuntadorChar; //Declarando apuntadores
//TipoDato *nombreIdentificador;

int main (){
//Variables	
   num1 = 1000;
   //num2 = 500;
   valor = '@';
   //num2 = 5; //Asignando un valor
//Apuntador (variable)
//scanf("%i", &num1);

   apuntador = &num1;
   apuntadorChar = &valor;

   puts("Apuntando a un entero:");
 	printf("\tNum1 tiene el valor: %d y esta alojado en: %p\n", num1, &num1);
   //printf("\n\tNum2 tiene el valor: %d y esta alojado en: %p\n", num2, &num2);
   printf("\tEl apuntador tiene el valor: %p y esta alojado en: %p\n", apuntador, &apuntador);
 	printf("\tEl valor del entero al que apunta pointer es: %d\n\n", *apuntador);

   puts("Apuntando a un caracter:");
 	printf("\tMi char tiene el valor: %c y esta alojado en: %p\n", valor, &valor);
 	printf("\tEl apuntador tiene el valor: %p y esta alojado en: %p\n", apuntadorChar, &apuntadorChar);
 	printf("\tEl valor del entero al que apunta pointer es: %c\n", *apuntadorChar);

   return 0;
}
