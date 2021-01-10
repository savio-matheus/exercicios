// 20 - Logotipo

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

	m.ptr = (int **) calloc(lin, sizeof (int *));
	for (i = 0; i < lin; i++) {
		m.ptr[i] = (int *) calloc(col, sizeof (int));
	}

	return m;
}

void scanf_matriz(Matriz m)
{
	int i, j;

	for (i = 0; i < m.lin; i++) {
		for (j = 0; j < m.col; j++) {
			scanf(" %d", &m.ptr[i][j]);
		}
	}
}

int eh_submatriz(Matriz sub, Matriz mtr)
{
	int i, j, k, l;
	int iguais = 0;

	for (i = 0; i < mtr.lin - sub.lin; i++) {
		for (j = 0; j < mtr.col - sub.col; j++) {
			for (k = i; k < i + sub.lin; k++) {
				for (l = j; l < j + sub.col; l++) {
					if (mtr.ptr[k][l] == sub.ptr[k - i][l - j]) {
						iguais++;
					}
					else {
						goto proximo;
					}
				}
			}
			if (iguais == sub.lin * sub.col) {
				return 1;
			}

			proximo:
			iguais = 0;
		}
	}
	return 0;
}

int main (void)
{
	Matriz logotipo;
	Matriz imagem;
	int lado;

	scanf(" %d", &lado);
	logotipo = nova_matriz(lado, lado);
	scanf_matriz(logotipo);

	scanf(" %d", &lado);
	imagem = nova_matriz(lado, lado);
	scanf_matriz(imagem);

	if (eh_submatriz(logotipo, imagem)) {
		printf("sim\n");
	}
	else {
		printf("nao\n");
	}

	return 0;
}

