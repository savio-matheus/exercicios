#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *retorna_prefixo(int prefix, char *str)
{
	char *subStr = NULL;
	int i = 0;
	
	while(str[i])
	{
		i++;
	}
	
	if(prefix >= i)
	{
		subStr = (char *) malloc(i + 2);
	}
	else
	{
		subStr = (char *) malloc(prefix + 2);
	}
	
	if(subStr == NULL)
	{
		return NULL;
	}
	
	strncpy(str, subStr, prefix);
	printf("%s\n", subStr);
	
	return subStr;
}

main()
{
	int testes, prefixo;
	char string[501], *strPrefix = NULL;
	
	scanf(" %d", &testes);
	
	for(testes; testes > 0; testes--)
	{
		scanf(" %d", &prefixo);
		scanf(" %500[^\n]", string);
		
		strPrefix = retorna_prefixo(prefixo, string);
		
		if(strPrefix != NULL)
		{
			printf("%s\n", strPrefix);
			free(strPrefix);
		}
	}
}
