//78 - Separando número pares e ímpares

#include <stdio.h>
#include <stdlib.h>

int compara(const void *a, const void *b)
{
	if (*((int *) a) % 2 == 0)
		return (*((int *) a) > *((int *) b));
	else
		return (*((int *) a) < *((int *) b));
}

int main (void)
{
	int vetor_par[100];
	int vetor_impar[100];
	int total;
	int temp, k;
	int i = 0;
	int j = 0;

	scanf(" %d", &total);

	for (; total; total--) {
		scanf(" %d", &temp);
		if (temp % 2 == 0) {
			vetor_par[i] = temp;
			i++;
		}
		else {
			vetor_impar[j] = temp;
			j++;
		}
	}

	qsort(vetor_par, i, sizeof(int), compara);
	qsort(vetor_impar, j, sizeof(int), compara);

	for (k = 0; k < i && i; k++) {
		printf("%d", vetor_par[k]);
		if (k + 1 < i) printf(" ");
		else printf("\n");
	}

	for (k = 0; k < j && j; k++) {
		printf("%d", vetor_impar[k]);
		if (k + 1 < j) printf(" ");
		else printf("\n");
	}

	return 0;
}

