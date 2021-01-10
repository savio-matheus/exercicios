// 6 - CPF

#include <stdio.h>
#include <stdlib.h>

#define CPF_DIM 11
#define RESTO_10 10

int cpf_eh_valido(const int *cpf)
{
    int b1 = cpf[9];
    int b2 = cpf[10];
    int soma1 = 0;
    int soma2 = 0;
    int i, j;
    
    for (i = 0; i < 9; i++) {
        soma1 += cpf[i] * (i + 1);
        soma2 += cpf[8 - i] * (i + 1);
    }
    
    if ((i = soma1 % CPF_DIM) == RESTO_10) i = 0;
    if ((j = soma2 % CPF_DIM) == RESTO_10) j = 0;
    
    return (i == b1 && j == b2);
}

int main (void)
{
    char *resultado[] = {"CPF invalido", "CPF valido"};
    int testes, i, j;
    int **cpfs;
    
    scanf(" %d", &testes);
    cpfs = malloc(sizeof (int *) * testes);
    
    for (i = 0; i < testes; i++) {
        cpfs[i] = (int *) malloc(sizeof (int) * CPF_DIM);
        
        for (j = 0; j < CPF_DIM; j++) {
            scanf(" %d", &cpfs[i][j]);
        }
    }
    
    for (i = 0; i < testes; i++)
        printf("%s\n", resultado[ cpf_eh_valido( cpfs[i] ) ]);

    return 0;
}

