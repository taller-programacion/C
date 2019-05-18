#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int fil, col, num;
  num=0;
  for (fil=1;fil<=10;fil++){
  	for (col=1;col<=5;col++){
		printf("%d\t",num);
		num++;
	}
	printf("\n");
  }
  getchar();
  return 0;
}
