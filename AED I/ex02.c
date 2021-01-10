// 2 - Ordena Lista
#include <stdio.h>

int main(void)
{
    int dim;
    int i, j;
    int temp;
    
    scanf(" %d", &dim);
    int vetor[dim];
    
    for (i = 0; i < dim; i++)
        scanf(" %d", &vetor[i]);
        
    for (i = 0; i < dim - 1; i++) {
        for (j = i + 1; j < dim; j++) {
            if (vetor[i] > vetor[j]) {
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
    
    for (i = 0; i < dim; i++)
        printf("%d\n", vetor[i]);
        
    return 0;
}
