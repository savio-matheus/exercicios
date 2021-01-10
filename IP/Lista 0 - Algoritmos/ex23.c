// Calcula a comissão sobre o valor do produto vendido (15%).
#include <stdio.h>
#include <stdlib.h>

main(){
float valorProduto;

printf("Qual o valor da sua venda? ");
scanf("%f", &valorProduto);

printf("Sua comissao sera de %.2f reais.\n", (valorProduto * 0.15));
system("pause");
}