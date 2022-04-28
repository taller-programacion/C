#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int x,y,z;
  int *pointer;
  x=0;
  y=1;
  pointer = &z;
  for (int cont=0;cont<3;cont++){
      z=x+y; //z = 2 + 3;
      printf("%d\n",z); //5
      printf("pointer tiene el valor: %d y esta alojado en: %p\n", z, &z);
      printf("pointer tiene el valor: %p y esta alojado en: %p\n", pointer, &pointer);
      printf("El valor del entero al que apunta pointer es: %d\n", *pointer);
      x=y;  //x = 2
      y=z;  //y = 5
  }
  getchar();
  return 0;
}
/*Podemos “desreferenciar” un apuntador, es decir, hacer referencia al valor contenido en la dirección a la que apunta, usando el operador unitario ‘*’, como en *pointer*/
