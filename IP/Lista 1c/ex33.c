// Decomposição em fatores primos, L1c - 33
#include <stdio.h>

main(){
    int n, fator, div = 2;

    scanf("%d", &n);
    
    if (n <= 1){
        printf("Fatoracao nao e possivel para o numero %d!\n", n);
        return 0;
    }
    
    printf("%d = ", n);
    
    while (n > 1){
        if (n % div == 0){
            n /= div;
            printf("%d", div);
            if(n > 1){
                printf(" x ");
            }
        }
        else{
            div++;
        }
    }
    
    printf("\n");
}