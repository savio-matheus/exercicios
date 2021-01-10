// Determina a quantidade de ingressos a serem vendidos para, pelo menos,
// cobrir o custo de um evento qualquer, a partir do custo de realização
// e do custo do ingresso, a serem fornecidos pelo usuário.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
float cEvento, cIngresso;
float numIngressos;

printf("Insira o custo do evento e o valor do ingresso: ");
scanf("%f%f", &cEvento, &cIngresso);

numIngressos = (cEvento / cIngresso);
numIngressos = ceil(numIngressos); // Garante que não será um número quebrado.

printf("Voce precisa vender pelo menos %.f ingressos.\n", numIngressos);
system("pause");
}