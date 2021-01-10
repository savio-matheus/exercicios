#include <stdio.h>
#include <limits.h>

struct rotulo{
    int tipo;
    int quant;
};

int main (void)
{
    int tipos_rotulos;
    int quant_balas;
    int menor_quantidade = INT_MAX;
    int temp, i, j;

    scanf(" %d%d", &quant_balas, &tipos_rotulos);
    
    struct rotulo rotulos[tipos_rotulos];
    for(i = 0; i < tipos_rotulos; i++){
        rotulos[i].tipo = i + 1;
        rotulos[i].quant = 0;
    }
    
    for(i = 0; i < quant_balas; i++){
        scanf(" %d", &temp);
        
        for (j = 0; j < tipos_rotulos; j++){
            if (rotulos[j].tipo == temp){
                rotulos[j].quant++;
                break;
            }
        }
    }
    
    for (j = 0; j < tipos_rotulos; j++){
        if (rotulos[j].quant < menor_quantidade){
            menor_quantidade = rotulos[j].quant;
        }
    }
    
    // "menor_quantidade" acaba sendo o número máximo de envelopes.
    printf("%d\n", menor_quantidade);

    return 0;
}
