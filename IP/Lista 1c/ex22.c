// Hipotenusas inteiras, L1c - 22
#include <stdio.h>

main(){
int n, j, i, hipotenusa;
int c1 = 1, c2 = 2;

scanf("%d", &n);

// Gera uma hipotenusa j, tal que j <= n;
for (j = 1; j <= n; j++){
    // Gera um cateto c1, tal que c1 < j;
    for (c1 = 1; c1 < j; c1++){
        // Gera um cateto c2, tal que c2 < j,
        // e testa todos os valores gerados.
        for (c2 = 1; c2 < j; c2++){
            // Impede repetições e garante que o primeiro cateto seja
            // menor que o segundo.
            if (c1 > c2){
                continue;
            }
            
            hipotenusa = (c1 * c1) + (c2 * c2);
            if (hipotenusa == (j * j)){
                printf("hipotenusa = %d, catetos %d e %d\n", j, c1, c2);
            }
        }
    }
}

}