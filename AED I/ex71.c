// 71 - Monk One: Monk takes a walk

#include <stdio.h>
#include <stdlib.h>

struct vetor {
	char *c;
	int tamanho;
	int usado;
};

char *vogais_g = NULL;

struct vetor *inicializa_vetor(void)
{
	struct vetor *v = malloc(sizeof(*v));
	v->c = NULL;
	v->tamanho = 0;
	v->usado = 0;

	return v;
}

void adiciona_elemento(struct vetor *v, char c)
{
	const float FATOR_AUMENTO = 1.5;

	if (v->tamanho == 0) {
		v->c = malloc(sizeof(char) * 2);
		v->tamanho = 2;
		v->usado = 0;
	}

	if (v->tamanho + 1 >= v->usado) {
		v->tamanho *= FATOR_AUMENTO;
		v->c = realloc(v->c, sizeof(char) * v->tamanho);
	}

	v->usado++;
	v->c[v->usado - 1] = c;
}

void libera_vetor(struct vetor *v)
{
	free(v->c);
}

void vetor_vogais(void)
{
	// Uma tabela de dispersão bem ruinzinha
	if (vogais_g == NULL) {
		vogais_g = calloc(sizeof(char), 167);
		vogais_g[65] = 'A';
		vogais_g[69] = 'E';
		vogais_g[73] = 'I';
		vogais_g[79] = 'O';
		vogais_g[85] = 'U';
		vogais_g[97] = 'a';
		vogais_g[101] = 'e';
		vogais_g[105] = 'i';
		vogais_g[111] = 'o';
		vogais_g[117] = 'u';
	} else {
		free(vogais_g);
	}
}

int contador_de_vogais(struct vetor *v)
{
	int i;
	int contador = 0;

	for (i = 0; i < v->usado; i++) {
		if (0 != vogais_g[(int) v->c[i]])
			contador++;
	}

	return contador;
}

int main (void)
{
	int testes;
	struct vetor *buffer;
	char temp;

	scanf(" %d ", &testes);
	vetor_vogais();

	for ( ; testes > 0; testes--) {
		buffer = inicializa_vetor();

		while (temp = getchar(), temp != '\n') {
			adiciona_elemento(buffer, temp);
		}
		adiciona_elemento(buffer, '\0');
		
		printf("%i\n", contador_de_vogais(buffer));
		libera_vetor(buffer);
	}

	vetor_vogais();
	return 0;
}

