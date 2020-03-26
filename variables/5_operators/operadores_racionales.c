#include <stdio.h> // Archivo de cabecera para subrutinas de e/s
#include <stdlib.h> // Archivo de cabecera para subrutinas de utilidades
int main()
{ // Inicio
 system("clear"); // Limpia pantalla
 printf("2 == 2 devuelve %d que implica verdadero\n",2==2);
 printf("'A' == 'a' devuelve %d que implica falso\n",'A'=='a');
 printf("2 != 2 devuelve %d que implica falso\n",2!=2);
 printf("'A' != 'a' devuelve %d que implica verdadero\n",'A'!='a');
 printf("'a' > 'b' devuelve %d que implica verdadero\n",'a'>'Z');
 printf("'b' > 'a' devuelve %d que implica falso\n",'Z'>'a');
 printf("'1' >= '1' devuelve %d que implica verdadero\n",'1'>='1');
 printf(" 4 >= 5 devuelve %d que implica falso\n",4>=5);
 printf("'B' < 'A' devuelve %d que implica verdadero\n",'a'>'Z');
 printf("'A' < 'B' devuelve %d que implica falso\n",'Z'>'a');
 printf("6 <= 6 devuelve %d que implica verdadero\n",6<=6);
 printf("8 <= 7 devuelve %d que implica falso\n",8<=7);
 return 0;
} // Fin de programa
