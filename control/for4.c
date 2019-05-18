#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
//#include <curses.h>

int main(void)
{
  int x,y,z,cont;
  z=1;
  for (x=0;x<=5;x++){
  	for (y=0;y<=5;y++){
     		 printf("[%d]",z);
		 z++;
  	}
     	printf("\n");
  }
  getchar();
  return 0;
}
