// Maior elemento - ex5
#include <stdio.h>

// Em forma de função para limitar o escopo das variáveis.
void maior(int n){
    int vetor[n], i, maior = 0, posicao;
    
    for (i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    
    for (i = 0; i < n; i++){
        if (vetor[i] > maior){
            maior = vetor[i];
            posicao = i;
        }
    }
    printf("%d %d\n", posicao, maior);
}

main(){
    int n;
    scanf("%d", &n);
    
    do{
        maior(n);
        scanf("%d", &n);
    }while(n > 0);
}