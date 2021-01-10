// Matriz ordenada - ex18
#include <stdio.h>

main()
{
	int n;
	int min, i, j, k, temp;
	scanf("%d", &n);

	int vetor[n][n];

	for(i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
			{
				scanf("%d", &vetor[i][j]);
			}
		}

	for(k = 0; k < n; k++)
	{
		for(i = 0; i < n; i++)
		{
			min = i;
			for(j = i + 1; j < n; j++)
			{
				if(vetor[j][k] < vetor[min][k])
				{
					min = j;
				}
			}
			temp = vetor[i][k];
			vetor[i][k] = vetor[min][k];
			vetor[min][k] = temp;
		}
	}

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%d", vetor[i][j]);
			if(j + 1 < n) printf(" ");
			else printf("\n");
		}
	}
}