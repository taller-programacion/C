#include <stdio.h>  //Librerías

int main(){

   int a = 0;  //Declaración de variables
   do{  //Inicia Do-while
       printf("Iteración número %d\n", a);   //a = 1 
       a++;           //a = 2
   }while(a < 1);  //2 < 1 -> False    
   printf("Fin de Programa, valor actual de a es %d\n", a);  // 2
   return 0;
}
