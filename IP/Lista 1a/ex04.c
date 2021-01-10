//  Cálculo do Delta na Equação de Báskara, l1a - 4
#include <stdio.h>

main(){
int a, b, c;
float delta;

scanf("%d%d%d", &a, &b, &c);

delta = ((b * b) - 4 * a * c);

printf("O VALOR DE DELTA E = %.2f\n", delta);
}