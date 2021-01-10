// 18 - Potência de Matrizes

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	float **ptr;
	int lin;
	int col;
} Matriz;

Matriz nova_matriz(int lin, int col)
{
	int i, j;
	Matriz m;

	m.lin = lin;
	m.col = col;

	m.ptr = (float **) calloc(lin, sizeof (float *));
	for (i = 0; i < lin; i++) {
		m.ptr[i] = (float *) calloc(col, sizeof (float));
	}

	return m;
}

void scanf_matriz(Matriz m)
{
	int i, j;

	for (i = 0; i < m.lin; i++) {
		for (j = 0; j < m.col; j++) {
			scanf(" %f", &m.ptr[i][j]);
		}
	}
}

void printf_matriz(Matriz m)
{
	int i, j;

	for (i = 0; i < m.lin; i++) {
		for (j = 0; j < m.col; j++) {
			printf("%.3f", m.ptr[i][j]);

			if (j + 1 < m.col) {
				printf(" ");
			}
		}
		printf("\n");
	}
}

Matriz mult_matrizes_quadradas(Matriz m, Matriz m2)
{
	int i, j, k;
	int lin;
	int col;
	Matriz r;

	lin = m.lin;
	col = m.col;
	r = nova_matriz(lin, col);

	for(i = 0; i < lin; i++) {
		for(j = 0; j < col; j++) {
			for(k = 0; k < lin; k++) {
				r.ptr[i][j] += m.ptr[i][k] * m2.ptr[k][j];
			}
		}
	}
	return r;
}

int main (void)
{
	Matriz mtr;
	Matriz result;
	int dim;
	int pow;
	int i;

	scanf(" %d", &dim);
	scanf(" %d", &pow);
	mtr = nova_matriz(dim, dim);
	scanf_matriz(mtr);
	result = nova_matriz(dim, dim);

	//mult_matrizes_quadradas(mtr, mtr, result);
	//printf_matriz(result);
	
	if (pow == 1) {
		printf_matriz(mtr);
		exit(0);
	}
	else {
		result = mult_matrizes_quadradas(mtr, mtr);
	}

	for (i = 3; i <= pow; i++) {
		result = mult_matrizes_quadradas(mtr, result);
	}

	printf_matriz(result);

	exit(0);
}

