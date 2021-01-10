//15 - Desenha quadrados

#include <stdio.h>
#include <stdlib.h>

#define SOMENTE_BORDA 1
#define PREENCHIDO 2

typedef struct {
	int **matriz;
	int linhas;
	int colunas;
} Pgm;

Pgm pgm_nova_imagem(int cor, int linhas, int colunas)
{
	Pgm img;
	int i, j;

	img.linhas = linhas;
	img.colunas = colunas;
	img.matriz = calloc(img.linhas, sizeof (int *));
	for (i = 0; i < img.linhas; i++) {
		img.matriz[i] = calloc(img.colunas, sizeof (int));
	}

	for (i = 0; i < img.linhas; i++) {
		for (j = 0; j < img.colunas; j++) {
			img.matriz[i][j] = cor;
		}
	}

	return img;
}

void pgm_apaga_imagem(Pgm *img)
{
	int i, j;

	for (i = 0; i < img->linhas; i++) {
		free(img->matriz[i]);
	}

	free(img->matriz);
	img->matriz = NULL;
	img->linhas = 0;
	img->colunas = 0;

}

void pgm_desenha_quadrado(Pgm img, int coordX, int coordY, int raio,
	int cor, int tipo)
{
	int i, j;

	if (coordX + raio >= img.colunas || coordY + raio >= img.linhas ||
		coordX - raio < 0 || coordY - raio < 0) {
		return;
	}

	if (tipo == SOMENTE_BORDA) {
		for (i = (coordY + raio), j = (coordX - raio); j <= (coordX + raio); j++) {
			img.matriz[i][j] = cor;
		}
		for (i = (coordY - raio), j = (coordX - raio); j <= (coordX + raio); j++) {
			img.matriz[i][j] = cor;
		}
		for (j = (coordX - raio), i = (coordY - raio); i <= (coordY + raio); i++) {
			img.matriz[i][j] = cor;
		}
		for (j = (coordX + raio), i = (coordY - raio); i <= (coordY + raio); i++) {
			img.matriz[i][j] = cor;
		}
	}

	if (tipo == PREENCHIDO) {
		for (i = coordY - raio; i <= coordY + raio; i++) {
			for (j = coordX - raio; j <= coordX + raio; j++) {
				img.matriz[i][j] = cor;
			}
		}
	}
}

void pgm_imprime(Pgm img)
{
	int i, j;

	printf("P2\n");
	printf("%d %d\n", img.colunas, img.linhas);
	printf("255\n");

	for (i = 0; i < img.linhas; i++) {
		for (j = 0; j < img.colunas; j++) {
			printf("%d", img.matriz[i][j]);
			if (j + 1 < img.colunas) {
				printf(" ");
			}
			else {
				printf("\n");
			}
		}
	}
}

#undef SOMENTE_BORDA
#undef PREENCHIDO

int main(void)
{
	int coordX; // coluna
	int coordY; // linha
	int cor;
	int raio;
	int preenchimento;
	int temp;
	Pgm img;

	scanf(" %d", &temp);
	scanf(" %d", &cor);
	img = pgm_nova_imagem(cor, temp, temp);

	while (1) {
		scanf(" %d", &coordX);
		scanf(" %d", &coordY);

		if (coordX < 0 || coordY < 0) {
			break;
		}

		scanf(" %d", &cor);
		scanf(" %d", &raio);
		scanf(" %d", &preenchimento);

		pgm_desenha_quadrado(img, coordX, coordX, raio, cor, preenchimento);
	}

	pgm_imprime(img);
	pgm_apaga_imagem(&img);

	return 0;
}
