// Ler e imprimir - ex4
#include <stdio.h>

main()
{
    int m = 0, n = 0, i, j;
    
    while(m <= 0 || m > 10) scanf("%d", &m);
    while(n <= 0 || n > 10) scanf("%d", &n);
    
    int matriz[m][n];
    
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(i = 0; i < m; i++)
    {
        printf("linha %d:  ", i);
        for(j = 0; j < n; j++)
        {
            printf("%d", matriz[i][j]);
            if(j + 1 < n)
            {
                printf(",");
            }
            else
            {
                printf("\n");
            }
        }
    }
}