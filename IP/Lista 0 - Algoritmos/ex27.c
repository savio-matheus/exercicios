// Pega o tempo de estudo diário (em minutos) e calcula o total de horas
// de estudo depois de 90 dias.
#include <stdio.h>
#include <stdlib.h>

main(){
int minEstudo;
float hrsEstudo;

printf("Quantos minutos voce pode estudar por dia? ");
scanf("%d", &minEstudo);

hrsEstudo = (minEstudo * 90) / 60;

printf("Apos 90 dias voce tera estudado por %.2f horas.\n", hrsEstudo);
system("pause");
}