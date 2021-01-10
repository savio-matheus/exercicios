// Aliteração - ex12
#include <stdio.h>
#include <stdio.h>
#include <ctype.h>

int aliteracoes(char *str)
{
	int i, alit = 0, reps = 0;
	char temp;

	for(i = 0; str[i]; i++)
	{
		str[i] = tolower(str[i]);
	}

	temp = str[0];

	for(i = 1; str[i]; i++)
	{
		if(str[i] == ' ')
		{
			i++;
			if(str[i] == temp)
			{
				if(!reps)
				{
					alit++;
					reps = 1;
				}
			}
			else
			{
				temp = str[i];
				reps = 0;
			}
		}
	}

	return alit;
}

main()
{
	char string[5000];

	while( scanf(" %5000[^\n]", string) != EOF )
	{
		printf("%d\n", aliteracoes(string));
	}
}