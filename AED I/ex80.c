// 80 - PLACAR: quem vai ser reprovado?

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno {
	int nota;
	char nome[21];
};

int compara_nota(void *a, void *b)
{
	const struct aluno *temp1 = a;
	const struct aluno *temp2 = b;

	if (temp1->nota < temp2->nota)
		return 1;
	else
		return 0;
}

int compara_nome(void *a, void *b)
{
	const struct aluno *temp1 = a;
	const struct aluno *temp2 = b;

	if (temp1->nota != temp2->nota) {
		return 0;
	}

	// Assumindo que nunca haverá nomes iguais.
	if (strcmp(temp1->nome, temp2->nome) > 1) {
		return 1;
	} else {
		return 0;
	}
}

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


int main(void)
{
	int n_estudantes;
	struct aluno *aluno;
	int i;

	scanf(" %d", &n_estudantes);
	aluno = malloc(sizeof(*aluno) * n_estudantes);
	for (i = 0; i < n_estudantes; i++) {
		scanf(" %s", aluno[i].nome);
		scanf(" %d", &aluno[i].nota);
	}

	bolha_gen(n_estudantes, aluno, sizeof(*aluno), compara_nota);
	bolha_gen(n_estudantes, aluno, sizeof(*aluno), compara_nome);

	for (i = 0; i < n_estudantes; i++) {
		printf("%s %d", aluno[i].nome, aluno[i].nota);
		if (i + 1 == n_estudantes)
			printf(" #reprovado(a)\n");
		else
			printf("\n");
	}

	return 0;
}
