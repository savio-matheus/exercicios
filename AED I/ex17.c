// 17 - Matriz Ordenada

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int **ptr;
	int lin;
	int col;
} Matriz;

Matriz nova_matriz(int lin, int col)
{
	int i, j;
	Matriz m;

	m.lin = lin;
	m.col = col;

	m.ptr = (int **) calloc(col, sizeof (int *));
	for (j = 0; j < col; j++) {
		m.ptr[j] = calloc(lin, sizeof (int));
	}

	return m;
}

void scanf_matriz(Matriz m)
{
	int i, j;

	for (j = 0; j < m.col; j++) {
		for (i = 0; i < m.lin; i++) {
			scanf(" %d", &m.ptr[i][j]);
		}
	}
}

Matriz deleta_matriz(Matriz m)
{
	int i, j;
	for (i = 0; i < m.lin; i++) {
		free(m.ptr[i]);
	}
	free(m.ptr);

	m.ptr = NULL;
	m.lin = 0;
	m.col = 0;
	return m;
}

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

void printf_matriz(Matriz m)
{
	int i, j;

	// Inverte i e j para facilitar a ordenação das colunas lá embaixo.
	for (j = 0; j < m.col; j++) {
		for (i = 0; i < m.lin; i++) {
			printf("%d", m.ptr[i][j]);

			if (i + 1 < m.col) {
				printf(" ");
			}
		}
		printf("\n");
	}
}

// ***********************************

int main (void)
{
	int dim;
	int i, j;
	Matriz mtr;

	scanf(" %d", &dim);

	mtr = nova_matriz(dim, dim);
	scanf_matriz(mtr);
	for (i = 0; i < mtr.col; i++) {
		bubble_sort(mtr.lin, mtr.ptr[i]);
	}
	printf_matriz(mtr);
	mtr = deleta_matriz(mtr);

	return 0;
}
