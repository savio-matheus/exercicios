// União e intersecção de conjuntos - ex27
#include <stdio.h>

// Organiza e imprime a união de A e B.
void uniao (int *A, int *B, int tA, int tB)
{
    int i, j, k;
    int uniao = 0, repetiu;
    
    // Conta quantos elementos de B estão em A
    for(j = 0; j < tB; j++)
    {
        for(k = 0; k < tA; k++)
        {
            if(B[j] == A[k])
            {
                uniao++;
                break;
            }
        }
    }
    
    // Subtrai os repetidos e soma os demais para obter
    // o tamanho do vetor que armazenará a união.
    uniao = (tA + tB - uniao);
    int vetUniao[uniao];
    
    // Passagem dos elementos de A para a união.
    for(i = 0; i < tA; i++)
    {
        vetUniao[i] = A[i];
    }
    
    // Passagem dos elementos de B para a união.
    // Note que há algumas etapas a mais para garantir
    // que não ocorram repetições.
    for(i = tA; i < uniao; i++)
    {
        for(j = 0; j < tB; j++)
        {
            repetiu = 0;
            for(k = 0; k < tA; k++)
            {
                if(B[j] == A[k])
                {
                    repetiu = 1;
                    break;
                }
            }

            if(!repetiu)
            {
                vetUniao[i] = B[j];
                i++;
            }
        }
    }
    
    // Por fim, a impressão do vetor união já pronto.
    printf("(");
    for(i = 0; i < uniao; i++)
    {
        printf("%d", vetUniao[i]);
        
        if(i + 1 < uniao) printf(",");
        else printf(")\n");
    }
}

// Organiza e imprime a intersecção de A e B.
void inter (int *A, int *B, int tA, int tB)
{
    int i, j, k, iguais = 0;
    
    for(i = 0; i < tB; i++)
    {
        for(j = 0; j < tA; j++)
        {
            if(B[i] == A[j]) iguais++;
        }
    }
    
    printf("(");
    for(i = 0; i < tB; i++)
    {
        for(j = 0; j < tA; j++)
        {
            if(B[i] == A[j])
            {
                printf("%d", A[j]);
                iguais--;
                
                if(iguais > 0) printf(",");
                else goto final;
            }
        }
    }
    final:
        printf(")\n");
}

main()
{
    int i, j, k, repetiu = 0;
    int tA = 0, tB = 0;
    while(tA < 1 || tA > 100) scanf("%d", &tA);
    while(tB < 1 || tB > 100) scanf("%d", &tB);
    
    int A[tA], B[tB];
    
    // Recebe elementos sem repetição
    for(i = 0; i < tA; i++) // A
    {
        do
        {
            repetiu = 0;
            scanf("%d", &A[i]);
            
            // É necessário verificar todos os anteriores.
            for(j = i; j >= 0; j--)
            {
                if(A[j] == A[i] && i != j)
                {
                    repetiu = 1;
                }
            }
            
        }while(repetiu);
    }
    
    for(i = 0; i < tB; i++) // B
    {
        do
        {
            repetiu = 0;
            scanf("%d", &B[i]);
            
            for(j = i; j >= 0; j--)
            {
                if(B[j] == B[i] && i != j)
                {
                    repetiu = 1;
                }
            }
            
        }while(repetiu);
    }
    
    uniao(A, B, tA, tB);
    inter(A, B, tA, tB);
}