// Cadê o Wally? - ex11
#include <stdio.h>

main()
{
    int n, m, i, j, k, wally = 0, achou = 0;
    scanf("%d%d", &n, &m);
    int matriz[n][m];
    
    // Recebe os valores
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Procura por 1111
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(matriz[i][j] == 1111)
            {
                // Existe uma possibilidade (beeem pequena)
                // de, nas beiradas da matriz, o lixo satisfazer
                // alguma das condições. Ignoremos isso.
                if(matriz[i - 1][j] == 4) wally++;
                if(matriz[i + 1][j] == 8) wally++;
                if(matriz[i][j - 1] == 0) wally++;
                if(matriz[i][j + 1] == 0) wally++;

                if(wally >= 2)
                {
                    printf("%d %d\n", i, j);
                    achou = 1;
                }
            }

            wally = 0;
        }
    }

    if(!achou) printf("WALLY NAO ESTA NA MATRIZ\n");
}