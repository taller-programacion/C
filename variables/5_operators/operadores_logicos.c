#include <stdio.h> 
#include <stdlib.h>

int main(){ // Inicio
 //system("clear"); // Limpia pantalla
/* = asignación
 * == igualdad
 * != diferente
 * ! NOT   
 * && AND (y)  
 * ||(pipe) OR (o) 
*/ 
/*      
*/

int a = 10;
int b = 10;
int c =100;
          //   (1    &&    1)
//printf("%i", !(((a==b) < c)  && (b<c)));

int edad = 17;
if(edad < 40 && edad > 30){
    printf("Eres millenials");

}else{
   printf("Eres baby boomer");
}





//printf("!(((10 <= 1) AND (2==2)) OR (4==3)) ); devuelve %d \n", (!(((10 <= 1) && (2==2)) || (4==3))) );
/*
 printf("!(1 != 1) devuelve %d que implica verdadero\n",!(1 != 1) );
 printf("!(1 == 1) devuelve %d que implica falso\n",!(1 == 1));
 printf("1 == 1 && 2 == 2 devuelve %d que implica verdadero\n",1 == 1 && 2 == 2);
 printf("1 == 1 && 2 == 3 devuelve %d que implica falso\n",1 == 1 && 2 == 3);
 printf("1 == 1 || 2 == 3 devuelve %d que implica verdadero\n",1 == 1 || 2 == 3);
 printf("1 != 1 || 2 == 3 devuelve %d que implica falso\n",1 != 1 || 2 == 3);
 printf("1 >= 1 || 2 <= 3 devuelve %d que implica verdadero\n",1 >= 1 || 2 <= 3);
 printf("1 >= 1 || 2 >= 3 devuelve %d que implica verdadero\n",1 >= 1 || 2 >= 3);
 printf("'A' == 'A' devuelve %d que implica verdadero\n",('A' == 'A'));
 printf("'A' > '@' devuelve %d que implica falso\n",('A' > '@'));
 printf("'A' < 'B' devuelve %d que implica verdadero\n",('A' < 'B'));
 printf("'a' > 'A' devuelve %d que implica falso\n",('a' > 'A'));
 printf("'a' < 'A' devuelve %d que implica verdadero\n",('a' < 'A'));
*/ return 0;
} // Fin de programa
