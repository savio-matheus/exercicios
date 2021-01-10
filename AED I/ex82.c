// 82 - Ordenação

#include <stdio.h>
#include <stdlib.h>

int compara(const void *a, const void *b)
{
	return ( *(int*)a - *(int*)b );
}

int main (void)
{
	int *vetor;
	int dim, l, k;
	int i;
	
	scanf(" %d", &dim);
	vetor = malloc(sizeof(*vetor) * dim);
	for (i = 0; i < dim; i++) {
		scanf(" %d", &vetor[i]);
	}
	
	qsort(vetor, dim, sizeof(*vetor), compara);
	scanf(" %d%d", &l, &k);
	printf("%d\n", vetor[l - 1] + vetor[k - 1]);
	/*
	for (i = 0; i < dim; i++) {
		printf("%d\n", vetor[i]);
	}
	*/
	return 0;
}

