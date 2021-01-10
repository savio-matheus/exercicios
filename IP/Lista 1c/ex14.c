// Número de finais, L1c - 14
#include <stdio.h>

main(){
int nTimes, k = 1, i = 1, j = 2, partidas;

scanf("%d", &nTimes);

if (nTimes < 2){
    printf("Campeonato invalido!\n");
    return 0;
}

// Fórmula da combinação, com n = nTimes e sempre p = 2.
partidas = ((nTimes) * (nTimes - 1)) / 2;

for (k; k <= partidas; k++){
    if (j > nTimes){
        i++;
        j = i + 1;
    }
    
    printf("Final %d: Time%d X Time%d\n", k, i, j);
    j++;
}

}