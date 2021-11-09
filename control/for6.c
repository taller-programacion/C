#include <stdio.h>

int main(){
   //0 1 2....9 10
   for(int x=0; x < 5; x++){   
       for(int y=0; y < 5; y++){  
            if(x>=y){
                printf("\t[0, 0]"); 
            }else{
                printf("\t[%d, %d]", x, y); 
            }
       }
       printf("\n"); 
   } 
    return 0;
}