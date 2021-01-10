// Frequência do maior e menor - ex14
#include <stdio.h>

main()
{
	int maior = 0, menor = 1000, freqMaior = 0, freqMenor= 0;
	int n, m, i, j;
	double percMaior, percMenor;

	scanf("%d%d", &n, &m);

	int matriz[n][m];

	// Recebe os elementos
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			scanf("%d", &matriz[i][j]);
		}
	}

	// Procura o maior e menor
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			if(matriz[i][j] > maior)
			{
				maior = matriz[i][j];
			}

			if(matriz[i][j] < menor)
			{
				menor = matriz[i][j];
			}
		}
	}

	// Descobre as frequências do maior e menor
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			if(matriz[i][j] == maior)
			{
				freqMaior++;
			}
			else if(matriz[i][j] == menor)
			{
				freqMenor++;
			}
		}
	}
			

	// Saída dos resultados
	percMaior = freqMaior / (double) (n * m);
	percMaior *= 100;
	percMenor = freqMenor / (double) (n * m);
	percMenor *= 100;

	printf("%d %.2lf%%\n", menor, percMenor);
	printf("%d %.2lf%%\n", maior, percMaior);
}