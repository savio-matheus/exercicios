// Logotipo na TV da vovó - ex16
#include <stdio.h>

main()
{
	int tL, tI; // Tamanho da logo e da imagem
	int i, j, k, l, iguais;

	// Entrada das matrizes
	scanf("%d", &tL);
	int logo[tL][tL];
	for(i = 0; i < tL; i++)
	{
		for(j = 0; j < tL; j++)
		{
			scanf("%d", &logo[i][j]);
		}
	}

	scanf("%d", &tI);
	int img[tI][tI];
	for(i = 0; i < tI; i++)
	{
		for(j = 0; j < tI; j++)
		{
			scanf("%d", &img[i][j]);
		}
	}

	// Diz se o logotipo está presente
	for(i = 0; i < tI - tL + 1; i++)
	{
		for(j = 0; j < tI - tL + 1; j++)
		{
			iguais = 0;
			for(k = 0; k < tL; k++)
			{
				for(l = 0; l < tL; l++)
				{
					if(img[i + k][j + l] == logo[k][l])
					{
						iguais++;
					}
				}
			}

			if(iguais == (tL * tL))
			{
				printf("sim\n");
				return 0;
			}
		}
	}

	printf("nao\n");
}