#include <stdio.h>

char strA[80] = "Cadena 1";
char strB[80];
int i;
 char *pA; /* un apuntador al tipo caracter */
 char *pB; /* otro apuntador al tipo caracter */

int main(void)
{
/* puts(strA);  muestra la cadena strA */
 pA = strA; /* apunta pA a la cadena strA */
/* puts(pA);  muestra a donde apunta pA */
 pB = strB; /* apunta pB a la cadena strB */
 putchar('\n'); /* dejamos una línea en blanco */
 i = 0;
 while(*pA != '\0') /* linea A (ver texto) */
 {
	 *pB++ = *pA++; /* linea B (ver texto) */
 	  printf("pB apunta a: %p\n", &pB + i);
 	  puts(strB); /* muestra strB en la pantalla */
	  i++;
 }
 *pB = '\0'; /* linea C (ver texto) */
 puts(strB); /* muestra strB en la pantalla */
 return 0;
}
