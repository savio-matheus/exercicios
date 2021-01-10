/* Obtém as dimensões espaciais de uma caixa d'água e determina quantos
litros de água ela comporta. */
#include <stdio.h>
#include <stdlib.h>

main(){
float alt, larg, compr;
float litros;

printf("Insira os dados (em metros) altura, largura e comprimento: ");
scanf("%f%f%f", &alt, &larg, &compr);

litros = (alt * larg * compr) * 1000;

printf("Essa caixa comporta %f litros de %cgua.\n", litros, 160);
system("PAUSE");
}