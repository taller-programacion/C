#include <stdio.h>
#include <stdbool.h>// Boolean

bool COvid = true;
int cuarentena = 20;

void come(); //Declaración de función
void duerme();
void codifica();
void quedateEnCasa(int x);

int main(){
	while(COvid != false){
		for(int x=1; x<=cuarentena; x++){
			printf("-----------------");
			printf("\t\nDía %d\n", x);
			quedateEnCasa(x);
		}
		COvid = false;
	}
    	return 0;
}

//Implementación de las funciones
void come(){ 
	printf("Come sanamente\n");
	return;
}
void duerme(){ 
	printf("Duerme 8 horas\n");
	return;
}
void codifica(){ //Implementación de función
	printf("Programar sin parar\n");
	return;
}
void quedateEnCasa(int dia){ //Implementación de función
    if(dia <= 5){
	printf("Fase 1\n");
    }
    else if(dia >5 && dia <=15){
	printf("Fase 2\n");
    }
    else{
	printf("Fase 3\n");
    }
    come();
    duerme();
    codifica();
    return;
}



