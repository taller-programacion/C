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
int var;

//TipoDato *nombreIdentificador;
int *apuntador;

int main (){
//Variables	
   var = 1000;
//Apuntador (variable)
   apuntador = &var;

 	printf("var tiene el valor: %d y esta alojado en: %p\n", var, &var);
 	printf("El apuntador tiene el valor: %p y esta alojado en: %p\n", apuntador, &apuntador);
 	printf("El valor del entero al que apunta pointer es: %d\n", *apuntador);
   return 0;
}
