// Soma de progressão aritmética, L1c - 5
#include <stdio.h>

main(){
int inicial, razao, nTermos, soma = 0, termo, i;

scanf("%d%d%d", &inicial, &razao, &nTermos);
soma = inicial;

for (i = 1; i < nTermos; i++){
    soma += inicial + (i * razao);
}

printf("%d\n", soma);

}
