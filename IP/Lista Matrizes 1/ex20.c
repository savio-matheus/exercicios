// Troca maior e menor - ex20
#include <stdio.h>

void troca_maior_menor(int tam, int *matriz)
{
	int i;
	int tMaior = *matriz, tMenor = *matriz;
	int posicMaior = 0, posicMenor = 0;

	for(i = 0; i < tam; i++)
	{
		if(tMaior > *(matriz + i))
		{
			tMaior = *(matriz + i);
			posicMaior = i;
		}

		if(tMenor < *(matriz + i))
		{
			tMenor = *(matriz + i);
			posicMenor = i;
		}
	}

	*(matriz + posicMaior) = tMenor;
	*(matriz + posicMenor) = tMaior;
}

main()
{
	int n, m, i, j;
	scanf("%d%d", &m, &n);

	int mtr[m][n];

	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", &mtr[i][j]);
		}
	}

	troca_maior_menor((m * n), &mtr[0][0]);

	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%d", mtr[i][j]);
			if(j + 1 < n) printf(" ");
			else printf("\n");
		}
	}
}