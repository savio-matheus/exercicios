#include <stdio.h>
#include <string.h>

int busca(char *str)
{
	int i = 2;
	while(str[i])
	{
		if(str[i] == str[0])
		{
			return i;
		}
		i++;
	}
	
	return -1;
}

main()
{
	int testes, catch;
	char string[500];
	
	scanf(" %d ", &testes);
	
	for(testes; testes > 0; testes--)
	{
		fgets(string, 502, stdin);
		
		catch = busca(string);
		
		if(catch != -1)
		{
			printf("Caractere %c encontrado no indice %d da string.\n",
				string[0], catch - 2);
		}
		else
		{
			printf("Caractere %c nao encontrado.\n", string[0]);
		}
	}
}
