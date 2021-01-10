// Imprimir um valor em ordem inversa - ex3
#include <stdio.h>

main(){
    int n, i;
    scanf("%d", &n);
    int vetor[n];
    
    for (i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    
    for (i = (n - 1); i >= 0; i--){
        printf("%d", vetor[i]);
        if ((i - 1) >= 0){
            printf(" ");
        }
    }
    printf("\n");
}