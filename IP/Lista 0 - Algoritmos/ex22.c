// Calcula o ICMS (12%) de um produto com base no preço fornecido,
// obviamente.
#include <stdio.h>
#include <stdlib.h>

main(){
float preco;

printf("Quanto custa o produto (em reais)? ");
scanf("%f", &preco);

printf("O ICMS sera de %.2f reais.\n", (preco * 0.12));
system("pause");
}