// 72 - Policiais versus Ladrões (1)

#include <stdio.h>
#include <stdlib.h>

struct matriz {
	char **ptr;
	int lado;
	int k;
};

struct matriz *aloca_matriz(int lado, int k)
{
	struct matriz *m = malloc(sizeof(*m));
	int i;

	m->ptr = realloc(m->ptr, sizeof(char *) * lado);

	for (i = 0; i < lado; i++) {
		m->ptr[i] = realloc(m->ptr[i], sizeof(char) * lado);
	}

	m->lado = lado;
	m->k = k;

	return m;
}

void preenche_matriz(struct matriz *m)
{
	int i, j;

	for (i = 0; i < m->lado; i++) {
		for (j = 0; j < m->lado; j++) {
			scanf(" %c", &m->ptr[i][j]);
		}
	}
}

int ladroes_presos(struct matriz *m)
{
	int i, j, l;
	int ladroes = 0;

	// Método cavalo (feio demais)
	for (i = 0; i < m->lado; i++) {
		for (j = 0; j < m->lado; j++) {
			if (m->ptr[i][j] == 'P') {
				for (l = j; l - j <= m->k && l < m->lado; l++) {
					if (m->ptr[i][l] == 'L') {
						ladroes++;
						// Xadrez
						m->ptr[i][l] = 'X';
						// Aposentou
						m->ptr[i][j] = 'A';
						goto prox;
					}
				}

				for (l = j; j - l <= m->k && l >= 0; l--) {
					if (m->ptr[i][l] == 'L') {
						ladroes++;
						// Xadrez
						m->ptr[i][l] = 'X';
						// Aposentou
						m->ptr[i][j] = 'A';
						goto prox;
					}
				}

				prox:
				continue;
			}
		}
	}

	return ladroes;
}

int main (void)
{
	struct matriz *matriz;
	int casos;

	scanf(" %d", &casos);

	for (; casos > 0; casos--) {
		int lado, k;
		
		scanf(" %d", &lado);
		scanf(" %d", &k);
		matriz = aloca_matriz(lado, k);
		preenche_matriz(matriz);
		printf("%d\n", ladroes_presos(matriz));
	}

	return 0;
}

