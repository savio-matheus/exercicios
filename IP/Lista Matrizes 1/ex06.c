// Quadrado de matriz 2x2 - ex6
#include <stdio.h>

main()
{
    double mtz[2][2], mtz2[2][2], mult;
    int i, j, k;
    
    // Recebe os valores
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%lf", &mtz[i][j]);
        }
    }
    
    // Faz a multiplicação
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            mult = 0;
            for(k = 0; k < 2; k++)
            {
                mult += mtz[i][k] * mtz[k][j];
            }
            mtz2[i][j] = mult;
        }
    }
    
    // Imprime o resultado
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%.3lf", mtz2[i][j]);
            
            if(j + 1 < 2)
            {
                printf(" ");
            }
            else
            {
                printf("\n");
            }
        }
    }
}