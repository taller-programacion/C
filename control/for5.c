#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int x,y,z,cont,stop;

  x=0;
  y=1;
 
  printf("Cuantos números deseas: ");
  scanf("%d", &stop);

  printf("1\n");
  for (cont=0;cont<stop;cont++)
  {
      z=x+y;
      printf("%d\n",z);
      x=y;
      y=z;
  }
 
  getchar();
  return 0;
}
