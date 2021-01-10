// Recebe o valor da renda mensal e o divide para várias necessidades
// segundo alguns percentuais.
#include <stdio.h>
#include <stdlib.h>

main(){
float renda;

printf("Quanto voce ganha? ");
scanf("%f", &renda);

printf("\n===================================================\n");
printf("Gasto com saude (10%%): %.2f reais;\n", (renda * 0.1));
printf("Gasto com educacao (25%%): %.2f reais;\n", (renda * 0.25));
printf("Gasto com alimentacao (30%%): %.2f reais;\n", (renda * 0.3));
printf("Gasto com vestuario (10%%): %.2f reais;\n", (renda * 0.1));
printf("Gasto com lazer (5%%): %.2f reais;\n", (renda * 0.05));
printf("Outros gastos (20%%): %.2f reais.\n\n\n", (renda * 0.2));
system("pause");
}