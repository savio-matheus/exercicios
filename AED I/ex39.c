#include <stdio.h>
#include <stdlib.h>

struct sapo_t{
    int posicao;
    int pulo;
};
typedef struct sapo_t sapo_t;

int main (void)
{
    int num_pedras;
    int num_sapos;
    int i;
    int* pedras_v = NULL;
    sapo_t* sapos_v = NULL;
    sapo_t sapo;
    
    scanf(" %d", &num_pedras);
    scanf(" %d", &num_sapos);
    
    // A posição 0 representa a margem, logo as pedras começam em 1.
    num_pedras += 1;
    
    sapos_v = malloc(sizeof (sapo_t) * num_sapos);
    pedras_v = calloc(num_pedras, sizeof (int));
    
    for (i = 0; i < num_sapos; i++){
        scanf(" %d", &(sapos_v[i].posicao));
        scanf(" %d", &(sapos_v[i].pulo));
    }
    
    // Marca as pedras que um sapo qualquer pode alcançar
    for (i = 0; i < num_sapos; i++){
        sapo = sapos_v[i];
        while (sapo.posicao <= num_pedras){
            pedras_v[sapo.posicao] = 1;
            sapo.posicao += sapo.pulo;
        }
        
        sapo = sapos_v[i];
        while (sapo.posicao > 0){
            pedras_v[sapo.posicao] = 1;
            sapo.posicao -= sapo.pulo;
        }
    }
    
    for (i = 1; i < num_pedras; i++){
        printf("%d\n", pedras_v[i]);
    }
    
    return 0;
}
