// Valor em notas e moedas, L1a - 12
#include <stdio.h>

main(){
int total;
int cem, cinquenta, dez, um;

scanf("%d", &total);

cem = total / 100;
cinquenta = (total % 100) / 50;
dez = ((total % 100) - (cinquenta * 50)) / 10;
um = (total % 100) % 10;

printf("NOTAS DE 100 = %d\n", cem);
printf("NOTAS DE 50 = %d\n", cinquenta);
printf("NOTAS DE 10 = %d\n", dez);
printf("MOEDAS DE 1 = %d\n", um);
}