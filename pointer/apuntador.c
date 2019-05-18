/*Operador de dirección: &
Para poder obtener la dirección de una variable
Para poder almacenar la direccion hará falta una variable puntero con el mismo tipo
sintáxis)
*/

/*
Operador de indirección: *
Para de acceder al dato almacenado en una dirección
Realiza la función opuesta del operador &
*/

#include <stdio.h>
int j, k;
int *pointer;

int main (void){
   j = 10;
   k = 200;
   pointer = &k;

	printf("\n");
 	printf("j tiene el valor: %d y esta alojado en: %p\n", j, &j);
 	/*void apuntador genérico*/
 	printf("k tiene el valor: %d y esta alojado en: %p\n", k, (void *)&k);
 	/*printf("k tiene el valor: %d y esta alojado en: %p\n", k, &k);*/
 	printf("pointer tiene el valor: %p y esta alojado en: %p\n", pointer, &pointer);
 	printf("El valor del entero al que apunta pointer es: %d\n", *pointer);
   return 0;
}
