// Sentença dançante - ex14
#include <stdio.h>
#include <ctype.h>

void dancante(char *str)
{
	int i, caixa = 1;

	for(i = 0; str[i]; i++)
	{
		if( (str[i] >= 65 && str[i] <= 90)
			|| (str[i] >= 97 && str[i] <= 122) )
		{
			if(caixa)
			{
				str[i] = toupper( str[i] );
				caixa = 0;
			}
			else
			{
				str[i] = tolower( str[i] );
				caixa = 1;
			}
		}
	}
}

main()
{
	char string[51];
	
	while( fgets(string, 50, stdin) )
	{
		dancante(string);
		printf("%s", string);
	}
}