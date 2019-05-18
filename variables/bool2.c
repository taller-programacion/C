#include<stdio.h>
#include<stdbool.h>// Booleanos
 
bool esAdolescente(int edad);
 
int main(){
    bool Adolescente = esAdolescente(23);
    if(Adolescente){
        printf("Nini");
    }else{
        printf("Consigue trabajo");
    }
}
bool esAdolescente(int edad){
    if(edad <= 18) return true;
    else return false;
}
