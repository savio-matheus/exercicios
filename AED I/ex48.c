// Balanceamento de parênteses

#include <stdio.h>
#include <stdlib.h>

#define FATOR_AUMENTO 2
#define ABERTO 1
#define FECHADO -1

struct vetor {
	char *v;
	size_t tamanho;
	size_t usado;
};

struct vetor *novo_vetor(void)
{
	struct vetor *p = malloc(sizeof (struct vetor));
	p->v = NULL;
	p->tamanho = 0;
	p->usado = 0;
	return p;
}

void vetor_push(struct vetor *p, char elemento)
{
	if (p->v == NULL) {
		p->v = malloc(sizeof (char) * 2);
		p->tamanho = 2;
	}

	if (p->tamanho / 2 > p->usado + 1) {
		p->tamanho *= FATOR_AUMENTO;
		p->v = realloc(p->v, sizeof (char) * p->tamanho);
	}

	p->usado++;
	p->v[p->usado] = elemento;
}

size_t vetor_usado(struct vetor *p)
{
	return p->usado;
}

char *vetor_ptr(struct vetor *p)
{
	return p->v;
}

int main (void)
{
	char c, *vet;
	struct vetor *p;
	int abertos = 0;
	int fechados = 0;
	int i;

	p = novo_vetor();

	do {
		c = getchar();
		vetor_push(p, c);

	} while (c != '\n');


	vet = vetor_ptr(p);
	for (i = 0; i < vetor_usado(p); i++) {
		c = vet[i];
		if (c == '(') {
			abertos++;
			fechados--;
		}
		if (c == ')') {
			abertos--;
			fechados++;
		}

		if (abertos < 0 || fechados > 0) {
			printf("incorreta\n");
			exit(0);
		}
	}
	printf("correta\n");

	exit(0);
}

