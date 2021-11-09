#include <stdio.h>
#include <stdlib.h>

int main(void){
  int cont=1;
  /*
  for(inicio; fin; incremento/decremento){
    //TODO
  }
  */
 
  for (cont=0;cont<=100;cont++){ //cont = 4; 4<=3
      //x=cont+y;
      printf("\tValor: %d\n",cont); //Valor: 3\n
      if(cont==50){
        break;
      }
      //y++;
      /*x=y;
      y=z;*/
  }
  printf("Valor final: %d\n",cont); //Valor final : 4\n
  getchar();
  return 0;
}
