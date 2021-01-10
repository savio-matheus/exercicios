// Sequência espelho
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	int num1, num2, testes, i, j = 0;
	char numChar[5];

	scanf(" %d", &testes);

	for(testes; testes > 0; testes--)
	{
		scanf(" %d%d", &num1, &num2);

		for(i = num1; i <= num2; i++)
		{
			sprintf(numChar, "%d", i);
			printf("%s", numChar);
		}

		for(i = num2; i >= num1; i--)
		{
			sprintf(numChar, "%d", i);
			
			j = strlen(numChar);

			for(j -= 1; j >= 0; j--)
			{
				printf("%c", numChar[j]);
			}
		}
		printf("\n");
	}
}