// Achei - ex1
#include <stdio.h>

main(){
    int n, m, i, j, num, achou = 0;
    scanf("%d", &n);
    int vetor[n];
    
    for (i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    
    scanf("%d", &m);
    
    for (i = 0; i < m; i++){
        scanf("%d", &num);
        for (j = 0; j < n; j++){
            if (vetor[j] == num){
                achou = 1;
                break;
            }
        }
        if (achou == 1){
            printf("ACHEI\n");
        }
        else{
            printf("NAO ACHEI\n");
        }
        achou = 0;
    }
}