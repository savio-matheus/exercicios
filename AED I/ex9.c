//9 - Counting Sort

#include <stdio.h>
#include <stdlib.h>

void counting_sort(int *vet, int dim)
{
	int i;
	int *vOrd = NULL;
	int *vCount = NULL;
	int m = vet[0];

	for (i = 0; i < dim; i++) {
		if (vet[i] > m) m = vet[i];
	}

	vCount = (int *) calloc(m + 1, sizeof (int));
	vOrd = (int *) calloc(dim, sizeof (int));

	for (i = 0; i < dim; i++) {
		vCount[vet[i]]++;
	}

	for (i = 1; i <= m; i++) {
		vCount[i] += vCount[i - 1];
	}

	for (i = 0; i < dim; i++) {
		vOrd[vCount[vet[i]] - 1] = vet[i];
		vCount[vet[i]]--;
	}

	for (i = 0; i < dim; i++) {
		vet[i] = vOrd[i];
	}
	free(vOrd);
	free(vCount);
}

int main (void)
{
	int *vetor = NULL;
	int dim = 0;
	int i;

	while (1) {
		scanf(" %d", &dim);
		if (dim <= 0) break;
		vetor = (int *) calloc(dim, sizeof (int));

		for (i = 0; i < dim; i++) {
			scanf(" %d", &vetor[i]);
		}

		counting_sort(vetor, dim);

		for (i = 0; i < dim; i++){
			printf("%d", vetor[i]);
			if (i + 1 < dim) printf(" ");
		}
		printf("\n");
		free(vetor);
		vetor = NULL;
		dim = 0;
	}

	return 0;
}

