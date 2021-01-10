// Sequência ordenada, L1c - 27
#include <stdio.h>

main(){
double num, antecessor;
int repete, ordenada, i;

scanf("%d", &repete);

while(repete){
    ordenada = 1;
    antecessor = 0;
    
    for (i = 0; i < repete; i++){
        scanf("%lf", &num);
        
        if (num < antecessor){
            ordenada = 0;
        }
        else{
            antecessor = num;
        }
    }
    
    if (ordenada == 1){
        printf("ORDENADA\n");
    }
    else{
        printf("DESORDENADA\n");
    }
    scanf("%d", &repete);
}

}