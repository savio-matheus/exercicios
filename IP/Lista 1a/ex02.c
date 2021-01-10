// Conversões para o sistema métrico, L1a - 2
#include <stdio.h>

main(){
double temperatura, chuva;

scanf("%lf%lf", &temperatura, &chuva);

temperatura = (5 * (temperatura - 32)) / 9;
chuva = (chuva * 25.4);

printf("O VALOR EM CELSIUS = %.2lf\n", temperatura);
printf("A QUANTIDADE DE CHUVA E = %.2lf\n", chuva);
}