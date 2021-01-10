// Capicua (Lista 1)
#include <stdio.h>
#include <stdlib.h>

int inverte(int num)
{
    const int DIVISOR = 10;
    int numInvertido = 0;
    int peso = 1;

    while(num / peso != 0)
        peso *= 10;

    if(peso > 1)
        peso /= 10;

    for(peso; num != 0; peso /= 10){
        numInvertido += (num % DIVISOR) * peso;
        num /= DIVISOR;
    }

    return numInvertido;
}

int main(void)
{
    int* listaNumeros = NULL;
    int quant;
    int i;

    scanf(" %d", &quant);
    listaNumeros = (int*) malloc(quant * sizeof (int));

    for(i = 0; i < quant; i++)
        scanf(" %d", &listaNumeros[i]);

    for(i = 0; i < quant; i++){
        if(listaNumeros[i] == inverte(listaNumeros[i]))
            printf("yes");
        else
            printf("no");

        if(i + 1 < quant)
            printf(" ");
        else
            printf("\n");
    }

    return 0;
}
