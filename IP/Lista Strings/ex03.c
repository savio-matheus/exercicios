// Quantas letras - ex3
#include <stdio.h>
#include <string.h>

main()
{
    int n, i, consoantes, vogais;
    char string[10000];

    scanf("%d ", &n);

    for(n; n > 0; n--)
    {
        consoantes = 0;
        vogais = 0;
        fgets(string, 10000, stdin);

        for(i = 0; string[i]; i++)
        {
            if(string[i] >= 65 && string[i] <= 90)
            {
                switch (string[i])
                {
                    case 65:
                        vogais++;
                        break;
                    case 69:
                        vogais++;
                        break;
                    case 73:
                        vogais++;
                        break;
                    case 79:
                        vogais++;
                        break;
                    case 85:
                        vogais++;
                        break;
                    default:
                        consoantes++;
                }
            }
            else if(string[i] >= 97 && string[i] <= 122)
            {
                switch (string[i])
                {
                    case 97:
                        vogais++;
                        break;
                    case 101:
                        vogais++;
                        break;
                    case 105:
                        vogais++;
                        break;
                    case 111:
                        vogais++;
                        break;
                    case 117:
                        vogais++;
                        break;
                    default:
                        consoantes++;
                }
            }
        }

        printf("Letras = %d\n", (consoantes + vogais));
        printf("Vogais = %d\n", vogais);
        printf("Consoantes = %d\n", consoantes);
    }
}