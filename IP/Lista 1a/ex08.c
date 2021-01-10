// Custo final de um carro L1a - 8
#include <stdio.h>

main(){
double preco, distribuidor, imposto;

scanf("%lf%lf%lf", &preco, &distribuidor, &imposto);

distribuidor /= 100;
imposto /= 100;
preco += (preco * distribuidor) + (preco * imposto);

printf("O VALOR DO CARRO  E = %.2lf\n", preco);
}