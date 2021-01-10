// Ultrapassagem populacional, L1c - 8
#include <stdio.h>
#define CRESC_A 0.03 // Crescimento anual da população A
#define CRESC_B 0.015 // e da população B.

main(){
int popA, popB;
int anos;

scanf("%d%d", &popA, &popB);

for(anos = 0; popA <= popB; anos++){
    popA += (popA * CRESC_A);
    popB += (popB * CRESC_B);
}

printf("ANOS = %d\n", anos);
}