// Distância entre pontos - ex7
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto_t{
	double u;
	double x;
	double y;
	double z;
};

typedef struct ponto_t ponto_t;

main()
{
	ponto_t *pontos = NULL;
	int entradas, i;
	double distancia = 0;

	scanf(" %d", &entradas);
	pontos = malloc( sizeof (ponto_t) * entradas );

	for(i = 0; i < entradas; i++)
	{
		scanf(" %lf", &pontos[i].u);
		scanf(" %lf", &pontos[i].x);
		scanf(" %lf", &pontos[i].y);
		scanf(" %lf", &pontos[i].z);
	}

	for(i = 0; i < (entradas - 1); i++)
	{
		distancia = 0;

		distancia += pow( (pontos[i].u - pontos[i + 1].u), 2 );
		distancia += pow( (pontos[i].x - pontos[i + 1].x), 2 );
		distancia += pow( (pontos[i].y - pontos[i + 1].y), 2 );
		distancia += pow( (pontos[i].z - pontos[i + 1].z), 2 );

		distancia = sqrt(distancia);

		printf("%.2lf\n", distancia);
	}

	free(pontos);
}