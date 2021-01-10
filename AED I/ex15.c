//15 - Troca Maior e Menor

#include <stdio.h>

typedef struct {
	int lin;
	int col;
} Par;

int main(void)
{
	Par dim;
	Par pMaior;
	Par pMenor;
	int i, j;

	scanf(" %d%d", &dim.lin, &dim.col);

	int matriz[dim.lin][dim.col];

	pMaior.lin = 0;
	pMaior.col = 0;
	pMenor.lin = 0;
	pMenor.col = 0;

	for (i = 0; i < dim.lin; i++) {
		for (j = 0; j < dim.col; j++) {
			scanf(" %d", &matriz[i][j]);

			if (matriz[i][j] > matriz[pMaior.lin][pMaior.col]) {
				pMaior.lin = i;
				pMaior.col = j;
			}

			if (matriz[i][j] < matriz[pMenor.lin][pMenor.col]) {
				pMenor.lin = i;
				pMenor.col = j;
			}
		}
	}

	i = matriz[pMaior.lin][pMaior.col];
	j = matriz[pMenor.lin][pMenor.col];
	matriz[pMenor.lin][pMenor.col] = i;
	matriz[pMaior.lin][pMaior.col] = j;

	for (i = 0; i < dim.lin; i++) {
		for (j = 0; j < dim.col; j++) {
			printf("%d", matriz[i][j]);

			if (j + 1 < dim.col)
				printf(" ");
		}
		printf("\n");
	}
}
