// Média de pares e ímpares, L1c - 13
#include <stdio.h>

main(){
double mediaPar = 0, mediaImpar = 0;
int num, countP = 0, countI = 0;

while(1){
    scanf("%d", &num);
    
    if (num == 0){
        break;
    }
    
    if (num % 2 == 0){
        mediaPar += num;
        countP++;
    }
    else{
        mediaImpar += num;
        countI++;
    }
}

mediaPar /= countP;
mediaImpar /= countI;

printf("MEDIA PAR: %.2lf\n", mediaPar);
printf("MEDIA IMPAR: %.2lf\n", mediaImpar);
}