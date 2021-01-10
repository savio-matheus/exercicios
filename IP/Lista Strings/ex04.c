// Um_Dois_Três - ex4
#include <stdio.h>
#include <string.h>

main()
{
	const char 
		*one = "one",
	 	*two = "two",
	 	*three = "three";
	
	int acertosOne, acertosTwo, acertosThree;
		
	int entradas, i;
	char palavra[5];
	
	scanf(" %d", &entradas);
	
	for(entradas; entradas > 0; entradas--)
	{
		scanf(" %5[^\n]", palavra);
		
		acertosOne = 0;
		acertosTwo = 0;
		acertosThree = 0;
		
		for(i = 0; palavra[i]; i++)
		{
			if(palavra[i] == one[i])
			{
				acertosOne++;
			}
			if(palavra[i] == two[i])
			{
				acertosTwo++;
			}
			if(palavra[i] == three[i])
			{
				acertosThree++;
			}
		}
		
		if(acertosOne == 2 || acertosOne == 3) printf("1\n");
		else if(acertosTwo == 2 || acertosTwo == 3) printf("2\n");
		else if(acertosThree == 4 || acertosThree == 5) printf("3\n");
	}
}
