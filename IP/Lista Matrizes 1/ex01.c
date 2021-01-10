// Determinante 2x2 - ex1
#include <stdio.h>

main()
{
    int matriz[2][2];
    int i, j, det;
    
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    det = (matriz[0][0] * matriz[1][1]);
    det += -(matriz[1][0] * matriz[0][1]);
    
    printf("%d\n", det);
}