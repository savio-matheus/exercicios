// Contagem - ex2
#include <stdio.h>

main(){
    int k, n, i, alemK = 0;
    
    do{
        scanf("%d", &n);
    }while(n < 1 || n > 1000);
    
    int vetor[n];
    
    for (i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    
    scanf("%d", &k);
    
    for (i = 0; i < n; i++){
        if (vetor[i] >= k){
            alemK++;
        }
    }
    
    printf("%d\n", alemK);
}