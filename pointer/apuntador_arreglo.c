#include <stdio.h>

//mi_arreglo[0]=1;
//mi_arreglo[1]=230;
//mi_arreglo[2]=17;
//mi_arreglo[3]=14;
//mi_arreglo[4]=-5;
//mi_arreglo[5]=1000;
//mi_arreglo[6]=21;
//int mi_arreglo[] = {1,230,17,14,-5,1000, 21}; //entero
char mi_arreglo2[6] = {'A','B','C','D'}; //char
//int *ptr;
char *ptr2;
//int i;

int main(void){
// ptr = &mi_arreglo[0]; /* apuntamos nuestro puntero*/
 ptr2 = &mi_arreglo2[0]; /* apuntamos nuestro puntero*/
 
 printf("\n\n");
 
// for (int i = 0; i < 10; i++){  //0-6
// printf("mi_arreglo[%d] = %d ", i, mi_arreglo[i]);
/* printf("ptr + %d = %d\n",i, *(ptr + i));*/
 //printf ("\n\tptr + %d = %d\n", i, *ptr++);
// printf("\tptr apunta a: %p\n", &ptr + i); 
// }

 for (int i = 0; i < 5; i++){
 printf("Valor del arreglo: mi_arreglo2[%d] = %c ", i, mi_arreglo2[i]); 
 printf("\n\tValor de arreglo2 ocupando apuntador: ptr2 + %d = %c",i, *(ptr2 + i)); 
                                //  &ptr2 = 0x55c28a4cd048
                                //  *ptr2 = A
 printf("\n\tDirección de memoria almacenada en apuntador:ptr2 apunta a: %p\n\n", &ptr2 + i);
                                // A B C D
                                // A  --> &ptr2 + 0 = 0x55c28a4cd048
                                // B  --> &ptr2 + 1 = 0x55c28a4cd050
                                // C  --> &ptr2 + 2 = 0x55c28a4cd058
 }
 return 0;
}
