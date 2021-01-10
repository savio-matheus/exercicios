// Ler e imprimir - ex4
#include <stdio.h>

main(){
    int n, i;
    scanf("%d", &n);
    int vetor[n];
    
    for (i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    
    for (i = 0; i < n; i++){
        printf("%d", vetor[i]);
        
        if ((i + 1) < n){
            printf(" ");
        }
    }
    
    printf("\n");
}