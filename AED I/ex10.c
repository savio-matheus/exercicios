//10 - Loteria

#include <stdio.h>

#define N_DEZENAS 6

int acertos(int const sorteado[], int const aposta[])
{
	int i, j;
	int count = 0;

	// Pior caso: 36 iterações. Aceitável.
	for (i = 0; i < N_DEZENAS; i++) {
		for (j = 0; j < N_DEZENAS; j++) {
			if (sorteado[i] == aposta[j])
				count++;
		}
	}

	return count;
}

int main (void)
{
	int apostas;
	int sorteado[N_DEZENAS];
	int aposta[N_DEZENAS];
	int i, j, temp;
	int sena = 0;
	int quina = 0;
	int quadra = 0;

	for (i = 0; i < N_DEZENAS; i++)
		scanf(" %d", &sorteado[i]);

	scanf(" %d", &apostas);

	for (i = 0; i < apostas; i++) {
		for (j = 0; j < N_DEZENAS; j++)
			scanf(" %d", &aposta[j]);

		temp = acertos(sorteado, aposta);
		if (temp < 4) {
			continue;
		}
		else {
			if (temp == 4) quadra++;
			if (temp == 5) quina++;
			if (temp == 6) sena++;
		}
	}

	if (sena) printf("Houve %d acertador(es) da sena\n", sena);
	else printf("Nao houve acertador para sena\n");
	if (quina) printf("Houve %d acertador(es) da quina\n", quina);
	else printf("Nao houve acertador para quina\n");
	if (quadra) printf("Houve %d acertador(es) da quadra\n", quadra);
	else printf("Nao houve acertador para quadra\n");

	return 0;
}
