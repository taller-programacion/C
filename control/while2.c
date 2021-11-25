#include <stdio.h> //Librerías

int main(){ //Función principal main

   int a = 1; //Declaración de variables
// while(condicion){  //TODO  }
   while(a < 1){  // 1 < 1 -> False
       printf("Iteración número %d\n", a); 
       a++;              
   }    
   printf("Fin de Programa, valor actual de a es %d\n", a); // 1
   return 0;
}