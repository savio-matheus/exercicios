// Volume da pirâmide de base hexagonal, L1a, - 5
#include <stdio.h>
#define RAIZ 1.73205 // Raíz de 3

main(){
double aresta, altura;
double aBase, volume;

scanf("%lf%lf", &altura, &aresta);

aBase = (3 * (aresta * aresta) * RAIZ) / 2;
volume = (aBase * altura) / 3;

printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n", volume);
}