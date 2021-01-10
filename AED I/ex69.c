// 69 - Enumerando os números racionais

#include <stdio.h>

// Algoritmo de Euclides
long mdc(long n, long d)
{
	if (d == 0) {
		return n;
	}

	return mdc(d, n % d);
}

// Enumeração dos racionais entre 0 e 1
void enumeracao_racionais(int posicao_seq)
{
	int d, n;
	int pos = 0;

	for (d = 1; ; d++) {
		for (n = 0; n <= d; n++) {
			if (mdc(n, d) == 1) {
				pos++;
				if (pos == posicao_seq) {
					printf("%d/%d\n", n, d);
					return;
				}
			}
		}
	}
}

int main (void)
{
	int pos_seq = 1;

	while (1) {
		scanf(" %d", &pos_seq);
		
		if (pos_seq == 0) {
			break;
		}
		
		enumeracao_racionais(pos_seq);
	}

	return 0;
}

