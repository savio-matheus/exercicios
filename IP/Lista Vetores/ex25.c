// Loteria - ex25
#include <stdio.h>

main()
{
    int sorteio[6], aposta[6], apostadores;
    int sena = 0, quina = 0, quadra = 0, acertos = 0;
    int i, j, k;

    for(i = 0; i < 6; i++)
    {
        scanf("%d", &sorteio[i]);
    }

    scanf("%d", &apostadores);

    for(i = 0; i < apostadores; i++)
    {
        acertos = 0;
        for(j = 0; j < 6; j++)
        {
            scanf("%d", &aposta[i]);
            for(k = 0; k < 6; k++)
            {
                if(aposta[i] == sorteio[k])
                {
                    acertos++;
                }
            }
        }

        switch (acertos)
        {
            case 6:
                sena++;
                break;
            case 5:
                quina++;
                break;
            case 4:
                quadra++;
                break;
        }
    }

    if(sena)
    {
        printf("Houve %d acertador(es) para a sena\n", sena);
    }
    else
    {
        printf("Nao houve acertador para a sena\n");
    }
    
    if(quina)
    {
        printf("Houve %d acertador(es) para a quina\n", quina);
    }
    else
    {
        printf("Nao houve acertador para a quina\n");
    }
    
    if(quadra)
    {
        printf("Houve %d acertador(es) para a quadra\n", quadra);
    }
    else
    {
        printf("Nao houve acertador para a quadra\n");
    }
}