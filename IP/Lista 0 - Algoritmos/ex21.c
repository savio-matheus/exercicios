// Calcula a conta de água, a partir da soma da tarifa de água e
// da tarifa de esgoto (80% da tarifa da água).
#include <stdio.h>
#include <stdlib.h>

main(){
float agua, esgoto;

printf("Quanto foi a tarifa da agua? ");
scanf("%f", &agua);

esgoto = (agua * 0.8);

printf("A conta sera de %.2f reais.\n", (esgoto + agua));
system("pause");
}