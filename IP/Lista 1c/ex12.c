// Maior segmento igual de uma sequência, L1c - 12
#include <stdio.h>

main(){
int repeticoes, i, num1, anterior, seq = 0, maxSeq = 0;

scanf("%d%d", &repeticoes, &anterior);

for (i = 1; i < repeticoes; i++){
    scanf("%d", &num1);
    
    if (num1 == anterior){
        seq++;
    }
    else{
        seq = 0;
    }
    
    if (seq > maxSeq){
        maxSeq = seq;
    }
    
    anterior = num1;
}
// Cobre o primeiro elemento da sequência, pois ele não é contado no for.
maxSeq++;

printf("A maior subsequencia de elementos iguais possui %d elementos.\n", maxSeq);

}