/* Recebe a cotação do dólar e converte um valor em dólares
para reais (todos inseridos pelo usuário). */
#include <stdio.h>
#include <stdlib.h>

main(){
float cambio, dol;

printf("Qual o valor do dolar em reais? ");
scanf("%f", &cambio);
printf("Quantos dol voce tem? ");
scanf("%f", &dol);

printf("%.2f dolares = %.2f reais.\n", dol, (dol * cambio));

system("PAUSE");
}