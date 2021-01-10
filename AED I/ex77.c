//77 - Organizador de vagões

#include <stdio.h>
#include <stdlib.h>

int trocas_g = 0;

/* Ordenação bolha (genérica) */
static void *acessa(void *v, int i, int tam)
{
	char *t = (char *) v;
	t += tam * i;
	return (void *) t;
}

static void troca(void *a, void *b, int tam)
{
	char *v1 = (char *) a;
	char *v2 = (char *) b;
	int i;
	for (i = 0; i < tam; i++) {
		char temp = v1[i];
		v1[i] = v2[i];
		v2[i] = temp;
	}
	trocas_g++;
}

void bolha_gen(int n, void *v, int tam, int (*cmp)(void *, void *))
{
	int i, j;
	for (i = n - 1; i > 0; i--) {
		int fez_troca = 0;
		for (j = 0; j < i; j++) {
			void *p1 = acessa(v, j, tam);
			void *p2 = acessa(v, j + 1, tam);
			if (cmp(p1, p2)) {
				troca(p1, p2, tam);
				fez_troca = 1;
			}
		}
		if (fez_troca == 0)
			return;
	}
}

int compara(void *a, void *b)
{
	return (*((int *) a) > *((int *) b));
}

int main (void)
{
	int testes;
	int *vagoes;

	scanf(" %d", &testes);

	for (; testes; testes--) {
		int tamanho, i;
		scanf(" %d", &tamanho);
		vagoes = malloc(sizeof(int) * tamanho);

		for (i = 0; i < tamanho; i++)
			scanf(" %d", &vagoes[i]);

		bolha_gen(tamanho, vagoes, sizeof(int), compara);
		printf("%d\n", trocas_g);
		trocas_g = 0;
		free(vagoes);
	}

	return 0;
}

