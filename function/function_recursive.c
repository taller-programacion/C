#include <stdio.h>

/*valor_retorno nombreFunción (parámetros de entrada){
  //TODO
}*/

/*Pendientes:
  1.- Utilizar un tipo de dato más grande
  2.- Validar entrada a solo enteros positivos
*/

//5 * 4  * 3 * 2 * 1 = 5!

long factorial(int n){  //int n = 0;

    long res;

	if (n == 0){ /* caso base */  // 0 == 0 -> false
		return 1;
	}else{
	    res = n * factorial (n - 1);
	    printf("\n\tFactorial de %i = %li",n, res);
		return res; /* llamada a esta misma función */
		//120
	}
}

int main(void){
	factorial(3); // = 5
	return 0;
}

