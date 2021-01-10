// 5 - Contagem de Elementos Únicos

#include <stdio.h>
#include <stdlib.h>

int compara(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main (void)
{
    int n, i, j, k, l, unicos;
    int *vetor = NULL;
    
    scanf(" %d", &n);
    vetor = malloc(sizeof (int) * n);
    for (i = 0; i < n; i++) {
        scanf(" %d", &vetor[i]);
    }
    
    if (n == 1) {
        printf("1\n");
        exit(0);
    }
    else if (n == 2) {
        printf("%d\n", (vetor[0] != vetor[1]) * 2);
        exit(0);
    }
    
    qsort(&vetor[0], n, sizeof (int), compara);
    
    //for (i = 0; i < n; i++) printf("%d", vetor[i]);
    
    for (i = 1, unicos = 0; i < n - 1; i++) {
        j = vetor[i - 1];
        k = vetor[i];
        l = vetor[i + 1];
        if (k != j && k != l) {
            unicos++;
        }
    }
    
    if (vetor[n - 1] != vetor[n - 2])
        unicos++;
    if (vetor[0] != vetor[1])
        unicos++;
    
    printf("%d\n", unicos);
    free(vetor);

    return 0;
}

