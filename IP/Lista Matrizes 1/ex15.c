// Imprime matriz em espiral - ex15
// Incompleta

#include <stdio.h>

void imprime_espiral();

main()
{
	int n, m, i, j, k;

	// Dimensões da matriz

	scanf("%d", &n);
	scanf("%d", &m);
	if(n <= 0 || n > 100)
	{
		printf("Dimensao invalida\n");
		return 0;
	}
	else if(m <= 0 || m > 100)
	{
		printf("Dimensao invalida\n");
		return 0;
	}

	int matriz[n][m];

	// Elementos da matriz
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			scanf("%d", &matriz[i][j]);
		}
	}

	imprime_espiral()
}

void imprime_espiral(int n, int m, int *matriz)
{
	
}