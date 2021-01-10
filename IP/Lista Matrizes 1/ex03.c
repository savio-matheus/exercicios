// Diagonal secundária - ex3
#include <stdio.h>

main()
{
    int n, i, j;
    scanf("%d", &n);
    
    int matriz[n][n];
    
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if((i + j) == (n - 1))
            {
                printf("%d\n", matriz[i][j]);
            }
        }
    }
}