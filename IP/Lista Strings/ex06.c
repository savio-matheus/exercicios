#include <stdio.h>
#include <string.h>

int invertida(char *normal)
{
	char temp[200];
	int i, j = 0;
	
	for(i = 0; normal[i] != '\0'; i++)
	{
		j++;
	}
	
	j--;
	
	for(i = 0; j - i >= 0; i++)
	{
		temp[i] = normal[j - i];
		if(j - (i + 1) < 0)
		{
			temp[i + 1] = '\0';
		}
	}
	
	if(!strcmp(normal, temp)) return 1;
	else return 0;
}

main()
{
	char palavra[200];
	int inv;
	
	while(1)
	{
		if( scanf(" %200[^\n]", palavra) == EOF ) break;
		
		inv = invertida(palavra);
		
		if(inv)
		{
			printf("sim\n");
		}
		else
		{
			printf("nao\n");
		}
	}
}
