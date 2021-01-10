// Loteria - ex17
#include <stdio.h>

main()
{
	int n, i, j, k;
	int sena = 0, quina = 0, quadra = 0, temp = 0;
    
	do
    {
        scanf(" %d", &n);
    }
    while(n < 1 || n > 50000);
    
	int apostas[n][6];
	int sorteio[6];

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < 6; j++)
		{
			scanf("%d", &apostas[i][j]);
		}
	}

	for(i = 0; i < 6; i++)
	{
		scanf("%d", &sorteio[i]);
	}

	for(i = 0; i < n; i++)
	{
		temp = 0;
		for(j = 0; j < 6; j++)
		{
			for(k = 0; k < 6; k++)
			{
				if(sorteio[k] == apostas[i][j])
				{
					temp++;
				}
			}
		}
		if(temp == 6)
		{
			sena++;
		}
		else if(temp == 5)
		{
			quina++;
		}
		else if(temp == 4)
		{
			quadra++;
		}
	}

	if(sena)
	{
		printf("Houve %d acertador(es) da sena\n", sena);
	}
	else
	{
		printf("Nao houve acertador para sena\n");
	}

	if(quina)
	{
		printf("Houve %d acertador(es) da quina\n", quina);
	}
	else
	{
		printf("Nao houve acertador para quina\n");
	}

	if(quadra)
	{
		printf("Houve %d acertador(es) da quadra\n", quadra);
	}
	else
	{
		printf("Nao houve acertador para quadra\n");
	}
}