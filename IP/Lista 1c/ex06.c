// Somatório simples, L1c - 6
#include <stdio.h>

main(){
    double total = 1, i;
    int nSomas;
    
    scanf("%d", &nSomas);
    
    if (nSomas <= 1) {
        printf("Numero invalido!\n");
        return;
    }
    
    for (i = 2; i <= nSomas; i++){
        total += (1 / i);
    }
    
    printf("%.6lf", total);
}