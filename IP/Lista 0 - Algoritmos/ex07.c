/* Com base em dois valores fornecidos,
um para o peso antigo e outro para o
peso atual, o usuario será informado
se a diminuição do peso atual for de
20% em relação ao antigo (se diminuir).*/
#include <stdio.h>

main(){
float pesoA, pesoN;

printf("Digite seu peso antigo: ");
scanf("%f", &pesoA);

printf("Digite seu peso atual: ");
scanf("%f", &pesoN);

if ((pesoA - pesoN) >= (pesoA * 0.2)){
    printf("Voce emagreceu em 20%% ou mais.");
    }
else {
    printf("Nada a relatar");
    }
}
