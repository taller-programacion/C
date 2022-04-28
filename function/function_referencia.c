/*El paso por referencia se hace utilizando apuntadores. Se envía la dirección de memoria de la variable, por lo tanto los cambios que haga la función si afectan el valor de la variable*/
#include <stdio.h>

int var1 = 57; /* definimos numero con valor de 57*/
//int var2 = 100;
//void sumar_referencia(57){
// 57 += 1;	--> 58
//  printf(58);
//}
// 57
void sumar_referencia(int *numero){
	
	printf("\nDir de var1: %p\n", &var1); /*0x560bafb28030*/
	printf("Dir de numero: %p\n", &numero); /*0x560bafb28030*/

//	int *numero = "0x560bafb28030";
	*numero += 1; /* 57 le sumamos 1 al numero */
//  num = 57 + 1;
	printf("\n2.- Valor de numero dentro sumar_referencia() es: %d\n", *numero);
	return;
}

int main(void){


	printf("1.- Valor original de numero es: %d", var1);
//	sumar_referencia(0x55667f398030);
	sumar_referencia(&var1); /*  enviamos numero a la función */
/*  sumar_referencia(0x560bafb28030); */
	printf("\n3.- Valor de numero dentro de main() es: %d\n", var1);
	/* podemos notar que el valor de numero se modifica
	 * y que ahora dentro de main() también se ha modificado
	 * aunque la función no haya retornado ningún valor.
	 */
	return 0;
}