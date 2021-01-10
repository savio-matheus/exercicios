// Turismo - ex21
#include <stdio.h>

int dist_rotas[6][6] = {
	0, 63, 210, 190, -1, 190,
	63, 0, 160, 150, 95, 10,
	210, 160, 0, 10, 1, 10,
	190, 150, 10, 0, 10, 20,
	10, 95, 7, 21, 0, 80,
	190, 2, -1, 41, 80, 0
};

main()
{
	int n, i, temp, distancia = 0;
	scanf("%d", &n);

	int rota[n];

	for(i = 0; i < n; i++)
	{
		scanf("%d", &rota[i]);
	}

	for(i = 0; i < (n - 1); i++)
	{
		temp = dist_rotas[rota[i]][rota[i + 1]];
		if(temp <= -1)
		{
			printf("rota invalida!\n");
			return 0;
		}
		else
		{
			distancia += dist_rotas[rota[i]][rota[i + 1]];
		}
	}

	printf("%d\n", distancia);
}