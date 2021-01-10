// Ex2
#include <stdio.h>

struct produto{
	char nome[100];
	unsigned long int codigo;
	float preco;
};

int main()
{
	int cadastros;
	unsigned long int num;
	printf("Quantos produtos voce quer cadastrar? ");
	scanf(" %d", &cadastros);

	struct produto lista[cadastros];

	for(int i = 0; i < cadastros; i++)
	{
		printf("Nome: ");
		scanf(" %100[^\n]", lista[i].nome);

		printf("Codigo: ");
		scanf(" %lu", &lista[i].codigo);

		printf("Preco: ");
		scanf(" %f", &lista[i].preco);

		printf("\n");
	}

	printf("\n\nPRODUTOS CADASTRADOS\n");
	for(int i = 0; i < cadastros; i++)
	{
		printf("Nome: %s\n", lista[i].nome);
		printf("Codigo: %lu\n", lista[i].codigo);
		printf("Preco: %.2f\n\n", lista[i].preco);
	}

	printf("Obter informacoes do produto n.: ");
	scanf(" %lu", &num);

	for(int i = 0; i < cadastros; i++)
	{
		if(lista[i].codigo == num)
		{
			printf("Nome: %s\n", lista[i].nome);
			printf("Preco: %.2f\n", lista[i].preco);
		}
	}
}