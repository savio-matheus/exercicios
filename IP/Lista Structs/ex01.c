// Frações Equivalentes - ex1
#include <stdio.h>
#include <stdlib.h>

struct FRAC {
	int num;
	int den;
};

// Retorna 1 se as frações forem equivalentes e 0 em
// caso negativo.
int equivalente( FRAC p, FRAC t )
{
	int i = 2;

	while( i <= p.num && i <= p.den )
	{
		if( p.den % i == 0 && p.num % i == 0)
		{
			p.num /= i;
			p.den /= i;
		}
		else
		{
			i++;
		}
	}

	i = 2;

	while( i <= t.num && i <= t.den )
	{
		if( t.den % i == 0 && t.num % i == 0)
		{
			t.num /= i;
			t.den /= i;
		}
		else
		{
			i++;
		}
	}

	if(p.num == t.num && p.den == t.den)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

main()
{
	int testes, DIM, i, j, k, existeEq = 0;
	FRAC *vetor = NULL;
	char catch;

	scanf(" %d", &testes);

	for(k = 1; k <= testes; k++)
	{
		existeEq = 0;

		scanf(" %d", &DIM);
		vetor = malloc( sizeof (FRAC) * DIM );

		for(i = 0; i < DIM; i++)
		{
			scanf(" %d", &vetor[i].num);
			scanf(" %c", &catch);
			scanf(" %d", &vetor[i].den);
		}

		printf("Caso de teste %d\n", k);
		for(i = 0; i < DIM; i++)
		{
			for(j = i + 1; j < DIM; j++)
			{
				if( equivalente(vetor[i], vetor[j]) )
				{
					existeEq = 1;
					printf("%d/%d equivalente a %d/%d\n", 
						vetor[i].num, vetor[i].den,
						vetor[j].num, vetor[j].den );
				}
			}
		}

		if(!existeEq)
		{
			printf("Nao ha fracoes equivalentes na sequencia\n");
			existeEq = 0;
		}

		free(vetor);
	}
}