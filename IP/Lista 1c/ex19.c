// Grãos de milho no tabuleiro de xadrez, L1c - 19
#include <stdio.h>

main(){
int nMilhos, total = 0, i;

scanf("%d", &nMilhos);

total = nMilhos;

for (i = 1; i <= 32; i++){
    total += nMilhos;
}
for (i = 1; i < 32; i++){
    total += nMilhos * 2;
}

printf("%d\n", total);
}