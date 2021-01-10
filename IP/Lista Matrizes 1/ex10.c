// Operações matriciais - ex10
#include <stdio.h>

main()
{
    int n, i, j, soma = 0;
    
    scanf("%d", &n);
    int matriz[n][n], mult[n][n];
    
    // Recebe os valores
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // Soma dos elementos da diagonal principal
    for(i = 0; i < n; i++)
    {
        soma += matriz[i][i];
    }
    
    // Multiplica pela soma
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            mult[i][j] = matriz[i][j] * soma;
        }
    }
    
    // Imprime
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d", (mult[i][j] + matriz[j][i]));
            
            if(j + 1 < n) printf(" ");
            else printf("\n");
        }
    }
}