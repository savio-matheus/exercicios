// Soma elementos do vetor - ex6
#include <stdio.h>

main(){
    int n, soma = 0, i;
    scanf("%d", &n);
    int vetor[n];
    
    for (i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    
    printf("%d\n", soma);
}