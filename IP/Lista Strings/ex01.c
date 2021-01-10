// Combinador - ex1
#include <stdio.h>
#include <string.h>

void intercala()
{
    char str[50], str2[50], strFinal[100];
    int i, j, k = 1, l = 1;
    
    scanf("%s", str);
    scanf("%s", str2);
        
	for(i = 0, j = 0; k || l; i++)
		    {
		        if(str[i] && k)
		        {
		            strFinal[j] = str[i];
		            j++;
		        }
		        else{
		            k = 0;
		        }
		        
		        if(str2[i] && l)
		        {
		            strFinal[j] = str2[i];
		            j++;
		        }
		        else
		        {
		            l = 0;
		        }
		    }
		strFinal[j] = '\0';
		puts(strFinal);
}

main()
{
    int testes;
    scanf("%d", &testes);
    
    for(testes; testes > 0; testes--)
    {
        intercala();
    }
}
