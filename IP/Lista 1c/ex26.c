// Número perfeito, L1c - 26
#include <stdio.h>

main(){
int num, div, soma = 1, i, j;
scanf("%d", &num);

printf("%d = 1", num);

for (div = 2; div < num; div++){
    if (num % div == 0){
        printf(" + %d", div);
        soma += div;
    }
}

if (soma == num){
    printf(" = %d (NUMERO PERFEITO)\n", soma);
}
else{
    printf(" = %d (NUMERO NAO E PERFEITO)\n", soma);
}

}