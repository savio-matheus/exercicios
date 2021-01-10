// Desenha bordas - ex8
#include <stdio.h>

main()
{
	int i, j, k;
	int m, n, borda, enfeite;
	scanf("%d%d%d%d", &m, &n, &borda, &enfeite);
	
	int pgm[m][n];
	
	// Preenche com zeros.
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			pgm[i][j] = 0;
		}
	}
	
	// Desenha a borda de cima.
	for(i = 0; i < borda; i++)
	{
		for(j = 0; j < n; j++)
		{
			pgm[i][j] = enfeite;
		}
	}
	
	// Desenha a borda de baixo.
	for(i = m - 1; i >= (m - borda); i--)
	{
		for(j = 0; j < n; j++)
		{
			pgm[i][j] = enfeite;
		}
	}
	
	// Desenha a borda esquerda
	for(i = borda; i < (m - borda); i++)
	{
		for(j = 0; j < borda; j++)
		{
			pgm[i][j] = enfeite;
		}
	}
	
	// Desenha a borda direita
	for(i = borda; i < (m - borda); i++)
	{
		for(j = n - 1; j > (n - 1 - borda); j--)
		{
			pgm[i][j] = enfeite;
		}
	}
	
	// Imprime a matriz
	printf("P2\n");
	printf("%d %d\n", m, n);
	printf("255\n");
	
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%d", pgm[i][j]);
			if(j + 1 < n)
			{
				printf(" ");
			}
			else
			{
				printf("\n");
			}
		}
	}
	printf("\n");
}
