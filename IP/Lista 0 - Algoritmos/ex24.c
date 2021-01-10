// Calcula a porcentagem da participação de dois sócios em uma poupança.
#include <stdio.h>
#include <stdlib.h>

main(){
float socio1, socio2; // Para o valor e percentual.
float total;

printf("Insira o valor do primeiro socio: ");
scanf("%f", &socio1);
printf("Agora, o do segundo: ");
scanf("%f", &socio2);

total = socio1 + socio2;
// Substitui o valor em dinheiro pelo percentual de contribuição.
socio1 = (socio1 / total) * 100;
socio2 = (socio2 / total) * 100;

printf("Eis o percentual de contribuicao de cada socio:\n");
printf("Socio 1: %.2f%%\nSocio 2: %.2f%%\n", socio1, socio2);
system("pause");
}