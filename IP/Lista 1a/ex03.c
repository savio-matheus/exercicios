// Custo da lata de cerveja, L1a - 3
// Custo do alumínio por metro quadrado = R$100.
#include <stdio.h>
#define PI 3.14159

main(){
double raio, altura;
double areaL, custoL;

scanf("%lf%lf", &raio, &altura);

areaL = (2 * (PI * raio * raio)) + (2 * PI * raio * altura);
custoL = (areaL * 100);

printf("O VALOR DO CUSTO E = %.2lf\n", custoL);
}