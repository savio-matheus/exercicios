//Pares e ímpares - ex21
#include <stdio.h>

main()
{
	int n, i, j, min, temp;
	scanf("%d", &n);
	int vetor[n];

	for(i = 0; i < n; i++)
	{
		scanf("%d", &vetor[i]);
	}

	for(i = 0; i < n; i++)
	{
		min = i;
		for(j = i + 1; j < n; j++)
		{
			if(vetor[j] < vetor[min])
			{
				min = j;
			}
		}
		temp = vetor[i];
		vetor[i] = vetor[min];
		vetor[min] = temp;
	}

	for(i = 0; i < n; i++)
	{
		if(vetor[i] % 2 == 0)
		{
			printf("%d\n", vetor[i]);
		}
	}

	for(i = (n - 1); i >= 0; i--)
	{
		if(vetor[i] % 2 != 0)
		{
			printf("%d\n", vetor[i]);
		}
	}
}