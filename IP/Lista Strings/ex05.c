// Zero Vale Zero - ex5
#include <stdio.h>
#include <string.h>

main()
{
	int num, num2, soma, i;
	char str[10];
	
	while(1)
	{
		scanf("%d%d", &num, &num2);
		soma = num + num2;
		
		if(soma == 0) break;
		
		sprintf(str, "%d", soma);
		
		for(i = 0; str[i] != '\0'; i++)
		{
			if(str[i] != '0')
			{
				printf("%c", str[i]);
			}
		}
		printf("\n");
	}
}
