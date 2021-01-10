// Desenha quadrados - ex13
#include <stdio.h>

int tam = -1;

void desenha (int matriz[][tam], int t, int m, int n,
	int bordas, int cor, int raio)
{
	int i, j, k;

	if(bordas == 1)
	{
		// Bordas superior e inferior
		for(i = (m - raio); i < (m + raio) + 1; i++)
		{
			for(j = (n - raio); j < (n + raio) + 1; j += 2 * raio)
			{
				matriz[i][j] = cor;
			}
		}

		// Bordas esquerda e direita
		for(i = (m - raio); i < (m + raio) + 1; i++)
		{
			for(j = (n - raio); j < (n + raio) + 1; j += 2 * raio)
			{
				matriz[j][i] = cor;
			}
		}
		
	}
	else if(bordas == 2)
	{
		for(i = (m - raio); i < (m + raio) + 1; i++)
		{
			for(j = (n - raio); j < (n + raio) + 1; j++)
			{
				matriz[i][j] = cor;
			}
		}
	}
}

main()
{
	int cor = -1, i, j;
	int coordX, coordY, raio, bordas;

	while(tam > 200 || tam < 0) scanf("%d", &tam);
	int img[tam][tam];

	while(cor > 255 || cor < 0) scanf("%d", &cor);

	// Preenche a matriz com o valor da cor
	for(i = 0; i < tam; i++)
	{
		for(j = 0; j < tam; j++)
		{
			img[i][j] = cor;
		}
	}

	// Laço para receber as informações e
	// gerar os n quadrados que o usuário
	// quiser. Encerra com x = y = -1.
	while(coordX > 0 && coordY > 0)
	{
		cor = -1;
		scanf("%d", &coordX);
		scanf("%d", &coordY);

		if(coordY < 0 && coordX < 0) break;
		while(cor > 255 || cor < 0) scanf("%d", &cor);

		scanf("%d", &raio);
		scanf("%d", &bordas);

		if(coordX + raio < tam && coordY + raio < tam &&
			coordX - raio >= 0 && coordY - raio >= 0)
		{
			desenha(img, tam, coordX, coordY, bordas, cor, raio);
		}
	}

	printf("P2\n");
	printf("%d %d\n", tam);
	printf("255\n");
	for(i = 0; i < tam; i++)
	{
		for(j = 0; j < tam; j++)
		{
			printf("%d", img[i][j]);
			if(j + 1 < tam) printf(" ");
			else printf("\n");
		}
	}
}