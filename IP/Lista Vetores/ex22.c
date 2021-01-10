// Apague e Ganhe - ex22
#include <stdio.h>

main()
{
    while(1)
    {
        long int dim, retira, num, i, j;
        scanf("%ld", &dim);
        scanf("%ld", &retira);

        if(dim <= 0 || retira <= 0) break;

        int vetor[dim];

        scanf("%ld", &num);

        for(i = (dim - 1); i >= 0; i--)
        {
            vetor[i] = num % 10;
            num /= 10;
        }

        for(i = 0; i < 9; i++)
        {
            for(j = 0; j < dim; j++)
            {
                if(vetor[j] == i && retira)
                {
                    vetor[j] = -1;
                    retira--;
                }
                else if(!retira)
                {
                    goto impressao;
                }
            }
        }

        impressao:
            num = 0;
            j = 1;
            for(i = (dim - 1); i >= 0; i--)
            {
                if(vetor[i] != -1)
                {
                    num += vetor[i] * j;
                    j *= 10;
                }
            }
            printf("%ld\n", num);
    }
}