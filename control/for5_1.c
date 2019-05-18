#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int x,y,z,cont;
  x=0;
  y=1;
  for (cont=0;cont<20;cont++)
  {
      z=x+y;
      printf("%d\n",z);
      x=y;
      y=z;
  }
  getchar();
  return 0;
}
