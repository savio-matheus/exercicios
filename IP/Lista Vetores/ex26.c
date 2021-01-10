// Os verdadeiros sete anões da Branca de Neve - ex26
#include <stdio.h>
#define SOMA_TOUCAS 100

main()
{
    int i, j, k, l, achou = 0;
    int anoes[9], testes, soma = 0;
    
    scanf("%d", &testes);
    
    for(testes; testes > 0; testes--)
    {
        // Entrada do número de cada anão.
        for(i = 0; i < 9; i++)
        {
            scanf("%d", &anoes[i]);
        }
        soma = 0;
        achou = 0;
        
        for(i = 0; i < 9 && !achou; i++)
        {
            for(j = 0; j < 9 && !achou; j++)
            {
                if(j == i) continue;
                
                for(k = 0; k < 9; k++)
                {
                    if(k != i && k != j)
                    {
                        soma += anoes[k];
                    }
                }

                if(soma == SOMA_TOUCAS)
                {
                    for(l = 1; l < 100; l++)
                    {
                        for(k = 0; k < 9; k++)
                        {
                            if(anoes[k] == l && k != i && k != j)
                            {
                                printf("%d\n", anoes[k]);
                                break;
                            }
                        }
                    }
                    
                    achou = 1;
                }
                else
                {
                    soma = 0;
                }
            }
        }
    }
}