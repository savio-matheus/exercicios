// Ex1
#include <stdio.h>

struct livro{
	char titulo[100];
	char autor[100];
	float preco;
};

int main()
{
	int cadastros;
	printf("Quantos livros voce quer cadastrar? ");
	scanf(" %d", &cadastros);

	struct livro info[cadastros];

	for(int i = 0; i < cadastros; i++)
	{
		printf("Titulo: ");
		scanf(" %100[^\n]", info[i].titulo);

		printf("Autor: ");
		scanf(" %100[^\n]", info[i].autor);

		printf("Preco: ");
		scanf(" %f", &info[i].preco);

		printf("\n");
	}

	printf("\n\nLIVROS CADASTRADOS\n");
	for(int i = 0; i < cadastros; i++)
	{
		printf("Titulo: %s\n", info[i].titulo);
		printf("Autor: %s\n", info[i].autor);
		printf("Preco: %.2f\n\n", info[i].preco);
	}
}