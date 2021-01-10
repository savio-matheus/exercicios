// Ex3
#include <stdio.h>

struct aluno{
	unsigned int matricula;
	float nota;
};

int main()
{
	struct aluno dados[10];
	struct aluno reprovados[10];
	struct aluno aprovados[10];

	int k = 0, l = 0;

	for(int i = 0; i < 10; i++)
	{
		printf("Matricula: ");
		scanf(" %u", &dados[i].matricula);

		printf("Nota (0 ~ 10): ");
		scanf(" %f", &dados[i].nota);
	}

	for(int i = 0; i < 10; i++)
	{
		if(dados[i].nota < 5.0)
		{
			reprovados[k] = dados[i];
			k++;
		}
		else
		{
			aprovados[l] = dados[i];
			l++;
		}
	}

	printf("\nALUNOS APROVADOS\n");
	for(k; k > 0; k--)
	{
		printf("Matricula: %u\n", aprovados[k].matricula);
		printf("Nota: %.f\n", aprovados[k].nota);

	}

	printf("\nALUNOS REPROVADOS\n");
	for(l; l > 0; l--)
	{
		printf("Matricula: %u\n", reprovados[l].matricula);
		printf("Nota: %.f\n", reprovados[l].nota);

	}
}