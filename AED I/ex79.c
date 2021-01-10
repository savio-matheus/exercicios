// 79 - Altura

#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int *v, int n)
{
	int i, j, temp;
	for (i = n - 1; i > 0; i--) {
		int fez_troca = 0;
		for (j = 0; j < i; j++) {
			if (v[j] > v[j + 1]) {
				temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
				fez_troca = 1;
			}
		}
		if (fez_troca == 0)
			return;
	}
}

int main (void)
{
	int *vet;
	int testes, pessoas, i;

	scanf(" %d", &testes);

	for (; testes; testes--) {
		scanf(" %d", &pessoas);
		vet = malloc(sizeof(int) * pessoas);
		
		for (i = 0; i < pessoas; i++) {
			scanf(" %d", &vet[i]);
		}

		// A preguiça
		bubble_sort(vet, pessoas);

		for (i = 0; i < pessoas; i++) {
			printf("%d", vet[i]);
			if (i + 1 < pessoas)
				printf(" ");
			else
				printf("\n");
		}

		free(vet);
	}

	return 0;
}

