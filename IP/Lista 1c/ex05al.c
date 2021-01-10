// Soma de progressão aritmética, L1c - 5
#include <stdio.h>

main(){
int inicial, razao, nTermos, soma, ultimo;

scanf("%d%d%d", &inicial, &razao, &nTermos);

ultimo = ((nTermos - 1) * razao) + inicial;
soma = ((inicial + ultimo) * nTermos) / 2; // Fórmula da soma da PA

printf("%d\n", soma);

}
