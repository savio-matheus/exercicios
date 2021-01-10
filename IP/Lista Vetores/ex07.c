// Acumulado de elementos - ex7

#include <stdio.h>

void vetor(int n){
    int vetor[n], i, j, teste, maior, menorQueI = 0;
    
    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    
    maior = vetor[0];
    
    for(i = 0; i < n; i++){
        teste = vetor[i];
        if (teste > maior) maior = teste;
    }
    
    // Diz quantos elementos são menores que i,
    // sendo i um número no intervalo [0, maior].
    for(i = 0; i <= maior; i++){
        for(j = 0; j < n; j++){
            if(vetor[j] <= i){
            menorQueI++;
            }
        }
    // "(i) elementos < que i"
        printf("(%d) %d\n", i, menorQueI);
        menorQueI = 0; // Zera o contador para o próximo teste
    }
}

main(){
    int n;
    while(1){
        scanf("%d", &n);
        if (n == 0) break;
        
        vetor(n);
    }
}