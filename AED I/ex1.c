// 1 - Inverte vetor
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main (void)
{
    int *v = NULL;
    //int *w = NULL;
    int maior = INT_MIN;
    int menor = INT_MAX;
    int dim, i;
    
    scanf(" %d", &dim);
    v = malloc(sizeof (int) * dim);
    
    for (i = 0; i < dim; i++) {
        scanf(" %d", &v[i]);
        
        if (v[i] > maior)
            maior = v[i];

        if (v[i] < menor)
            menor = v[i];
    }
    
    for (i = 0; i < dim; i++) {
        printf("%d", v[i]);
        
        if (i < dim - 1)
            printf(" ");
    }
    printf("\n");
    
    for (i = dim - 1; i >= 0; i--) {
        printf("%d", v[i]);
        
        if (i > 0)
            printf(" ");
    }
    printf("\n");
    
    printf("%d\n%d\n", maior, menor);

    return 0;
}

