#include <stdio.h>

int mi_arreglo[] = {1,230,17,14,-5,1000, 21};
char mi_arreglo2[6] = {'A','B','C','D'};
int *ptr;
char *ptr2;
int i;

int main(void)
{
 ptr = &mi_arreglo[0]; /* apuntamos nuestro puntero*/
 ptr2 = &mi_arreglo2[0]; /* apuntamos nuestro puntero*/
 
 printf("\n\n");
 
 for (i = 0; i < 7; i++)
 {
 printf("mi_arreglo[%d] = %d ", i, mi_arreglo[i]);
/* printf("ptr + %d = %d\n",i, *(ptr + i));*/
 printf ("ptr + %d = %d\n", i, *ptr++);
 printf("ptr apunta a: %p\n", &ptr + i); 
 }
 for (i = 0; i < 4; i++)
 {
 printf("mi_arreglo2[%d] = %d ", i, mi_arreglo2[i]); 
 printf("ptr2 + %d = %c\n",i, *(ptr2 + i)); 
 printf("ptr2 apunta a: %p\n", &ptr2 + i);
 }
 return 0;
}
