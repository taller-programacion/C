#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
//#include <curses.h>

int main(void)
{
  int x,y,z,cont;

  x=0;
  y=1;
 
 
  for (cont=1;cont<=5;cont++)
  {
      
      x=cont+y;
      printf("%d\n",x);
      y++;
      /*x=y;
      y=z;*/
  }
  printf("Valor final: %d\n",cont);
  getchar();
  return 0;
}
