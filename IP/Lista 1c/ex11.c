// Maior segmento crescente de uma sequência, L1c - 11
#include <stdio.h>

main(){
int nInteiros, inteiro1, inteiro2, maxSeq = 0, seq = 0, i;

scanf("%d %d", &nInteiros, &inteiro1);

for (i = 1; i < nInteiros; i++){
    
    scanf("%d", &inteiro2);

    if (inteiro1 < inteiro2){
        seq++;
    }
    else{
        seq = 0;
    }

    if (seq > maxSeq){
        maxSeq = seq;
    }
    
    inteiro1 = inteiro2;
}

printf("O comprimento do segmento crescente maximo e: %d\n", maxSeq);

}