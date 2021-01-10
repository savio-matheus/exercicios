// Limpa String - ex16
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void str_clean (char *str, char *clr)
{
	char strTemp[256];
	int i, j;

	strcpy(strTemp, str);

	for(i = 0; str[i]; i++)
	{
		for(j = 0; clr[j]; j++)
		{
			if(clr[j] == strTemp[i])
			{
				strTemp[i] = (char) 255;
			}
		}
	}

	for(i = 0, j = 0; strTemp[i] != '\0'; i++)
	{
		if( strTemp[i] != (char) 255 )
		{
			str[j] = strTemp[i];
			j++;
		}

		if(strTemp[i + 1] == '\0')
		{
			str[j] = '\0';
		}
	}
}

main()
{
	char str[256];
	char clr[256];

	scanf(" %256[^\n]", str);
	scanf(" %256[^\n]", clr);

	str_clean(str, clr);

	printf("%s\n", str);

	return 0;
}