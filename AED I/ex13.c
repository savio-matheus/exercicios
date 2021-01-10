//13 - Cidade Segura
#include <stdio.h>

main()
{
    int n, i, j, k = 0;
    scanf("%d", &n);
    int matriz[n + 1][n + 1];
    char seguro[n][n];

    // Preenchimento da matriz
    for(i = 0; i < n + 1; i++)
    {
        for(j = 0; j < n + 1; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Avalia segurança das esquinas
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            k = 0;

            if(matriz[i][j]) k++;
            if(matriz[i][j + 1]) k++;
            if(matriz[i + 1][j]) k++;
            if(matriz[i + 1][j + 1]) k++;

            //printf("k = %d\n", k);

            if(k >= 2)
            {
                seguro[i][j] = 'S';
            }
            else
            {
                seguro[i][j] = 'U';
            }
        }
    }

    // Imprime
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%c", seguro[i][j]);
        }
        printf("\n");
    }
}