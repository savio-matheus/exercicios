// Matriz xadrez - ex5
#include <stdio.h>

main()
{
    int m, n, i, j, numero = 1;
    
    scanf("%d", &m);
    scanf("%d", &n);
    
    int matriz[m][n];
    
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(numero)
            {
                matriz[i][j] = 1;
                numero = 0;
            }
            else
            {
                matriz[i][j] = 0;
                numero = 1;
            }
        }
    }
    
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
}