#include <stdio.h>
//Comparar edades
int main(){

	int edad=0;
	
	printf("Introduce tu edad [0-150]: ");
	scanf("%d",&edad); // 30

   //operadores lógicos
   // AND -> &&
   // OR -> ||
   // NOT -> !
	if (edad > 0 && edad <= 12){ // 1 - 12
		 printf("Eres generación alpha y tienes %d",edad);
		 if(edad < 9){
			 printf("\nEres un infante");
		 }else{
			 printf("\nEres aborrecente");
		 }
	}else if (edad > 12 && edad <= 25){ // else if (30 < 25) -> false
		 printf("Eres generación y, y tienes %d anios",edad);
	// 35....32605
	}else if (edad > 25 && edad <= 45){ // else if (30 < 25) -> false
		 printf("Eres generación x, y tienes %d anios",edad);
	// 35....32605
	}else if (edad > 45 && edad < 150){ // else if (30 < 25) -> false
		 printf("Eres generación BB, y tienes %d anios",edad);
	// 35....32605
	}
	else{
		 printf("Introduce una edad válida [0-150]");
	}
	printf("\nFin programa");
  return 0;
}