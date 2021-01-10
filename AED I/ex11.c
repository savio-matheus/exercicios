// 11 - Ampulheta

#include <stdio.h>

// Calcula a soma pedida do subconjunto da matriz.
// Os valores de addM e addN movimentam o subconjunto
// dentro da matriz principal.
int ampulheteira (int matriz[][6], int addM, int addN)
{
	int i, j, k, soma = 0;
	
	for(i = addM; i < (3 + addM); i += 2)
	{
		for(j = addN; j < (3 + addN); j++)
		{
			soma += matriz[i][j];
		}
	}
	
	soma += matriz[1 + addM][1 + addN];
	
	return soma;
}

int main(void)
{
	int mtr[6][6];
	int i, j, k = 1, soma, maior;
	
	for(i = 0; i < 6; i++)
	{
		for(j = 0; j < 6; j++)
		{
			scanf("%d", &mtr[i][j]);
		}
	}
	
	// Gera os valores que irão para addM e addN
	// e garante que será mantida a maior soma.
	for(i = 0; i <= 3; i++)
	{
		for(j = 0; j <= 3; j++)
		{
			if(k)
			{
				maior = ampulheteira(mtr, i, j);
				k = 0;
			}
			else
			{
				soma = ampulheteira(mtr, i, j);
				
				if(soma > maior)
				{
					maior = soma;
				}
			}
		}
	}
	
	printf("%d\n", maior);
}