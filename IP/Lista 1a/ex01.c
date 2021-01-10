// Consumo de energia L1a - 1
// 100 kW/h = 70 % do salário mínimo.
#include <stdio.h>

main(){
double salMin, custokw, consumokw, conta;

scanf("%lf%lf", &salMin, &consumokw);

custokw = (salMin * 0.7) / 100;
conta = (custokw * consumokw);

printf("Custo por kW: R$ %.2lf\n", custokw);
printf("Custo do consumo: R$ %.2lf\n", conta);
printf("Custo com desconto: R$ %.2lf\n", conta * 0.9);
}