// Criptografia - ex10
#include <stdio.h>
#include <string.h>
#include <stdio.h>

void caesar(char *str)
{
	int i;

	for(i = 0; str[i]; i++)
	{
		if( (str[i] >= 65 && str[i] <= 90)
			|| (str[i] >= 97 && str[i] <= 122) )
		{
			str[i] += 3;
		}
	}
}

void inverte(char *str)
{
	int i = strlen(str) - 1;
	int j;
	char strTemp[i];

	strcpy(strTemp, str);

	for(j = 0; i >= 0; i--, j++)
	{
		str[j] = strTemp[i];
	}
}

void move_esquerda(char *str)
{
	int i = (strlen(str) / 2);
	int j;

	for(j = i; str[j]; j++)
	{
		str[j] -= 1;
	}
}

main()
{
	int testes;
	char str[1001];

	scanf(" %d", &testes);

	for(testes; testes > 0; testes--)
	{
		scanf(" %1000[^\n]", str);

		caesar(str);
		inverte(str);
		move_esquerda(str);

		puts(str);
	}
}