// Número invertido, L1a - 11
#include <stdio.h>

main(){
int num, novoNum;
int alg1, alg2, alg3;

scanf("%d", &num);

if (num > 999 || num < 100 || num % 10 == 0 || num % 100 == 0){
    printf("NUMERO INVALIDO\n");
}

alg1 = num / 100;
alg2 = (num % 100) / 10;
alg3 = num % 10;
novoNum = (alg3 * 100) + (alg2 * 10) + (alg1);

printf("%d\n", novoNum);
}