// Matriz xadrez enumerada - ex9
#include <stdio.h>

main()
{
    int m, n, i, j, k = 1;
    
    scanf("%d", &m);
    scanf("%d", &n);
    
    int matriz[m][n];
    
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if((i + j) % 2 == 0)
            {
                matriz[i][j] = 0;
            }
            else
            {
                matriz[i][j] = k;
                k++;
            }
        }
    }
    
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d", matriz[i][j]);
            if(j + 1 < n)
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