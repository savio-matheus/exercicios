// 3 - Mediana

#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int dim, int *vetor)
{
	int i, j, temp;
	
	for (i = 0; i < dim - 1; i++) {
		for (j = i + 1; j < dim; j++) {
			if (vetor[i] > vetor[j]) {
				int temp = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = temp;
			}
		}
	}
	/*for (i = 0; i < dim; i++)
		printf("%d\n", vetor[i]);*/

}

int main(void)
{
	int dim, i;
	int *vetor = NULL;
	float mediana;
	
	scanf(" %d", &dim);
	vetor = (int *) malloc(sizeof (int) * dim);
	
	for (i = 0; i < dim; i++)
		scanf(" %d", &vetor[i]);
		
	bubble_sort(dim, vetor);
	
	if (dim % 2 == 0) {
		mediana = (float) (vetor[(dim / 2) - 1] + vetor[(dim / 2)]) / 2;
		printf("%.2f\n", mediana);
	}
	else {
		mediana = (float) vetor[(dim / 2)];
		printf("%.2f\n", mediana);
	}
	
	return 0;
}
