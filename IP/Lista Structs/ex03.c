// Tradutor do Papai Noel - ex3
#include <stdio.h>
#include <string.h>

char *frases[][2] = {
	"brasil", "Feliz Natal!",
	"alemanha", "Frohliche Weihnachten!",
	"austria", "Frohe Weihnacht!",
	"coreia", "Chuk Sung Tan!",
	"espanha", "Feliz Navidad!",
	"grecia", "Kala Christougena!",
	"estados-unidos", "Merry Christmas!",
	"inglaterra", "Merry Christmas!",
	"australia", "Merry Christmas!",
	"portugal", "Feliz Natal!",
	"suecia", "God Jul!",
	"turquia", "Mutlu Noeller!", // no exercício falta exclamação "!"
	"argentina", "Feliz Navidad!",
	"chile", "Feliz Navidad!",
	"mexico", "Feliz Navidad!",
	"antartida", "Merry Christmas!", // tem um erro em "antartida" no exercício
	"canada", "Merry Christmas!",
	"irlanda", "Nollaig Shona Dhuit!",
	"belgica", "Zalig Kerstfeest!",
	"italia", "Buon Natale!",
	"libia", "Buon Natale!",
	"siria", "Milad Mubarak!",
	"marrocos", "Milad Mubarak!",
	"japao", "Merii Kurisumasu!",
	"\0", "-- NOT FOUND --"
};

main()
{
	char str[100];
	int i;

	while( scanf(" %100[^\n]", str) != EOF )
	{
		for(i = 0; frases[i][0]; i++)
		{
			if( strcmp(str, frases[i][0]) == 0
				|| strcmp("\0", frases[i][0]) == 0 )
			{
				printf("%s\n", frases[i][1]);
				break;
			}
		}
	}
}