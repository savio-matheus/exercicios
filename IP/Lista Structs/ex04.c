// Vetores ordenados - ex4
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct norma{
	double x;
	double y;
	double z;
	double u;
	double norma;
};

void sort_norma( struct norma *p, int n )
{
	int i, j, min;
	struct norma temp_lf;

	for(i = 0; i < n; i++)
	{
		min = i;
		for(j = i + 1; j < n; j++)
		{
			if(p[j].norma < p[min].norma)
			{
				min = j;
			}
		}
		temp_lf = p[i];
		p[i] = p[min];
		p[min] = temp_lf;
	}
}

main()
{
	struct norma *vetor = NULL;
	int entradas, i;

	scanf(" %d", &entradas);

	vetor = malloc( sizeof (struct norma) * entradas);

	for(i = 0; i < entradas; i++)
	{
		scanf(" %lf", &vetor[i].x);
		scanf(" %lf", &vetor[i].y);
		scanf(" %lf", &vetor[i].z);
		scanf(" %lf", &vetor[i].u);
		
		vetor[i].norma = pow(vetor[i].x, 2)
					+ pow(vetor[i].y, 2)
					+ pow(vetor[i].z, 2)
					+ pow(vetor[i].u, 2);

		vetor[i].norma = sqrt(vetor[i].norma);
	}

	sort_norma(vetor, entradas);

	for(i = 0; i < entradas; i++)
	{
		printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n",
			vetor[i].x, vetor[i].y, vetor[i].z, vetor[i].u, vetor[i].norma );
	}

	free(vetor);
}