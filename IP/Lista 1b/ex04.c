// Locadora de charretes, L1b - 4
#include <stdio.h>
#include <math.h>

main(){
int horas;
float preco;

scanf("%d", &horas);

preco = ((horas / 3) * 10) + ((horas % 3) * 5);

printf("O VALOR A PAGAR E = %.2f\n", preco);
}