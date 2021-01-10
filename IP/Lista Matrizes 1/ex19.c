// Potência de Matrizes - ex19
#include <stdio.h>

// Retorna matriz²
void quad_mtr(int dim, int matriz[][dim])
{
	int i, j, k;
	int temp[dim][dim];

	for(i = 0; i < dim; i++)
	{
		for(j = 0; j < dim; j++)
		{
			temp[i][j] = 0;
		}
	}

	for(i = 0; i < dim; i++)
	{
		for(j = 0; j < dim; j++)
		{
			for(k = 0; k < dim; k++)
			{
				temp[i][j] += matriz[i][k] * matriz[k][j];
			}
		}
	}

	for(i = 0; i < dim; i++)
	{
		for(j = 0; j < dim; j++)
		{
			matriz[i][j] = temp[i][j];
		}
	}
}

main()
{
	int n, exp, i, j;
	scanf("%d", &n);
	scanf("%d", &exp);

	int matriz[n][n];

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", &matriz[i][j]);
		}
	}

	for(exp; exp >= 2; exp--)
	{
		quad_mtr(n, matriz);
	}

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%d", matriz[i][j]);

			if(1 + j < n) printf(" ");
			else printf("\n");
		}
	}
}