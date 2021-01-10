// Valida sudoku - ex22

#include <stdio.h>

int valida_3x3 (int matriz[][9], int addM, int addN)
{
    int i, j, k = 0, l;
    int vetor[9];

    for(i = addM; i < 3 + addM; i++)
    {
        for(j = addN; j < 3 + addN; j++)
        {
            vetor[k] = matriz[i][j];
            k++;
        }
    }

    for(i = 0; i < 9; i++)
    {
        l = vetor[i];
        for(j = i + 1; j < 9; j++)
        {
            if(l == vetor[j]) return 1;
        }
    }

    return 0;
}

int valida_coluna (int matriz[][9])
{
    int i, j, k;

    for(j = 0; j < 9; j++)
    {
        for(i = 0; i < 9; i++)
        {
            for(k = i; k < 9; k++)
            {
                if(matriz[i][j] == matriz[k][j] &&
                    i != k)
                    {
                        return 1;
                    }
            }
        }
    }

    return 0;
}

int valida_linha (int matriz[][9])
{
    int i, j, k;

    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9; j++)
        {
            for(k = j; k < 9; k++)
            {
                if(matriz[i][j] == matriz[i][k] &&
                k != j)
                {
                    return 1;
                }
            }
        }
    }

    return 0;
}

main()
{
    int sudoku[9][9];
    int i, j;

    // Recebe os elementos
    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9; j++)
        {
            scanf("%d", &sudoku[i][j]);
        }
    }

    // Testa validade
    if(valida_linha(sudoku))
    {
        printf("invalido\n");
        return 0;
    }

    if(valida_coluna(sudoku))
    {
        printf("invalido\n");
        return 0;
    }
    
    for(i = 0; i <= 6; i += 3)
    {
        for(j = 0; j <= 6; j += 3)
        {
            if(valida_3x3(sudoku, i, j))
            {
                printf("invalido\n");
                return 0;
            }
        }
    }

    printf("valido\n");
    return 0;
}