// Mercado - ex2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct produto{
	char nome[51];
	double preco;
	int quant;
};

main()
{
	int idas, quantProdutos, compras, i, j, temp;
	double gastoTotal;
	char tempStr[51];
	struct produto *lista = NULL;

	scanf(" %d", &idas);

// ******************************************************************

	for(idas; idas > 0; idas--)
	{
		gastoTotal = 0;

		scanf(" %d", &quantProdutos);
		lista = malloc(sizeof (struct produto) * (quantProdutos + 1) );

		for(i = 0; i < quantProdutos; i++)
		{
			scanf(" %50s", lista[i].nome);
			scanf(" %lf", &lista[i].preco);
			lista[i].quant = 0;
		}

// ************************************************

		scanf(" %d", &compras);

		for(i = 0; i < compras; i++)
		{
			scanf(" %50s", tempStr);
			scanf(" %d", &temp);

			for(j = 0; j < quantProdutos; j++)
			{
				if( strcmp(tempStr, lista[j].nome) == 0 )
				{
					lista[j].quant = temp;
					break;
				}
			}
		}

// ************************************************

		for(i = 0; i < quantProdutos; i++)
		{
			if( lista[i].quant != 0 )
			{
				gastoTotal += ( lista[i].preco * lista[i].quant );
			}
		}

		printf("R$ %.2lf\n", gastoTotal);

		free(lista);
	}
}